#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)119;
int var_1 = -1325477073;
unsigned short var_7 = (unsigned short)21890;
unsigned char var_10 = (unsigned char)63;
int var_12 = -225022151;
unsigned char var_14 = (unsigned char)143;
short var_16 = (short)-27287;
unsigned short var_18 = (unsigned short)16082;
int zero = 0;
unsigned char var_19 = (unsigned char)207;
unsigned int var_20 = 3597278309U;
void init() {
}

void checksum() {
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
