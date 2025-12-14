#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37170;
short var_3 = (short)31175;
unsigned long long int var_5 = 16253697473893413815ULL;
unsigned short var_7 = (unsigned short)10811;
unsigned int var_9 = 2285570275U;
unsigned long long int var_10 = 18258283342723507573ULL;
unsigned short var_11 = (unsigned short)44132;
unsigned char var_12 = (unsigned char)254;
int var_13 = 1702965824;
int zero = 0;
int var_15 = -1266390109;
short var_16 = (short)7102;
void init() {
}

void checksum() {
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
