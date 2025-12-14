#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11148;
unsigned long long int var_1 = 13623009891400095656ULL;
signed char var_3 = (signed char)49;
int var_7 = 1725079435;
unsigned long long int var_8 = 7903803873551879541ULL;
unsigned short var_9 = (unsigned short)46471;
unsigned short var_10 = (unsigned short)24685;
signed char var_13 = (signed char)118;
short var_14 = (short)-32619;
int zero = 0;
signed char var_15 = (signed char)-96;
signed char var_16 = (signed char)-35;
long long int var_17 = 7003418085210314995LL;
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
