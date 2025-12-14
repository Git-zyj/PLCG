#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18513;
signed char var_2 = (signed char)7;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 608815237U;
unsigned long long int var_5 = 9144753590163975632ULL;
unsigned char var_6 = (unsigned char)62;
unsigned long long int var_8 = 11578398459991258400ULL;
_Bool var_9 = (_Bool)1;
long long int var_10 = -409832874406890186LL;
int zero = 0;
long long int var_12 = 7081121927144593411LL;
unsigned int var_13 = 8518536U;
unsigned char var_14 = (unsigned char)69;
unsigned int var_15 = 3426507056U;
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
