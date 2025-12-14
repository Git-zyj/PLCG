#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2167980384079466059LL;
unsigned short var_6 = (unsigned short)26811;
short var_8 = (short)-18431;
long long int var_18 = 651946891789371619LL;
int zero = 0;
int var_20 = -1700689745;
long long int var_21 = 1859397821467265128LL;
unsigned char var_22 = (unsigned char)184;
int var_23 = -1592400947;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
