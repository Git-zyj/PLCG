#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2021248769330016662LL;
unsigned short var_5 = (unsigned short)28089;
long long int var_6 = -1203169510912072089LL;
int zero = 0;
short var_16 = (short)-7149;
unsigned char var_17 = (unsigned char)232;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
