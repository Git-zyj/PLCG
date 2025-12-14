#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)58;
unsigned short var_3 = (unsigned short)5666;
unsigned char var_9 = (unsigned char)114;
unsigned long long int var_12 = 11133401031032598345ULL;
short var_15 = (short)8831;
unsigned short var_16 = (unsigned short)64629;
unsigned int var_18 = 2187010867U;
int zero = 0;
unsigned char var_20 = (unsigned char)135;
short var_21 = (short)-23065;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
