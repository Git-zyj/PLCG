#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17362;
short var_4 = (short)10667;
signed char var_5 = (signed char)64;
short var_6 = (short)-31163;
int var_10 = -1726205193;
unsigned char var_11 = (unsigned char)84;
int zero = 0;
int var_12 = -1881219900;
unsigned char var_13 = (unsigned char)23;
unsigned char var_14 = (unsigned char)232;
unsigned int var_15 = 881731453U;
void init() {
}

void checksum() {
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
