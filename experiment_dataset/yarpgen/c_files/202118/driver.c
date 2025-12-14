#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16847806708430402590ULL;
signed char var_6 = (signed char)-111;
unsigned int var_11 = 2435320065U;
unsigned long long int var_12 = 9564112448051143564ULL;
int zero = 0;
unsigned long long int var_13 = 14231161216421663742ULL;
unsigned long long int var_14 = 3528662704296230412ULL;
int var_15 = -74229224;
unsigned long long int var_16 = 7803263018896457619ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
