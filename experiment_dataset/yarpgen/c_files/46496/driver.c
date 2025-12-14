#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 733361134U;
unsigned int var_9 = 437208777U;
unsigned char var_10 = (unsigned char)74;
unsigned char var_12 = (unsigned char)234;
int zero = 0;
unsigned char var_16 = (unsigned char)95;
unsigned int var_17 = 1231429491U;
unsigned int var_18 = 3650031446U;
unsigned char var_19 = (unsigned char)134;
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
