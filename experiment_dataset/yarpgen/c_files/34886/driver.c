#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 470320197U;
short var_10 = (short)-6928;
unsigned long long int var_11 = 2233995854954580443ULL;
int zero = 0;
short var_15 = (short)18005;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-2436;
signed char var_18 = (signed char)-36;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
