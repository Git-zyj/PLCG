#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1603482462;
unsigned char var_4 = (unsigned char)152;
unsigned char var_5 = (unsigned char)212;
unsigned char var_10 = (unsigned char)107;
unsigned int var_12 = 3798614953U;
long long int var_13 = -558263378495074262LL;
unsigned char var_14 = (unsigned char)171;
int zero = 0;
int var_15 = 678946322;
unsigned short var_16 = (unsigned short)50650;
short var_17 = (short)26609;
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
