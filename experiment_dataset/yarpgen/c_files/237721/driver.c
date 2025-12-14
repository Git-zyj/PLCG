#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25418;
unsigned int var_1 = 3734107404U;
unsigned char var_2 = (unsigned char)186;
short var_4 = (short)20554;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)20;
short var_7 = (short)30630;
unsigned short var_8 = (unsigned short)6183;
short var_9 = (short)-27706;
unsigned long long int var_10 = 2475197553850416089ULL;
unsigned short var_11 = (unsigned short)54488;
int zero = 0;
short var_12 = (short)-16486;
int var_13 = 701642028;
int var_14 = -1966821586;
unsigned long long int var_15 = 4290736528184645441ULL;
unsigned int var_16 = 3536145122U;
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
