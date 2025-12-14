#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -272326804;
short var_3 = (short)-19793;
unsigned char var_8 = (unsigned char)122;
unsigned short var_11 = (unsigned short)44064;
int var_12 = 350599920;
int zero = 0;
unsigned char var_17 = (unsigned char)247;
unsigned int var_18 = 3911104382U;
unsigned short var_19 = (unsigned short)7903;
unsigned char var_20 = (unsigned char)19;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
