#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1596439028;
unsigned short var_11 = (unsigned short)19359;
int var_13 = -443520319;
short var_15 = (short)-13156;
unsigned short var_17 = (unsigned short)24900;
int zero = 0;
unsigned char var_18 = (unsigned char)238;
int var_19 = -237494336;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
