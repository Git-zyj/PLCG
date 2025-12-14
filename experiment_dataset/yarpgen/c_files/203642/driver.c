#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_6 = 24638205;
unsigned char var_7 = (unsigned char)81;
unsigned long long int var_14 = 2507198136755881889ULL;
int var_16 = 1183917183;
int zero = 0;
unsigned int var_20 = 4073883224U;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 12064663823974192521ULL;
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
