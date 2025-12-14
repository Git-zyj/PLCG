#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)8;
unsigned long long int var_4 = 5243179376239644297ULL;
unsigned int var_6 = 2646856572U;
unsigned int var_10 = 1401322524U;
unsigned int var_13 = 1898827887U;
int zero = 0;
unsigned long long int var_15 = 4172376488764773542ULL;
unsigned long long int var_16 = 11994609886318510142ULL;
unsigned char var_17 = (unsigned char)51;
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
