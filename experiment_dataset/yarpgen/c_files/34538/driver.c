#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)226;
int var_10 = -324667382;
unsigned short var_11 = (unsigned short)30747;
unsigned int var_12 = 2626906559U;
unsigned char var_13 = (unsigned char)71;
int var_15 = 625897078;
unsigned char var_16 = (unsigned char)225;
short var_17 = (short)-6170;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = -1095620004;
unsigned long long int var_21 = 18297073658014294814ULL;
unsigned long long int var_22 = 2121754567039689124ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
