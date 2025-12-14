#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2339758700U;
signed char var_5 = (signed char)-7;
int var_8 = 666657285;
unsigned long long int var_10 = 8557250094926072598ULL;
unsigned short var_18 = (unsigned short)50786;
int zero = 0;
long long int var_20 = -7830126235436355500LL;
short var_21 = (short)5607;
long long int var_22 = -1431761962266148898LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
