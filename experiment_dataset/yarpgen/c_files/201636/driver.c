#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2209265423U;
int var_1 = 279011382;
int var_3 = -875690201;
unsigned int var_9 = 1439148809U;
unsigned int var_12 = 4171685152U;
short var_13 = (short)24620;
int zero = 0;
signed char var_15 = (signed char)57;
short var_16 = (short)-22355;
short var_17 = (short)15075;
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
