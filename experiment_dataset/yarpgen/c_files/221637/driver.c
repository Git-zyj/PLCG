#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6149827557956024474ULL;
unsigned long long int var_5 = 3830435457602859126ULL;
long long int var_10 = -9146173966874096819LL;
long long int var_13 = -7708048819768255901LL;
int zero = 0;
short var_14 = (short)-29061;
unsigned long long int var_15 = 2013479931785647379ULL;
unsigned int var_16 = 4023930705U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
