#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10127811670311510534ULL;
short var_2 = (short)24035;
unsigned int var_5 = 3989765535U;
unsigned long long int var_7 = 13910748563252268497ULL;
unsigned char var_11 = (unsigned char)122;
unsigned long long int var_12 = 16226333841454783413ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-85;
signed char var_16 = (signed char)35;
void init() {
}

void checksum() {
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
