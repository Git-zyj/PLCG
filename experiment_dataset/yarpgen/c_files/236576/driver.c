#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -5267548;
short var_4 = (short)29892;
long long int var_11 = 2207519860366703397LL;
unsigned short var_12 = (unsigned short)4066;
unsigned char var_13 = (unsigned char)252;
unsigned short var_14 = (unsigned short)65356;
unsigned short var_15 = (unsigned short)41094;
short var_16 = (short)31424;
int zero = 0;
unsigned char var_18 = (unsigned char)108;
short var_19 = (short)-2155;
unsigned char var_20 = (unsigned char)52;
unsigned char var_21 = (unsigned char)24;
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
