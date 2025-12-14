#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64878;
short var_2 = (short)26443;
unsigned int var_3 = 486768790U;
int var_4 = 1012876619;
int var_5 = -57546321;
long long int var_8 = -7584941412659703271LL;
int var_11 = -1775751712;
unsigned short var_13 = (unsigned short)10215;
int var_14 = 1408138471;
unsigned short var_15 = (unsigned short)39838;
int var_16 = -2082827635;
int zero = 0;
int var_19 = 80669034;
unsigned char var_20 = (unsigned char)7;
void init() {
}

void checksum() {
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
