#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-55;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)8;
unsigned long long int var_6 = 13807466824289260093ULL;
unsigned char var_7 = (unsigned char)236;
unsigned short var_8 = (unsigned short)30053;
unsigned char var_10 = (unsigned char)15;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 11434498094427538795ULL;
short var_16 = (short)-17803;
unsigned short var_17 = (unsigned short)43841;
unsigned short var_18 = (unsigned short)21436;
short var_19 = (short)-32683;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
