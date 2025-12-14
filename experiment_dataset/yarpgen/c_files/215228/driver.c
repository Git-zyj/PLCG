#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)37188;
unsigned short var_2 = (unsigned short)2852;
unsigned int var_4 = 18192307U;
signed char var_5 = (signed char)-84;
unsigned short var_8 = (unsigned short)42985;
int zero = 0;
signed char var_11 = (signed char)-23;
signed char var_12 = (signed char)69;
signed char var_13 = (signed char)103;
short var_14 = (short)5720;
unsigned char var_15 = (unsigned char)10;
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
