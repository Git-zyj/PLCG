#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = -836667885;
unsigned long long int var_6 = 7865008957167969276ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1721045059U;
int zero = 0;
unsigned int var_14 = 1634524772U;
int var_15 = -1683642038;
_Bool var_16 = (_Bool)1;
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
