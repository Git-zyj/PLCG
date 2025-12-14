#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1508158947;
int var_2 = -1010359452;
int var_6 = 1160346533;
int var_7 = 471093072;
int var_10 = -645383135;
int zero = 0;
int var_15 = -1844834180;
int var_16 = -1258401713;
int var_17 = -2061515399;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
