#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)59297;
_Bool var_4 = (_Bool)0;
unsigned short var_11 = (unsigned short)33014;
short var_12 = (short)19816;
unsigned char var_15 = (unsigned char)83;
unsigned short var_16 = (unsigned short)51798;
unsigned int var_17 = 1067538624U;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-8666;
unsigned int var_22 = 82981290U;
short var_23 = (short)-6004;
unsigned short var_24 = (unsigned short)16265;
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
