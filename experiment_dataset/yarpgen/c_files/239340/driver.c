#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = 210611600;
short var_7 = (short)12655;
short var_9 = (short)-3459;
int var_10 = -455563971;
unsigned short var_11 = (unsigned short)22106;
short var_12 = (short)-2539;
int zero = 0;
int var_14 = -1620085787;
short var_15 = (short)-16152;
unsigned short var_16 = (unsigned short)50872;
void init() {
}

void checksum() {
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
