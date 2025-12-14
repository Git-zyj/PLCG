#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -882116137;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)33281;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 877449404231593427ULL;
unsigned short var_7 = (unsigned short)54743;
unsigned long long int var_9 = 2357565532380220063ULL;
unsigned short var_10 = (unsigned short)49463;
int var_11 = -79929670;
int zero = 0;
unsigned long long int var_12 = 16218633664611784854ULL;
unsigned short var_13 = (unsigned short)58773;
unsigned char var_14 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
