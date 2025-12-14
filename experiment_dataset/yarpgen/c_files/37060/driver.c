#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)386;
unsigned short var_2 = (unsigned short)64557;
unsigned char var_3 = (unsigned char)239;
short var_6 = (short)-27888;
unsigned short var_7 = (unsigned short)55243;
unsigned long long int var_11 = 15932374373131049370ULL;
unsigned int var_12 = 1356484252U;
unsigned short var_13 = (unsigned short)46764;
int zero = 0;
unsigned short var_15 = (unsigned short)5347;
unsigned char var_16 = (unsigned char)85;
void init() {
}

void checksum() {
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
