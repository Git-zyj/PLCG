#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 941335741;
unsigned short var_5 = (unsigned short)40101;
short var_6 = (short)-17223;
unsigned long long int var_7 = 13964165505873250750ULL;
int var_8 = 578028266;
long long int var_10 = -4633695978962050039LL;
unsigned int var_11 = 2478621224U;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)97;
int var_16 = -765383595;
int zero = 0;
unsigned int var_17 = 945859191U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
