#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3282122345U;
unsigned char var_2 = (unsigned char)183;
short var_3 = (short)11645;
int var_5 = 1448859175;
int var_8 = 878464658;
unsigned char var_9 = (unsigned char)248;
unsigned long long int var_10 = 2705452850586671532ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)32425;
unsigned int var_12 = 1696646594U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
