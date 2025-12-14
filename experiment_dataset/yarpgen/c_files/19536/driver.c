#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1293272750;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)55283;
unsigned long long int var_7 = 17959205799716375667ULL;
signed char var_8 = (signed char)90;
unsigned int var_11 = 3934131783U;
int zero = 0;
int var_12 = 1152135784;
signed char var_13 = (signed char)-122;
unsigned short var_14 = (unsigned short)49371;
void init() {
}

void checksum() {
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
