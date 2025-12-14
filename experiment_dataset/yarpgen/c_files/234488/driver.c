#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3114328895U;
unsigned char var_1 = (unsigned char)235;
unsigned short var_2 = (unsigned short)14619;
unsigned char var_4 = (unsigned char)51;
unsigned short var_5 = (unsigned short)10525;
int var_6 = 1246437062;
signed char var_7 = (signed char)70;
unsigned long long int var_8 = 2399257021579403809ULL;
int zero = 0;
unsigned long long int var_10 = 2020315436857088908ULL;
long long int var_11 = -5759126340272538033LL;
unsigned short var_12 = (unsigned short)36636;
unsigned short var_13 = (unsigned short)60183;
unsigned int var_14 = 2727057633U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
