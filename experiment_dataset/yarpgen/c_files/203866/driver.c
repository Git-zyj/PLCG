#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59522;
long long int var_2 = 5075333531345692705LL;
short var_5 = (short)2061;
int var_7 = 280865235;
unsigned char var_10 = (unsigned char)134;
int var_11 = -1650446152;
int zero = 0;
unsigned char var_14 = (unsigned char)23;
unsigned short var_15 = (unsigned short)27394;
unsigned short var_16 = (unsigned short)44228;
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
