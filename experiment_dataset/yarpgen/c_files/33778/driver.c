#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1221712087;
int var_10 = -2101948666;
int var_11 = -195240019;
unsigned char var_14 = (unsigned char)128;
int zero = 0;
int var_15 = 2009787078;
long long int var_16 = 6841492806663456184LL;
void init() {
}

void checksum() {
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
