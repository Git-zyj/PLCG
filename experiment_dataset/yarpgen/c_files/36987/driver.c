#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49780;
int var_6 = -1785628099;
int var_7 = -1876601340;
unsigned int var_8 = 936247518U;
unsigned int var_11 = 125741261U;
unsigned int var_12 = 3717720667U;
int zero = 0;
unsigned short var_13 = (unsigned short)60472;
unsigned char var_14 = (unsigned char)122;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
