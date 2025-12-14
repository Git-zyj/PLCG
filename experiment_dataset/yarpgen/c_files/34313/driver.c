#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -587280053;
unsigned short var_1 = (unsigned short)62866;
signed char var_2 = (signed char)111;
long long int var_4 = 8951761195610055220LL;
unsigned short var_5 = (unsigned short)58179;
unsigned short var_7 = (unsigned short)31030;
unsigned short var_9 = (unsigned short)23019;
_Bool var_10 = (_Bool)0;
long long int var_11 = -5590285220206524651LL;
int var_12 = 563370898;
int zero = 0;
unsigned short var_13 = (unsigned short)24342;
long long int var_14 = -6649443507233860159LL;
signed char var_15 = (signed char)84;
unsigned short var_16 = (unsigned short)56597;
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
