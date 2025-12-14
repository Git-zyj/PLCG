#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8214254737179399590LL;
unsigned int var_3 = 3060996790U;
unsigned char var_5 = (unsigned char)148;
unsigned char var_6 = (unsigned char)62;
signed char var_7 = (signed char)62;
unsigned long long int var_8 = 3404744752677336697ULL;
int var_9 = -2074875219;
unsigned short var_10 = (unsigned short)24333;
int zero = 0;
int var_12 = 1858449870;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)3134;
int var_15 = -1883475867;
unsigned char var_16 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
