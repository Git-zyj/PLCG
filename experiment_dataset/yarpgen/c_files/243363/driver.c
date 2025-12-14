#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2085305029;
unsigned int var_3 = 1616044543U;
int var_8 = 1016817598;
short var_11 = (short)-3936;
short var_14 = (short)-8550;
int zero = 0;
short var_15 = (short)776;
unsigned short var_16 = (unsigned short)26679;
short var_17 = (short)-13514;
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
