#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2784467705U;
signed char var_13 = (signed char)-36;
int var_14 = -1406761036;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 5944276998680197811LL;
signed char var_17 = (signed char)48;
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
