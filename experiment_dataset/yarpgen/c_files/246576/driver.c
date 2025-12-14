#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1295158558;
unsigned char var_1 = (unsigned char)48;
unsigned short var_3 = (unsigned short)48165;
int var_4 = -1592069367;
short var_7 = (short)-21313;
unsigned char var_17 = (unsigned char)235;
int zero = 0;
short var_18 = (short)-13545;
unsigned short var_19 = (unsigned short)21;
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
