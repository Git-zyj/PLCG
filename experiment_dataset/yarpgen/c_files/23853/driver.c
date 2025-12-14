#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-15573;
unsigned short var_4 = (unsigned short)17160;
signed char var_5 = (signed char)-88;
signed char var_6 = (signed char)-50;
int var_13 = 1370833571;
unsigned short var_15 = (unsigned short)10830;
unsigned char var_17 = (unsigned char)64;
short var_18 = (short)-31461;
int zero = 0;
unsigned long long int var_20 = 15868385392103461610ULL;
signed char var_21 = (signed char)48;
unsigned char var_22 = (unsigned char)125;
unsigned int var_23 = 1011928208U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
