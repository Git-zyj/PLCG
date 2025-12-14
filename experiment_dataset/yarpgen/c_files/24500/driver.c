#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51292;
int var_2 = 469733655;
int var_3 = 144716461;
unsigned short var_4 = (unsigned short)37378;
unsigned int var_5 = 3410168358U;
int zero = 0;
unsigned int var_10 = 170637345U;
unsigned short var_11 = (unsigned short)27597;
unsigned int var_12 = 1768023707U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
