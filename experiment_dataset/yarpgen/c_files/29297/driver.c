#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31503;
unsigned short var_3 = (unsigned short)21453;
short var_5 = (short)19736;
unsigned long long int var_7 = 14398490934273717819ULL;
int var_8 = -1881867081;
signed char var_9 = (signed char)-26;
unsigned char var_12 = (unsigned char)207;
int var_13 = 386463635;
signed char var_14 = (signed char)56;
int zero = 0;
unsigned int var_16 = 2655544520U;
unsigned char var_17 = (unsigned char)151;
unsigned short var_18 = (unsigned short)11564;
void init() {
}

void checksum() {
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
