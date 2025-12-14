#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 912939730U;
signed char var_1 = (signed char)61;
int var_3 = 2060895158;
short var_6 = (short)888;
unsigned char var_8 = (unsigned char)12;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)-8223;
unsigned int var_12 = 152046244U;
int var_13 = -894169679;
unsigned long long int var_14 = 15755785942544094039ULL;
unsigned short var_15 = (unsigned short)1211;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
