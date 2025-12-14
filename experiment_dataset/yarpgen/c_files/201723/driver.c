#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -350655550;
unsigned int var_3 = 3756906254U;
unsigned short var_6 = (unsigned short)11390;
long long int var_7 = -2199232136705875303LL;
signed char var_10 = (signed char)-122;
short var_12 = (short)-5668;
int zero = 0;
signed char var_14 = (signed char)-63;
short var_15 = (short)-18880;
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
