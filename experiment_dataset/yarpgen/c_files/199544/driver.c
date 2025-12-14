#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
int var_1 = 943384693;
unsigned char var_2 = (unsigned char)73;
short var_3 = (short)-12416;
unsigned long long int var_4 = 4092224183795261436ULL;
unsigned short var_5 = (unsigned short)58173;
long long int var_6 = -8464878691428130057LL;
unsigned short var_7 = (unsigned short)13948;
int zero = 0;
int var_11 = 729488813;
unsigned short var_12 = (unsigned short)61903;
unsigned long long int var_13 = 5637987010424326789ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
