#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5090163143067366761LL;
unsigned char var_2 = (unsigned char)37;
long long int var_3 = 4076328180355806046LL;
unsigned int var_7 = 879507442U;
unsigned short var_8 = (unsigned short)53035;
unsigned short var_11 = (unsigned short)24995;
int var_12 = -1227987059;
unsigned char var_13 = (unsigned char)63;
int zero = 0;
unsigned short var_16 = (unsigned short)17488;
short var_17 = (short)1702;
int var_18 = 365662685;
short var_19 = (short)-14304;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
