#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33359;
signed char var_5 = (signed char)28;
short var_10 = (short)20442;
signed char var_13 = (signed char)20;
unsigned char var_16 = (unsigned char)148;
unsigned short var_17 = (unsigned short)11835;
int zero = 0;
unsigned char var_18 = (unsigned char)20;
unsigned short var_19 = (unsigned short)39461;
unsigned char var_20 = (unsigned char)100;
unsigned char var_21 = (unsigned char)212;
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
