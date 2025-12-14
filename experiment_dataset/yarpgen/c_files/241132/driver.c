#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8534;
unsigned char var_1 = (unsigned char)118;
unsigned int var_2 = 4046211798U;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)242;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 17886112934081308407ULL;
long long int var_8 = 6603873382551869317LL;
unsigned char var_11 = (unsigned char)146;
int zero = 0;
short var_12 = (short)-4718;
long long int var_13 = -1882913605011758039LL;
unsigned long long int var_14 = 675945229422997354ULL;
long long int var_15 = 3112483832662108404LL;
void init() {
}

void checksum() {
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
