#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)-26290;
int var_4 = -84464523;
unsigned short var_5 = (unsigned short)50485;
unsigned long long int var_6 = 8615407393070747978ULL;
unsigned int var_8 = 1148495513U;
unsigned int var_9 = 2096397071U;
signed char var_11 = (signed char)-45;
long long int var_13 = -2590960082494033157LL;
long long int var_14 = -8065953084040510664LL;
int zero = 0;
unsigned int var_16 = 3507206354U;
unsigned int var_17 = 537664367U;
long long int var_18 = 7582857250402803061LL;
long long int var_19 = -2852755888933365516LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
