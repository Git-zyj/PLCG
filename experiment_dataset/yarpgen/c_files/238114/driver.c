#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_4 = (short)-6144;
unsigned short var_6 = (unsigned short)42787;
unsigned char var_8 = (unsigned char)248;
unsigned int var_10 = 3641077561U;
signed char var_15 = (signed char)-85;
int zero = 0;
unsigned char var_18 = (unsigned char)4;
signed char var_19 = (signed char)-45;
unsigned short var_20 = (unsigned short)7374;
void init() {
}

void checksum() {
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
