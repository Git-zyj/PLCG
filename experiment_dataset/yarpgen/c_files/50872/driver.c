#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)34;
unsigned int var_2 = 2411673446U;
_Bool var_4 = (_Bool)1;
unsigned char var_8 = (unsigned char)153;
unsigned char var_10 = (unsigned char)141;
unsigned long long int var_13 = 7707183392755008064ULL;
unsigned long long int var_15 = 8224243004084497813ULL;
unsigned short var_16 = (unsigned short)48560;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -212603181347140454LL;
void init() {
}

void checksum() {
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
