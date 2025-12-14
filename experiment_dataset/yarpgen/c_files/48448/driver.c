#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
long long int var_1 = 8766030810678490022LL;
short var_2 = (short)-19658;
unsigned short var_4 = (unsigned short)5781;
unsigned int var_5 = 3837970452U;
unsigned char var_6 = (unsigned char)255;
unsigned short var_10 = (unsigned short)8233;
unsigned short var_13 = (unsigned short)21825;
int zero = 0;
unsigned short var_14 = (unsigned short)16644;
unsigned int var_15 = 2477986419U;
unsigned int var_16 = 1720569145U;
int var_17 = 801899060;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
