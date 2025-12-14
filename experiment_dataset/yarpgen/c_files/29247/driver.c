#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)119;
short var_4 = (short)-30256;
_Bool var_5 = (_Bool)0;
unsigned char var_9 = (unsigned char)158;
unsigned short var_10 = (unsigned short)3082;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)8126;
unsigned short var_14 = (unsigned short)32053;
unsigned char var_15 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
