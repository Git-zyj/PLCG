#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3430400283U;
unsigned char var_6 = (unsigned char)205;
short var_7 = (short)-9391;
unsigned char var_8 = (unsigned char)232;
long long int var_9 = 2974713130849748651LL;
unsigned long long int var_10 = 13643211058674545731ULL;
unsigned char var_11 = (unsigned char)218;
unsigned char var_12 = (unsigned char)231;
int zero = 0;
short var_13 = (short)-7246;
unsigned int var_14 = 1447973503U;
int var_15 = 1522177971;
unsigned long long int var_16 = 4825150753220148795ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
