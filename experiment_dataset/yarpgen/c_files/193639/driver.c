#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6999;
unsigned int var_1 = 1663428567U;
unsigned int var_2 = 1698647514U;
signed char var_3 = (signed char)-12;
signed char var_4 = (signed char)-25;
unsigned char var_5 = (unsigned char)92;
unsigned short var_6 = (unsigned short)7350;
signed char var_7 = (signed char)97;
int var_8 = 236508189;
signed char var_9 = (signed char)-55;
unsigned long long int var_10 = 5238300560169903488ULL;
unsigned short var_12 = (unsigned short)58551;
signed char var_13 = (signed char)108;
int zero = 0;
int var_14 = 1935697496;
signed char var_15 = (signed char)86;
unsigned int var_16 = 2871377781U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
