#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8949;
unsigned char var_1 = (unsigned char)133;
unsigned long long int var_2 = 17984381590246436264ULL;
unsigned char var_3 = (unsigned char)98;
unsigned long long int var_4 = 5003132694507187800ULL;
unsigned long long int var_5 = 14230071438499281986ULL;
short var_6 = (short)1640;
long long int var_8 = 987225934663684958LL;
int zero = 0;
short var_10 = (short)-9673;
unsigned short var_11 = (unsigned short)52575;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
