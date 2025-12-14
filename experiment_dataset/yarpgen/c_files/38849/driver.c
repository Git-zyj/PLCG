#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -267803044;
long long int var_3 = 5325598504913721240LL;
unsigned short var_5 = (unsigned short)13019;
unsigned char var_7 = (unsigned char)43;
short var_8 = (short)-17231;
unsigned int var_12 = 3729012914U;
int zero = 0;
int var_13 = -1361199038;
long long int var_14 = -5064062032589375823LL;
int var_15 = -1553003196;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
