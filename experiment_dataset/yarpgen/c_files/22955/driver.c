#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)123;
long long int var_2 = 3205825503372780641LL;
unsigned long long int var_3 = 12247323473112489978ULL;
short var_4 = (short)31866;
signed char var_5 = (signed char)-114;
signed char var_6 = (signed char)54;
unsigned long long int var_8 = 4078528236237872065ULL;
long long int var_10 = 3304390252544133300LL;
unsigned long long int var_12 = 5850909667893645441ULL;
int var_13 = -1119355897;
int var_14 = -1076722199;
int zero = 0;
short var_15 = (short)-17969;
long long int var_16 = -2530250217692035204LL;
unsigned char var_17 = (unsigned char)59;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
