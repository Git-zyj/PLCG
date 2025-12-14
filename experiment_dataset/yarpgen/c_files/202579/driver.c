#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17262999504269415002ULL;
unsigned long long int var_2 = 7253738263643107480ULL;
unsigned long long int var_10 = 7718929099626017238ULL;
int zero = 0;
unsigned int var_11 = 2254684235U;
unsigned char var_12 = (unsigned char)62;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
