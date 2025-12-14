#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)11653;
unsigned short var_5 = (unsigned short)37036;
unsigned char var_11 = (unsigned char)140;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_20 = 4202703079612719878LL;
short var_21 = (short)-14878;
unsigned char var_22 = (unsigned char)24;
unsigned short var_23 = (unsigned short)12299;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
