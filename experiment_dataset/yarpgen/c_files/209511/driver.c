#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15476561593420026996ULL;
_Bool var_3 = (_Bool)1;
short var_4 = (short)861;
unsigned short var_9 = (unsigned short)2562;
unsigned short var_10 = (unsigned short)6766;
unsigned short var_13 = (unsigned short)61811;
_Bool var_14 = (_Bool)1;
int var_16 = -195084742;
int zero = 0;
long long int var_17 = 8171718085834641780LL;
unsigned long long int var_18 = 6245990243689171600ULL;
unsigned long long int var_19 = 516834586940841622ULL;
unsigned char var_20 = (unsigned char)105;
signed char var_21 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
