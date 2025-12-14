#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)124;
int var_2 = 1572079986;
unsigned char var_5 = (unsigned char)233;
unsigned char var_10 = (unsigned char)104;
signed char var_11 = (signed char)73;
short var_14 = (short)-20552;
short var_15 = (short)-17729;
signed char var_16 = (signed char)119;
long long int var_17 = 1359858719344319060LL;
int zero = 0;
unsigned int var_20 = 3949462987U;
unsigned short var_21 = (unsigned short)10628;
signed char var_22 = (signed char)43;
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
