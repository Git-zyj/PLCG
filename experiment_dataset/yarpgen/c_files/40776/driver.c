#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13109619399588381920ULL;
unsigned int var_4 = 3728269618U;
unsigned short var_8 = (unsigned short)31140;
unsigned int var_10 = 3481298241U;
int var_13 = 227267446;
int zero = 0;
signed char var_14 = (signed char)69;
unsigned int var_15 = 1250781569U;
int var_16 = -40573919;
long long int var_17 = -5219811930928129659LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
