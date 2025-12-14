#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30344;
unsigned char var_1 = (unsigned char)15;
unsigned char var_2 = (unsigned char)245;
unsigned short var_3 = (unsigned short)29720;
short var_4 = (short)267;
short var_5 = (short)-11568;
int var_6 = 1298179286;
unsigned long long int var_7 = 16380514431669927911ULL;
long long int var_9 = -7400677927815977931LL;
int zero = 0;
unsigned short var_11 = (unsigned short)11153;
signed char var_12 = (signed char)100;
unsigned char var_13 = (unsigned char)205;
unsigned long long int var_14 = 10032835731440657249ULL;
unsigned char var_15 = (unsigned char)195;
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
