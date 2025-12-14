#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-16;
unsigned int var_5 = 821543205U;
unsigned short var_6 = (unsigned short)19964;
unsigned int var_7 = 1289817074U;
unsigned char var_8 = (unsigned char)38;
int var_10 = -1125427263;
unsigned short var_11 = (unsigned short)8170;
int zero = 0;
short var_12 = (short)19907;
unsigned int var_13 = 4235228459U;
short var_14 = (short)2488;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)81;
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
