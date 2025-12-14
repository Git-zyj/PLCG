#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 449738406;
unsigned short var_3 = (unsigned short)1025;
unsigned int var_4 = 446648396U;
unsigned short var_5 = (unsigned short)43933;
unsigned long long int var_7 = 3165216635371403264ULL;
unsigned long long int var_9 = 18102013581343096759ULL;
unsigned long long int var_10 = 18430995774307101846ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 390558073246330870ULL;
signed char var_15 = (signed char)-32;
short var_16 = (short)-17923;
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
