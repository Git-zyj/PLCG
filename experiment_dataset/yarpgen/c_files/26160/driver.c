#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 406425644U;
unsigned short var_2 = (unsigned short)56136;
signed char var_3 = (signed char)-65;
unsigned char var_5 = (unsigned char)77;
short var_7 = (short)7017;
short var_10 = (short)-26530;
int var_11 = -777930488;
signed char var_13 = (signed char)48;
int zero = 0;
int var_14 = -287963131;
short var_15 = (short)-7700;
unsigned long long int var_16 = 17087117182396348528ULL;
signed char var_17 = (signed char)-117;
unsigned short var_18 = (unsigned short)3468;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
