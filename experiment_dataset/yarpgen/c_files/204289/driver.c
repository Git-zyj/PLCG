#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)109;
short var_2 = (short)2932;
unsigned long long int var_4 = 7526723173648007100ULL;
int var_5 = 1517646974;
int var_8 = -1431302271;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-119;
short var_17 = (short)-10644;
void init() {
}

void checksum() {
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
