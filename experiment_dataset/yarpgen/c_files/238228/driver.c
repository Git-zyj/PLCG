#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-19705;
signed char var_5 = (signed char)-6;
short var_8 = (short)7226;
signed char var_9 = (signed char)-122;
signed char var_14 = (signed char)-7;
int zero = 0;
int var_20 = -656266346;
unsigned int var_21 = 1414504632U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
