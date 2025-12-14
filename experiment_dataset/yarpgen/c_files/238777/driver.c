#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
short var_7 = (short)-24703;
_Bool var_8 = (_Bool)0;
short var_10 = (short)-16945;
unsigned short var_11 = (unsigned short)53973;
signed char var_12 = (signed char)-106;
unsigned long long int var_13 = 10323095537634139311ULL;
unsigned short var_15 = (unsigned short)49407;
unsigned short var_16 = (unsigned short)56720;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 1306478767865187959ULL;
int var_19 = 1571759237;
int zero = 0;
unsigned int var_20 = 4245358066U;
unsigned long long int var_21 = 6659318667540010879ULL;
unsigned short var_22 = (unsigned short)41199;
unsigned int var_23 = 2638949682U;
void init() {
}

void checksum() {
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
