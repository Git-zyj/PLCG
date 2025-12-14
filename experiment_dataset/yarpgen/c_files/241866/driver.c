#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1791941658;
short var_6 = (short)-22357;
unsigned long long int var_7 = 13971809459759712698ULL;
unsigned char var_8 = (unsigned char)138;
signed char var_14 = (signed char)25;
unsigned char var_17 = (unsigned char)208;
unsigned long long int var_18 = 3230601920677382181ULL;
unsigned char var_19 = (unsigned char)97;
int zero = 0;
unsigned int var_20 = 3784559606U;
signed char var_21 = (signed char)-6;
void init() {
}

void checksum() {
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
