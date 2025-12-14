#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1895238030;
int var_12 = -1219290908;
short var_14 = (short)-31035;
unsigned int var_16 = 2836167914U;
unsigned short var_17 = (unsigned short)14775;
int var_18 = -443298655;
int zero = 0;
unsigned short var_20 = (unsigned short)31302;
unsigned char var_21 = (unsigned char)220;
unsigned int var_22 = 1781804491U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
