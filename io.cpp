#include "io.h"
#include <iostream>

int readNumber() {
	int number{};

	std::cout << "Enter Number: ";
	std::cin >> number;

	return number;
}

void writeAnswer(int answer) {
	std::cout << answer;
}
