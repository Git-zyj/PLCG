#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)226;
int var_5 = -1989667856;
signed char var_6 = (signed char)-42;
short var_7 = (short)11274;
long long int var_8 = 6557534938227120306LL;
signed char var_11 = (signed char)39;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)42853;
int var_16 = -1165534744;
int zero = 0;
int var_17 = -748160139;
unsigned int var_18 = 2018741127U;
short var_19 = (short)9933;
int var_20 = -2035215191;
void init() {
}

void checksum() {
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
