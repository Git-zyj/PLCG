#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8783958280753880640LL;
unsigned int var_3 = 2746668653U;
unsigned char var_4 = (unsigned char)155;
unsigned char var_7 = (unsigned char)230;
unsigned char var_8 = (unsigned char)85;
unsigned short var_9 = (unsigned short)42102;
unsigned int var_12 = 2540623599U;
unsigned char var_14 = (unsigned char)43;
int zero = 0;
unsigned char var_15 = (unsigned char)205;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)48;
unsigned char var_18 = (unsigned char)61;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
