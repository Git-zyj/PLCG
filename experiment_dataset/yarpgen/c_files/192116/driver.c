#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3776507565U;
unsigned int var_3 = 1865629928U;
short var_7 = (short)17025;
unsigned int var_8 = 1456217512U;
unsigned long long int var_14 = 5575298094927199014ULL;
unsigned char var_16 = (unsigned char)13;
int zero = 0;
long long int var_17 = 3870123418217554982LL;
short var_18 = (short)-5605;
unsigned int var_19 = 2169747643U;
void init() {
}

void checksum() {
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
