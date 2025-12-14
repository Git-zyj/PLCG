#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11359739669193024920ULL;
unsigned char var_3 = (unsigned char)255;
int var_4 = -112117925;
short var_6 = (short)4230;
signed char var_7 = (signed char)-122;
unsigned char var_10 = (unsigned char)67;
int zero = 0;
long long int var_15 = -5376593203697387920LL;
int var_16 = -1190101294;
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
