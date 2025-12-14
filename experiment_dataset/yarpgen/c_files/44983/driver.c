#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
unsigned int var_8 = 1695946987U;
long long int var_11 = -8134975576069622997LL;
unsigned int var_12 = 2419164780U;
unsigned int var_14 = 3747260246U;
int zero = 0;
signed char var_20 = (signed char)124;
unsigned char var_21 = (unsigned char)97;
unsigned long long int var_22 = 8936801124055647098ULL;
signed char var_23 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
