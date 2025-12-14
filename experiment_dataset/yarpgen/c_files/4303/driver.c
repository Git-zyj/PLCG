#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)212;
_Bool var_2 = (_Bool)0;
unsigned long long int var_8 = 5810981395001092481ULL;
unsigned short var_9 = (unsigned short)11198;
_Bool var_10 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)-23241;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
