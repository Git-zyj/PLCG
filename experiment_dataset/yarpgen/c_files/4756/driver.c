#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35118;
short var_2 = (short)-8889;
unsigned char var_3 = (unsigned char)154;
long long int var_10 = 1700540197152559425LL;
_Bool var_13 = (_Bool)0;
int var_15 = -395519400;
unsigned int var_16 = 2973848786U;
long long int var_17 = 7691756583647968757LL;
int zero = 0;
unsigned char var_18 = (unsigned char)128;
unsigned short var_19 = (unsigned short)64995;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
