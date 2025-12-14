#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1238729912;
long long int var_4 = -8333128965324266780LL;
unsigned char var_6 = (unsigned char)114;
unsigned char var_7 = (unsigned char)159;
int var_8 = -147764155;
long long int var_9 = 1813789315349512256LL;
unsigned int var_10 = 1641746236U;
unsigned int var_11 = 3879431653U;
unsigned short var_12 = (unsigned short)20976;
int zero = 0;
int var_13 = 2064796834;
unsigned char var_14 = (unsigned char)10;
unsigned char var_15 = (unsigned char)48;
unsigned short var_16 = (unsigned short)46511;
unsigned char var_17 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
