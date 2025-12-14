#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)29;
unsigned char var_3 = (unsigned char)129;
short var_5 = (short)3342;
short var_6 = (short)23297;
short var_7 = (short)-31123;
unsigned short var_8 = (unsigned short)23734;
unsigned int var_11 = 3321230209U;
int zero = 0;
signed char var_12 = (signed char)-88;
signed char var_13 = (signed char)79;
void init() {
}

void checksum() {
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
