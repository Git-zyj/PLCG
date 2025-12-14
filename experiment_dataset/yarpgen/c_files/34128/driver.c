#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47915;
short var_4 = (short)30053;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-28031;
unsigned short var_8 = (unsigned short)19564;
int zero = 0;
signed char var_11 = (signed char)-110;
unsigned int var_12 = 1571715109U;
int var_13 = -2142887183;
unsigned int var_14 = 215313246U;
void init() {
}

void checksum() {
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
