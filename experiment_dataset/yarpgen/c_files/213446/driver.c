#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13595;
unsigned short var_4 = (unsigned short)62971;
short var_11 = (short)-20967;
int zero = 0;
unsigned short var_13 = (unsigned short)43603;
unsigned short var_14 = (unsigned short)12582;
long long int var_15 = 6348991122765645538LL;
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
