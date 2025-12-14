#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3589416366314599873LL;
int var_3 = -596976243;
unsigned char var_5 = (unsigned char)81;
int var_6 = 729020505;
_Bool var_9 = (_Bool)1;
long long int var_11 = 3724852565729901425LL;
unsigned char var_14 = (unsigned char)24;
int zero = 0;
long long int var_20 = -211248188694794992LL;
short var_21 = (short)5784;
unsigned long long int var_22 = 1164313260019774712ULL;
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
