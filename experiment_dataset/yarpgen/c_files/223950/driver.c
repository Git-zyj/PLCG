#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3995895084868732663LL;
int var_6 = -638064672;
short var_9 = (short)-25805;
unsigned char var_10 = (unsigned char)172;
int var_15 = 2052813345;
int zero = 0;
unsigned int var_16 = 3058186139U;
unsigned int var_17 = 3509282958U;
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
