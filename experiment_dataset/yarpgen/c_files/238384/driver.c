#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1975620830;
unsigned short var_4 = (unsigned short)30148;
short var_6 = (short)-24762;
unsigned short var_7 = (unsigned short)45660;
unsigned short var_11 = (unsigned short)11232;
int zero = 0;
short var_14 = (short)-17063;
unsigned short var_15 = (unsigned short)20754;
void init() {
}

void checksum() {
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
