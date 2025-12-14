#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25958;
unsigned long long int var_2 = 4974518823162964966ULL;
unsigned short var_4 = (unsigned short)47712;
unsigned short var_5 = (unsigned short)62815;
unsigned long long int var_6 = 4849197901692621197ULL;
unsigned short var_8 = (unsigned short)62425;
unsigned char var_10 = (unsigned char)13;
unsigned long long int var_11 = 15520770093751676796ULL;
int zero = 0;
short var_15 = (short)30847;
unsigned char var_16 = (unsigned char)227;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)177;
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
