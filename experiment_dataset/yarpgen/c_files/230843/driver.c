#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23787;
unsigned char var_2 = (unsigned char)234;
int var_4 = -1053725657;
signed char var_6 = (signed char)-91;
unsigned short var_7 = (unsigned short)26402;
short var_8 = (short)-5927;
int zero = 0;
short var_10 = (short)-17919;
unsigned char var_11 = (unsigned char)131;
unsigned int var_12 = 1283055948U;
unsigned short var_13 = (unsigned short)58228;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
