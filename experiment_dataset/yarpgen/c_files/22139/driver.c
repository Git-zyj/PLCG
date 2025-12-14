#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)10;
unsigned short var_2 = (unsigned short)8181;
unsigned short var_3 = (unsigned short)27478;
unsigned short var_5 = (unsigned short)51079;
long long int var_6 = -2214693757829760433LL;
unsigned short var_7 = (unsigned short)15843;
unsigned int var_8 = 2109795728U;
signed char var_10 = (signed char)67;
int zero = 0;
unsigned short var_11 = (unsigned short)33926;
unsigned int var_12 = 532425943U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
