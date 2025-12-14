#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-115;
unsigned char var_4 = (unsigned char)162;
unsigned long long int var_5 = 15995214985366589474ULL;
unsigned int var_6 = 2309472908U;
long long int var_10 = -8954924397723536258LL;
short var_13 = (short)1149;
unsigned char var_14 = (unsigned char)25;
unsigned long long int var_15 = 7257916600591778184ULL;
unsigned char var_16 = (unsigned char)155;
int zero = 0;
unsigned int var_18 = 954899950U;
unsigned long long int var_19 = 2370082391549887026ULL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 18347624230186582187ULL;
unsigned int var_22 = 3752700104U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
