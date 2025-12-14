#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14612948361411105813ULL;
unsigned long long int var_2 = 7723014202989848942ULL;
int var_4 = -628360549;
long long int var_6 = 3802411678661207157LL;
unsigned short var_7 = (unsigned short)12327;
signed char var_10 = (signed char)-68;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 876214941040147629ULL;
int zero = 0;
signed char var_13 = (signed char)-107;
unsigned char var_14 = (unsigned char)109;
int var_15 = -949652847;
unsigned char var_16 = (unsigned char)164;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
