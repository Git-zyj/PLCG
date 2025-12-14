#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8522;
unsigned int var_1 = 2645730832U;
int var_14 = 28187454;
int zero = 0;
signed char var_15 = (signed char)87;
int var_16 = 1002575697;
unsigned int var_17 = 440637352U;
unsigned int var_18 = 1386610667U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
