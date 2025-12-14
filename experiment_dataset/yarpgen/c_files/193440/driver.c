#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)116;
unsigned short var_4 = (unsigned short)12374;
int var_6 = -1179564286;
unsigned short var_7 = (unsigned short)25037;
unsigned short var_8 = (unsigned short)37012;
unsigned char var_9 = (unsigned char)190;
int zero = 0;
unsigned short var_13 = (unsigned short)1511;
unsigned char var_14 = (unsigned char)185;
int var_15 = 78778695;
unsigned char var_16 = (unsigned char)86;
void init() {
}

void checksum() {
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
