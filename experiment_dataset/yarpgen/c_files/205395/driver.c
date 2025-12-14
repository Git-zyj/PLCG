#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1366679783;
unsigned char var_1 = (unsigned char)103;
unsigned short var_2 = (unsigned short)44719;
unsigned long long int var_3 = 9072711072572825440ULL;
short var_4 = (short)8398;
short var_5 = (short)3836;
short var_6 = (short)30541;
long long int var_7 = -8709287323651247656LL;
unsigned long long int var_8 = 3953394925873739084ULL;
long long int var_9 = -2371709194373918766LL;
int var_11 = -700874361;
unsigned short var_12 = (unsigned short)6756;
signed char var_13 = (signed char)-124;
int zero = 0;
unsigned int var_14 = 293711040U;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
