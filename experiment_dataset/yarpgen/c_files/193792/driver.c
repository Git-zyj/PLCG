#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
unsigned int var_2 = 4224302841U;
unsigned char var_4 = (unsigned char)184;
int var_7 = -1397180007;
unsigned short var_9 = (unsigned short)24697;
int var_13 = 888927748;
int var_14 = -1420659929;
int zero = 0;
int var_15 = -1955593890;
unsigned short var_16 = (unsigned short)32030;
short var_17 = (short)-11394;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
