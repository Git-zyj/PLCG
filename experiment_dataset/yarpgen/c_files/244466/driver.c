#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)49965;
unsigned char var_4 = (unsigned char)170;
int var_7 = -747391062;
unsigned long long int var_8 = 916120568267081103ULL;
signed char var_10 = (signed char)1;
short var_11 = (short)-6213;
int zero = 0;
unsigned int var_12 = 582124685U;
unsigned char var_13 = (unsigned char)75;
short var_14 = (short)-17341;
void init() {
}

void checksum() {
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
