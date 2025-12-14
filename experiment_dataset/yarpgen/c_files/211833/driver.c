#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1595687380;
unsigned char var_4 = (unsigned char)13;
short var_5 = (short)-1187;
unsigned long long int var_7 = 10354555959010978529ULL;
unsigned short var_8 = (unsigned short)41028;
unsigned char var_10 = (unsigned char)179;
unsigned short var_11 = (unsigned short)33902;
int zero = 0;
int var_13 = 2047109361;
unsigned long long int var_14 = 6346562595803828280ULL;
unsigned long long int var_15 = 3208247998394047050ULL;
void init() {
}

void checksum() {
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
