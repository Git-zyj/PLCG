#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43139;
long long int var_2 = 5524392890230754767LL;
long long int var_5 = 1248888193158985715LL;
long long int var_6 = 278068204251959537LL;
long long int var_8 = 1267957951835934287LL;
unsigned short var_10 = (unsigned short)48775;
unsigned int var_11 = 176067005U;
unsigned short var_14 = (unsigned short)62852;
int zero = 0;
unsigned short var_16 = (unsigned short)60393;
unsigned short var_17 = (unsigned short)40280;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
