#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15312;
signed char var_1 = (signed char)-5;
long long int var_2 = -2326791306567376147LL;
unsigned short var_3 = (unsigned short)41542;
long long int var_4 = -9163125592295599575LL;
unsigned int var_5 = 636644382U;
short var_6 = (short)16994;
unsigned char var_9 = (unsigned char)49;
signed char var_13 = (signed char)47;
int zero = 0;
unsigned short var_14 = (unsigned short)40459;
long long int var_15 = 8045321008928515925LL;
unsigned int var_16 = 4222847236U;
unsigned int var_17 = 939244265U;
unsigned char var_18 = (unsigned char)80;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
