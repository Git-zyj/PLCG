#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2953;
long long int var_1 = -8629556988411736691LL;
unsigned char var_3 = (unsigned char)253;
unsigned int var_5 = 743888780U;
unsigned short var_6 = (unsigned short)55540;
unsigned char var_8 = (unsigned char)34;
unsigned int var_10 = 2381633263U;
int zero = 0;
int var_11 = 1985046160;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)250;
long long int var_14 = -77649822122339034LL;
unsigned long long int var_15 = 12165694853227231374ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
