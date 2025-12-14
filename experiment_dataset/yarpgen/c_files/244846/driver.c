#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)8;
unsigned int var_2 = 210837827U;
short var_5 = (short)24902;
unsigned char var_6 = (unsigned char)55;
unsigned int var_7 = 4073635594U;
unsigned short var_8 = (unsigned short)5904;
unsigned int var_13 = 117976904U;
int zero = 0;
unsigned int var_14 = 2934274361U;
unsigned int var_15 = 2593131302U;
void init() {
}

void checksum() {
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
