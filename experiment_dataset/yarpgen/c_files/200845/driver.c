#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2580174717841003764LL;
unsigned short var_2 = (unsigned short)42959;
unsigned short var_3 = (unsigned short)61419;
unsigned char var_5 = (unsigned char)163;
short var_8 = (short)-23845;
unsigned char var_12 = (unsigned char)186;
long long int var_14 = -8463772434899850495LL;
int zero = 0;
signed char var_15 = (signed char)-47;
signed char var_16 = (signed char)-30;
unsigned char var_17 = (unsigned char)241;
unsigned short var_18 = (unsigned short)38641;
void init() {
}

void checksum() {
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
