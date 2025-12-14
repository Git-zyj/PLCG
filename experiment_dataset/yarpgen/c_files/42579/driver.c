#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_6 = -123571258;
unsigned short var_8 = (unsigned short)70;
long long int var_10 = 5287754838671887625LL;
unsigned short var_11 = (unsigned short)46616;
int zero = 0;
long long int var_13 = 9210784125671758859LL;
unsigned long long int var_14 = 931418682221227990ULL;
int var_15 = -1861957265;
unsigned short var_16 = (unsigned short)62669;
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
