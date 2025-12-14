#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 869570915U;
unsigned int var_4 = 2316318790U;
unsigned int var_9 = 36634171U;
unsigned int var_11 = 917621365U;
int zero = 0;
unsigned int var_16 = 916524390U;
unsigned int var_17 = 1345614529U;
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
