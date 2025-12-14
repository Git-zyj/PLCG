#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-18647;
_Bool var_3 = (_Bool)1;
short var_4 = (short)11210;
unsigned short var_6 = (unsigned short)21130;
unsigned char var_7 = (unsigned char)48;
unsigned char var_9 = (unsigned char)184;
unsigned char var_11 = (unsigned char)49;
unsigned short var_13 = (unsigned short)42094;
unsigned short var_14 = (unsigned short)34703;
unsigned short var_16 = (unsigned short)1990;
unsigned char var_17 = (unsigned char)1;
int zero = 0;
unsigned char var_18 = (unsigned char)232;
unsigned char var_19 = (unsigned char)245;
long long int var_20 = -5695205214936940397LL;
short var_21 = (short)19879;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
