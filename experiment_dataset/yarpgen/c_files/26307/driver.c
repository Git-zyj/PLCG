#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7625073705074048193LL;
int var_4 = 119501723;
unsigned short var_5 = (unsigned short)47735;
short var_7 = (short)-29335;
unsigned short var_9 = (unsigned short)53860;
signed char var_11 = (signed char)-38;
short var_14 = (short)12023;
unsigned char var_15 = (unsigned char)124;
short var_16 = (short)-29333;
unsigned char var_17 = (unsigned char)193;
unsigned long long int var_19 = 2204385067513851093ULL;
int zero = 0;
unsigned long long int var_20 = 9042827584409329376ULL;
short var_21 = (short)8187;
short var_22 = (short)-1550;
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
