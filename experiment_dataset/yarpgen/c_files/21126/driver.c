#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4688452356025068123LL;
unsigned int var_4 = 3213531617U;
unsigned char var_9 = (unsigned char)19;
unsigned long long int var_12 = 5919318721503521505ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)247;
unsigned char var_17 = (unsigned char)96;
unsigned long long int var_18 = 4366280839755717240ULL;
unsigned long long int var_19 = 11114356366878674008ULL;
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
