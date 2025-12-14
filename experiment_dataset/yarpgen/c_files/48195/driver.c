#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26553;
unsigned short var_2 = (unsigned short)47098;
unsigned short var_5 = (unsigned short)65357;
long long int var_10 = -102111400509769717LL;
long long int var_13 = 5991390078097261176LL;
unsigned short var_14 = (unsigned short)9879;
unsigned short var_15 = (unsigned short)5029;
unsigned long long int var_16 = 2865355249213158597ULL;
unsigned short var_17 = (unsigned short)55099;
int zero = 0;
long long int var_18 = -2506748033719653132LL;
signed char var_19 = (signed char)-74;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
