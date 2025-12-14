#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1794798979;
short var_1 = (short)-26189;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-7616;
int var_6 = -91253478;
unsigned char var_7 = (unsigned char)7;
unsigned long long int var_8 = 1550293700080378598ULL;
unsigned int var_9 = 2984322434U;
int zero = 0;
unsigned short var_10 = (unsigned short)2842;
signed char var_11 = (signed char)-4;
unsigned long long int var_12 = 5612610781386571866ULL;
unsigned short var_13 = (unsigned short)19034;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
