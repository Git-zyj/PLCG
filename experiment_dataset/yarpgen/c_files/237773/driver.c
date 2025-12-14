#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)189;
unsigned char var_15 = (unsigned char)70;
unsigned int var_16 = 3793521170U;
short var_17 = (short)-23084;
short var_18 = (short)18557;
unsigned char var_19 = (unsigned char)100;
unsigned char var_20 = (unsigned char)182;
int var_21 = -158937309;
unsigned long long int var_22 = 15977992227047159105ULL;
unsigned char var_23 = (unsigned char)91;
unsigned char var_24 = (unsigned char)212;
unsigned char var_25 = (unsigned char)149;
unsigned long long int var_26 = 13190611680640723495ULL;
unsigned char var_27 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
