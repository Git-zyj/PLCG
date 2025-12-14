#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)239;
unsigned long long int var_5 = 18218421470302625369ULL;
unsigned char var_6 = (unsigned char)252;
unsigned short var_8 = (unsigned short)53326;
int var_9 = -860515358;
int var_10 = 1813821298;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_14 = 467566667;
signed char var_15 = (signed char)-63;
int var_16 = -29055376;
unsigned char var_17 = (unsigned char)70;
void init() {
}

void checksum() {
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
