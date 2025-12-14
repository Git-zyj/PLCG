#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)38055;
long long int var_7 = -6542816057769481033LL;
unsigned short var_8 = (unsigned short)22997;
unsigned char var_10 = (unsigned char)171;
int var_11 = -715100938;
unsigned char var_12 = (unsigned char)124;
unsigned char var_13 = (unsigned char)30;
unsigned char var_14 = (unsigned char)159;
int zero = 0;
short var_16 = (short)-8078;
unsigned short var_17 = (unsigned short)10126;
unsigned short var_18 = (unsigned short)35530;
signed char var_19 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
