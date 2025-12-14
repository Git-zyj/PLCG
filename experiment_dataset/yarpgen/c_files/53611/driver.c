#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
int var_1 = -624470954;
short var_4 = (short)-17879;
unsigned char var_5 = (unsigned char)201;
unsigned char var_10 = (unsigned char)33;
int zero = 0;
unsigned int var_11 = 2701391215U;
int var_12 = -2017941171;
short var_13 = (short)-27410;
unsigned int var_14 = 1114832620U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
