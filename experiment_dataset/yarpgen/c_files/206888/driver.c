#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3817867254742470307ULL;
unsigned int var_6 = 1251087805U;
long long int var_10 = -3300744620442324504LL;
unsigned char var_11 = (unsigned char)238;
short var_12 = (short)-26120;
short var_13 = (short)19531;
int zero = 0;
unsigned int var_16 = 2596130558U;
unsigned short var_17 = (unsigned short)59727;
short var_18 = (short)30445;
int var_19 = 1906931120;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
