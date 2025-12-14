#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
short var_2 = (short)21706;
signed char var_4 = (signed char)-99;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1595420674U;
unsigned char var_7 = (unsigned char)24;
unsigned long long int var_12 = 14887019232801017695ULL;
int zero = 0;
short var_13 = (short)-32039;
unsigned long long int var_14 = 17231089895602175198ULL;
short var_15 = (short)-6133;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
