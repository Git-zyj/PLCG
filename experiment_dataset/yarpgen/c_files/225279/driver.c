#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-13;
long long int var_1 = 7421629444885007018LL;
unsigned short var_2 = (unsigned short)33827;
short var_3 = (short)-25260;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)125;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int var_9 = 1646617778;
int zero = 0;
int var_10 = 1408498760;
unsigned short var_11 = (unsigned short)15478;
short var_12 = (short)2154;
int var_13 = -1780543288;
unsigned short var_14 = (unsigned short)47402;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
