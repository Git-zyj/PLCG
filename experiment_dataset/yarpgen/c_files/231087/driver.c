#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2352819719U;
short var_2 = (short)16689;
signed char var_4 = (signed char)-20;
int var_5 = -1036758654;
unsigned char var_6 = (unsigned char)171;
short var_7 = (short)19135;
unsigned char var_8 = (unsigned char)244;
int zero = 0;
unsigned char var_12 = (unsigned char)73;
unsigned int var_13 = 1281448424U;
signed char var_14 = (signed char)-23;
short var_15 = (short)-27740;
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
