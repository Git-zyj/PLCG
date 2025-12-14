#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9156644214009497280ULL;
unsigned char var_6 = (unsigned char)8;
unsigned char var_8 = (unsigned char)112;
unsigned int var_15 = 1983456611U;
int var_16 = 796933904;
unsigned short var_18 = (unsigned short)11535;
int zero = 0;
signed char var_19 = (signed char)69;
unsigned int var_20 = 500874659U;
long long int var_21 = 3603476924789532160LL;
void init() {
}

void checksum() {
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
