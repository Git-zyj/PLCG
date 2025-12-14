#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)237;
short var_2 = (short)3792;
short var_5 = (short)-32668;
int var_7 = 1560217291;
long long int var_8 = -7074380273498450773LL;
int zero = 0;
long long int var_10 = -3127686427935299223LL;
int var_11 = 1805127321;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
