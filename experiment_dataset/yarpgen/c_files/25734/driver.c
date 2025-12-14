#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_8 = (short)24155;
_Bool var_11 = (_Bool)1;
long long int var_13 = -6155881590357298007LL;
unsigned char var_14 = (unsigned char)117;
unsigned char var_16 = (unsigned char)149;
short var_18 = (short)-1505;
int zero = 0;
int var_19 = -1855912337;
unsigned long long int var_20 = 11053035047622379771ULL;
unsigned long long int var_21 = 13283125680036525180ULL;
long long int var_22 = 1067331144666984923LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
