#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)29;
unsigned long long int var_2 = 1446133303500206384ULL;
unsigned int var_3 = 81752777U;
unsigned int var_8 = 2189921322U;
unsigned int var_12 = 301758535U;
short var_13 = (short)-18327;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 17579773555640742195ULL;
unsigned long long int var_17 = 15019883710229414221ULL;
int zero = 0;
unsigned long long int var_18 = 2634930088096375813ULL;
unsigned char var_19 = (unsigned char)26;
int var_20 = 80876227;
unsigned int var_21 = 146421273U;
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
