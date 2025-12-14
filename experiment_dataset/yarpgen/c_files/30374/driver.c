#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_4 = (short)-16283;
_Bool var_8 = (_Bool)0;
short var_10 = (short)8745;
int zero = 0;
unsigned int var_11 = 3813106044U;
unsigned char var_12 = (unsigned char)45;
unsigned long long int var_13 = 6229358966034537847ULL;
short var_14 = (short)-9609;
unsigned int var_15 = 1597387959U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
