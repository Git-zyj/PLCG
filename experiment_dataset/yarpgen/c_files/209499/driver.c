#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)116;
long long int var_10 = 8778633076100914948LL;
short var_11 = (short)17941;
int zero = 0;
unsigned char var_12 = (unsigned char)178;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)63;
_Bool var_15 = (_Bool)1;
int var_16 = -1319494518;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
