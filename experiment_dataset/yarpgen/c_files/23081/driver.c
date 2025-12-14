#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
unsigned int var_1 = 2532673290U;
long long int var_2 = 5527773294847298180LL;
short var_3 = (short)-16072;
unsigned short var_4 = (unsigned short)46196;
unsigned int var_5 = 1943347313U;
unsigned short var_7 = (unsigned short)28335;
int var_10 = 1686272352;
int zero = 0;
unsigned int var_13 = 2714498250U;
unsigned int var_14 = 1289606171U;
int var_15 = -1683384874;
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
