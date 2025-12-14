#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -713177764;
short var_1 = (short)6300;
unsigned short var_3 = (unsigned short)36549;
long long int var_5 = 9040729769816416345LL;
int var_8 = -1569708508;
int var_10 = 1285420050;
unsigned long long int var_13 = 8310241216269612019ULL;
int var_14 = 1851058151;
int zero = 0;
unsigned short var_15 = (unsigned short)36909;
int var_16 = -1401226344;
int var_17 = -511372719;
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
