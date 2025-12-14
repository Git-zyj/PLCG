#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2105;
unsigned int var_2 = 204699407U;
short var_5 = (short)-21552;
long long int var_6 = 1057109015981840004LL;
signed char var_8 = (signed char)28;
unsigned short var_12 = (unsigned short)24506;
unsigned char var_13 = (unsigned char)77;
int zero = 0;
unsigned char var_14 = (unsigned char)56;
unsigned short var_15 = (unsigned short)14204;
int var_16 = 159476397;
int var_17 = 1370098837;
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
