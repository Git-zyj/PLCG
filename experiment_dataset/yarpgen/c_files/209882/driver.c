#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -414882859;
signed char var_7 = (signed char)80;
signed char var_9 = (signed char)119;
signed char var_10 = (signed char)-13;
int zero = 0;
signed char var_14 = (signed char)-36;
int var_15 = 1154668918;
int var_16 = -922827114;
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
