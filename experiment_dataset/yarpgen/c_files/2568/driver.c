#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1540531064;
unsigned int var_8 = 486624095U;
unsigned long long int var_10 = 12585674451033589071ULL;
unsigned int var_11 = 2856245772U;
short var_14 = (short)2582;
int var_15 = 559495320;
unsigned int var_16 = 3811562182U;
int zero = 0;
short var_19 = (short)3925;
short var_20 = (short)-26076;
void init() {
}

void checksum() {
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
