#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 426341744609176813LL;
signed char var_3 = (signed char)-99;
short var_11 = (short)19397;
unsigned char var_12 = (unsigned char)252;
signed char var_13 = (signed char)-68;
unsigned int var_14 = 2798200617U;
int zero = 0;
int var_16 = -213622504;
long long int var_17 = 7467564283009844178LL;
unsigned char var_18 = (unsigned char)95;
unsigned char var_19 = (unsigned char)166;
unsigned long long int var_20 = 10090335488401107217ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
