#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1436940075;
unsigned long long int var_3 = 12001165059257118695ULL;
unsigned long long int var_10 = 44312891723784115ULL;
unsigned char var_11 = (unsigned char)158;
short var_14 = (short)-18303;
int var_17 = 746246180;
int zero = 0;
unsigned long long int var_20 = 441685094246989866ULL;
unsigned short var_21 = (unsigned short)7452;
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
