#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55122;
unsigned char var_2 = (unsigned char)234;
int var_3 = -1710068664;
unsigned short var_6 = (unsigned short)1358;
short var_8 = (short)-15790;
int zero = 0;
unsigned char var_10 = (unsigned char)217;
unsigned short var_11 = (unsigned short)44718;
unsigned int var_12 = 3338908414U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
