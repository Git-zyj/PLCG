#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1632;
unsigned short var_2 = (unsigned short)26062;
long long int var_5 = -7006684918764641844LL;
unsigned int var_8 = 1710667798U;
unsigned char var_12 = (unsigned char)90;
unsigned char var_13 = (unsigned char)155;
unsigned short var_14 = (unsigned short)46132;
int var_19 = -1741810264;
int zero = 0;
unsigned int var_20 = 1273419150U;
short var_21 = (short)10678;
unsigned char var_22 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
