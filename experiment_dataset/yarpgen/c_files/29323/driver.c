#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -442161007;
unsigned char var_1 = (unsigned char)227;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)98;
unsigned int var_6 = 416798083U;
unsigned short var_7 = (unsigned short)46676;
unsigned char var_8 = (unsigned char)38;
long long int var_9 = -7326303197890476705LL;
unsigned int var_10 = 3700717620U;
unsigned char var_12 = (unsigned char)52;
unsigned char var_13 = (unsigned char)255;
int zero = 0;
int var_14 = 1148573829;
long long int var_15 = -290538415555764780LL;
short var_16 = (short)17687;
unsigned char var_17 = (unsigned char)155;
void init() {
}

void checksum() {
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
