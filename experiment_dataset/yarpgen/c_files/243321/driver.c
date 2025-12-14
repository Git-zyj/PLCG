#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17839;
unsigned char var_3 = (unsigned char)60;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-112;
unsigned short var_6 = (unsigned short)2862;
unsigned char var_11 = (unsigned char)162;
int zero = 0;
short var_15 = (short)-7478;
unsigned char var_16 = (unsigned char)33;
unsigned short var_17 = (unsigned short)15534;
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
