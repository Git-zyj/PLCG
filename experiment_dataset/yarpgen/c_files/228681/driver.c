#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)61970;
unsigned long long int var_3 = 16768385946572851018ULL;
signed char var_5 = (signed char)-100;
unsigned int var_7 = 343476102U;
unsigned int var_12 = 1139441707U;
int zero = 0;
unsigned int var_13 = 2246980288U;
unsigned char var_14 = (unsigned char)255;
signed char var_15 = (signed char)-44;
unsigned long long int var_16 = 5487025386767117082ULL;
void init() {
}

void checksum() {
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
