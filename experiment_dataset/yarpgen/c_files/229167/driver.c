#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)4550;
short var_4 = (short)-32029;
short var_6 = (short)-28362;
unsigned int var_8 = 1793556243U;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = -1701550822;
int var_12 = 871583685;
unsigned int var_13 = 3283747338U;
unsigned char var_14 = (unsigned char)152;
signed char var_15 = (signed char)10;
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
