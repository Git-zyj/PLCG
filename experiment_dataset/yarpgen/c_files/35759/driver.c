#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1398505240U;
unsigned char var_5 = (unsigned char)168;
unsigned long long int var_8 = 1611778228866380253ULL;
unsigned int var_11 = 648012207U;
signed char var_12 = (signed char)34;
int zero = 0;
unsigned long long int var_13 = 2558962512967292688ULL;
long long int var_14 = 6229317960984299266LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
