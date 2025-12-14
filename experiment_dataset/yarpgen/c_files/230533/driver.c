#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-91;
unsigned char var_4 = (unsigned char)23;
int var_5 = -1709261184;
unsigned long long int var_7 = 16486350728383673366ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)24811;
unsigned int var_11 = 3179251773U;
int var_12 = -1950605664;
int var_13 = -537304176;
short var_14 = (short)20408;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
