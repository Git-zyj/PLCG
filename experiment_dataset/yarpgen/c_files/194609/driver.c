#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2749174371U;
signed char var_2 = (signed char)(-127 - 1);
short var_4 = (short)-21377;
unsigned int var_5 = 4163942977U;
unsigned char var_11 = (unsigned char)114;
unsigned char var_12 = (unsigned char)93;
int zero = 0;
unsigned short var_17 = (unsigned short)65506;
unsigned char var_18 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
