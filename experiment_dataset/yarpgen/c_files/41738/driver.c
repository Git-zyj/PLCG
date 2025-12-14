#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32285;
short var_4 = (short)-28636;
unsigned char var_5 = (unsigned char)99;
unsigned char var_6 = (unsigned char)106;
short var_9 = (short)19773;
unsigned int var_10 = 3857576550U;
int zero = 0;
unsigned char var_11 = (unsigned char)218;
unsigned char var_12 = (unsigned char)253;
unsigned int var_13 = 1552118361U;
unsigned int var_14 = 2176146263U;
unsigned char var_15 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
