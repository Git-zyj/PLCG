#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21516;
unsigned short var_3 = (unsigned short)19928;
short var_4 = (short)13790;
unsigned char var_7 = (unsigned char)28;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)74;
unsigned long long int var_13 = 1125532568200159729ULL;
int zero = 0;
unsigned long long int var_14 = 5168025616708714539ULL;
unsigned int var_15 = 3419257979U;
_Bool var_16 = (_Bool)0;
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
