#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3583;
int var_3 = 325835940;
short var_6 = (short)-31334;
unsigned short var_7 = (unsigned short)55894;
int var_9 = 1701378971;
unsigned char var_10 = (unsigned char)255;
int zero = 0;
unsigned char var_14 = (unsigned char)104;
unsigned short var_15 = (unsigned short)31950;
int var_16 = 2050193456;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
