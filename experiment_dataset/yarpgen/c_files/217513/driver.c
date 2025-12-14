#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)7020;
unsigned long long int var_6 = 777005312840685155ULL;
long long int var_7 = -1234462756948484600LL;
unsigned int var_8 = 1561272619U;
unsigned int var_10 = 3410260365U;
signed char var_12 = (signed char)-97;
short var_15 = (short)10998;
unsigned short var_16 = (unsigned short)50350;
unsigned int var_17 = 3065974477U;
int zero = 0;
unsigned short var_18 = (unsigned short)51114;
unsigned char var_19 = (unsigned char)151;
unsigned int var_20 = 1864658530U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
