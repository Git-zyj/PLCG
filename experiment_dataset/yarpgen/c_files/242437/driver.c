#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1520642744;
int var_2 = 2083799493;
int var_3 = 1490388955;
int var_4 = 1087724470;
unsigned int var_5 = 3680493931U;
signed char var_7 = (signed char)0;
unsigned short var_8 = (unsigned short)30449;
int var_9 = 1549153445;
unsigned short var_10 = (unsigned short)38318;
unsigned int var_11 = 259611938U;
int zero = 0;
unsigned short var_13 = (unsigned short)17659;
signed char var_14 = (signed char)63;
signed char var_15 = (signed char)53;
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
