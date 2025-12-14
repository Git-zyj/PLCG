#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34372;
unsigned int var_7 = 728306351U;
unsigned short var_15 = (unsigned short)30280;
long long int var_17 = 4431634436728268996LL;
int zero = 0;
int var_18 = 356492913;
unsigned short var_19 = (unsigned short)45365;
int var_20 = 1019777428;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
