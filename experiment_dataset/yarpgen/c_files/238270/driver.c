#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_14 = (short)-23473;
int var_15 = -10320153;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 211621047U;
unsigned char var_19 = (unsigned char)73;
int zero = 0;
int var_20 = 693566048;
signed char var_21 = (signed char)-91;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
