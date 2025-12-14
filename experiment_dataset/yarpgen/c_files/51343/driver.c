#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
unsigned char var_1 = (unsigned char)99;
unsigned long long int var_3 = 13484220097707162777ULL;
signed char var_4 = (signed char)102;
int var_5 = 73985358;
unsigned long long int var_6 = 5674335219995800387ULL;
unsigned short var_7 = (unsigned short)56495;
signed char var_9 = (signed char)-14;
short var_10 = (short)-17762;
unsigned char var_11 = (unsigned char)140;
unsigned long long int var_12 = 18357422245516612490ULL;
unsigned int var_13 = 2178974676U;
int zero = 0;
unsigned short var_15 = (unsigned short)24961;
unsigned char var_16 = (unsigned char)91;
unsigned int var_17 = 1134133968U;
unsigned long long int var_18 = 6796006079432806162ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
