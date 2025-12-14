#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)9533;
unsigned int var_10 = 2937999583U;
signed char var_14 = (signed char)-15;
unsigned int var_15 = 3297534810U;
unsigned char var_16 = (unsigned char)229;
int zero = 0;
unsigned short var_18 = (unsigned short)24445;
unsigned char var_19 = (unsigned char)130;
int var_20 = -2143229903;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
