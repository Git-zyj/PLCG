#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)18333;
unsigned short var_13 = (unsigned short)48692;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)133;
int var_17 = -276563065;
unsigned int var_19 = 404481405U;
int zero = 0;
signed char var_20 = (signed char)27;
unsigned char var_21 = (unsigned char)236;
long long int var_22 = 1815941604756832255LL;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
