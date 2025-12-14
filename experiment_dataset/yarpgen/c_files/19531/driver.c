#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)10;
unsigned char var_5 = (unsigned char)128;
unsigned char var_7 = (unsigned char)195;
unsigned char var_8 = (unsigned char)213;
int var_9 = 816652535;
int var_10 = -888922358;
int var_13 = -623502925;
int zero = 0;
unsigned char var_15 = (unsigned char)231;
int var_16 = -1969927395;
int var_17 = 1781024343;
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
