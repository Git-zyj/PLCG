#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9066242399372249978LL;
signed char var_1 = (signed char)-35;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)245;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)8981;
unsigned long long int var_8 = 5620831573535166813ULL;
signed char var_10 = (signed char)30;
int zero = 0;
unsigned long long int var_11 = 17170058661033295817ULL;
unsigned char var_12 = (unsigned char)165;
unsigned int var_13 = 159819879U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
