#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)328;
unsigned short var_4 = (unsigned short)36973;
unsigned int var_9 = 1070142293U;
int var_10 = -1819864346;
long long int var_12 = -4579641696484651867LL;
long long int var_14 = -3407441157153659201LL;
short var_17 = (short)-12149;
int zero = 0;
unsigned char var_19 = (unsigned char)60;
short var_20 = (short)12312;
unsigned char var_21 = (unsigned char)3;
unsigned short var_22 = (unsigned short)52918;
int var_23 = -1426261711;
short var_24 = (short)-32260;
short var_25 = (short)16475;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
