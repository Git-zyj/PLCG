#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-48;
unsigned int var_5 = 970045324U;
unsigned int var_6 = 1392713326U;
unsigned short var_11 = (unsigned short)11149;
unsigned int var_12 = 3973628214U;
signed char var_14 = (signed char)-60;
int zero = 0;
signed char var_15 = (signed char)3;
unsigned char var_16 = (unsigned char)126;
unsigned int var_17 = 2634887532U;
unsigned int var_18 = 4156494361U;
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
