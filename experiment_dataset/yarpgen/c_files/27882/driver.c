#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-36;
unsigned long long int var_8 = 4881159554673062536ULL;
unsigned int var_14 = 2091105929U;
int zero = 0;
unsigned int var_19 = 1572243969U;
unsigned int var_20 = 1573215108U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
