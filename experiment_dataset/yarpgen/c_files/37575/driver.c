#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 826172897U;
unsigned int var_5 = 1311002513U;
unsigned int var_6 = 545833483U;
signed char var_11 = (signed char)-73;
int zero = 0;
unsigned long long int var_16 = 15423313094772757370ULL;
unsigned int var_17 = 2089311917U;
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
