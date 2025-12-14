#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1830394145;
unsigned short var_2 = (unsigned short)18881;
_Bool var_3 = (_Bool)0;
short var_7 = (short)-32382;
unsigned short var_11 = (unsigned short)55428;
int zero = 0;
int var_12 = -1809519511;
unsigned long long int var_13 = 13531187527172144942ULL;
signed char var_14 = (signed char)-87;
signed char var_15 = (signed char)68;
void init() {
}

void checksum() {
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
