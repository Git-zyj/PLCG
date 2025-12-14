#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9001434430138870150LL;
signed char var_1 = (signed char)65;
signed char var_4 = (signed char)-115;
unsigned short var_5 = (unsigned short)64081;
unsigned int var_6 = 4204013446U;
unsigned int var_7 = 1931668745U;
unsigned long long int var_11 = 16551014835535235139ULL;
unsigned int var_13 = 4213574686U;
long long int var_15 = -2582517303048447214LL;
int zero = 0;
unsigned int var_16 = 2350010517U;
unsigned short var_17 = (unsigned short)12767;
unsigned long long int var_18 = 1838956230643990619ULL;
signed char var_19 = (signed char)-63;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
