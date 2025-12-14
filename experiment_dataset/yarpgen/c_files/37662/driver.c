#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1955200554353217588ULL;
unsigned char var_3 = (unsigned char)88;
unsigned short var_5 = (unsigned short)9221;
unsigned char var_7 = (unsigned char)115;
unsigned short var_8 = (unsigned short)1881;
unsigned long long int var_10 = 14556388839220002947ULL;
short var_13 = (short)-681;
int zero = 0;
unsigned long long int var_16 = 4100766807200483993ULL;
unsigned short var_17 = (unsigned short)8516;
unsigned int var_18 = 1231917864U;
void init() {
}

void checksum() {
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
