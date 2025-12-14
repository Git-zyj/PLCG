#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3533;
unsigned int var_2 = 4187409563U;
unsigned short var_3 = (unsigned short)12020;
unsigned short var_4 = (unsigned short)26506;
unsigned int var_5 = 3425986045U;
long long int var_6 = -990260102955576629LL;
signed char var_9 = (signed char)127;
unsigned char var_11 = (unsigned char)191;
long long int var_14 = -5264801096442949640LL;
short var_17 = (short)16448;
int zero = 0;
long long int var_18 = -244853505637228295LL;
long long int var_19 = 6426822356150607450LL;
signed char var_20 = (signed char)-111;
unsigned short var_21 = (unsigned short)52622;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
