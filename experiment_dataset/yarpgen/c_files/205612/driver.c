#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17406;
long long int var_2 = 5545094112441016882LL;
unsigned int var_4 = 1848600109U;
signed char var_6 = (signed char)28;
short var_7 = (short)-31110;
short var_8 = (short)-19160;
long long int var_11 = -3898387777775109546LL;
signed char var_14 = (signed char)-54;
int zero = 0;
short var_16 = (short)31662;
signed char var_17 = (signed char)46;
short var_18 = (short)-17988;
unsigned char var_19 = (unsigned char)189;
signed char var_20 = (signed char)-13;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
