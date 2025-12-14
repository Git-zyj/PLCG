#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -182111844;
unsigned short var_1 = (unsigned short)9749;
long long int var_5 = 5893759875757105567LL;
int var_6 = -672628535;
unsigned char var_7 = (unsigned char)124;
short var_8 = (short)-5174;
long long int var_11 = -7125345224896285716LL;
int zero = 0;
unsigned char var_12 = (unsigned char)158;
unsigned short var_13 = (unsigned short)36904;
signed char var_14 = (signed char)90;
unsigned int var_15 = 1736015113U;
signed char var_16 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
