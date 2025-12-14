#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-44;
long long int var_3 = 4728768133007581407LL;
unsigned int var_11 = 2025430497U;
int zero = 0;
unsigned long long int var_16 = 15723622695036105240ULL;
unsigned char var_17 = (unsigned char)188;
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
