#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
long long int var_3 = 9017004128674594952LL;
short var_5 = (short)-22595;
short var_7 = (short)20857;
int zero = 0;
unsigned int var_14 = 1340663616U;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)25;
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
