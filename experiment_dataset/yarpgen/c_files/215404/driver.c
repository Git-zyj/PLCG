#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)90;
int var_3 = -330426536;
unsigned char var_4 = (unsigned char)168;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)14;
unsigned char var_8 = (unsigned char)95;
int var_11 = 1466529745;
unsigned char var_12 = (unsigned char)47;
_Bool var_13 = (_Bool)1;
unsigned long long int var_16 = 12254164603451330975ULL;
short var_17 = (short)-10047;
int var_18 = -1666474709;
int zero = 0;
int var_19 = 1525079604;
long long int var_20 = 7151110565788342508LL;
unsigned char var_21 = (unsigned char)186;
long long int var_22 = 3452416779870446291LL;
short var_23 = (short)-22249;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
