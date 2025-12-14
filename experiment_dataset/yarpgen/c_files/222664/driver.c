#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4112043404U;
signed char var_3 = (signed char)-37;
unsigned long long int var_5 = 11628175469136757097ULL;
unsigned char var_6 = (unsigned char)108;
short var_7 = (short)9357;
unsigned short var_8 = (unsigned short)55595;
short var_10 = (short)-4972;
unsigned int var_11 = 4011655223U;
int var_13 = 1717704988;
int zero = 0;
unsigned short var_14 = (unsigned short)48043;
short var_15 = (short)16624;
unsigned short var_16 = (unsigned short)48014;
unsigned short var_17 = (unsigned short)62643;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
