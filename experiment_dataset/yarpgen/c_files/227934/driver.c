#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-112;
unsigned long long int var_6 = 8588657788657249037ULL;
unsigned long long int var_7 = 1260344820284150556ULL;
int var_13 = 1581878252;
int var_14 = -2061572870;
unsigned short var_17 = (unsigned short)19240;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 1328981875031631940ULL;
unsigned short var_21 = (unsigned short)2783;
long long int var_22 = -6774115223503449983LL;
unsigned long long int var_23 = 47454407095975002ULL;
int var_24 = -1047745541;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
