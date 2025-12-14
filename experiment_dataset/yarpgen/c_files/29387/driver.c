#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)225;
unsigned char var_1 = (unsigned char)129;
unsigned char var_5 = (unsigned char)71;
unsigned int var_6 = 3278415561U;
unsigned long long int var_7 = 4886498385673217059ULL;
signed char var_8 = (signed char)30;
int var_13 = -766238667;
int var_16 = 1753414798;
int zero = 0;
unsigned int var_20 = 2191973274U;
unsigned short var_21 = (unsigned short)40959;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
