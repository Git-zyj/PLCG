#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31531;
unsigned int var_1 = 1748455096U;
unsigned short var_3 = (unsigned short)50002;
unsigned char var_5 = (unsigned char)29;
long long int var_6 = 8984556599507203010LL;
unsigned short var_7 = (unsigned short)29207;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)33293;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = 1538372659;
unsigned char var_14 = (unsigned char)58;
unsigned short var_15 = (unsigned short)31726;
unsigned char var_16 = (unsigned char)21;
long long int var_17 = -1252410093708913213LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
