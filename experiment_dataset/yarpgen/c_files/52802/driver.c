#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)45397;
short var_7 = (short)10073;
short var_11 = (short)10526;
short var_12 = (short)-21352;
unsigned int var_15 = 1000544618U;
short var_16 = (short)18943;
int zero = 0;
unsigned short var_18 = (unsigned short)9852;
unsigned short var_19 = (unsigned short)28601;
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
