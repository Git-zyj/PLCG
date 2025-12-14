#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2286;
signed char var_2 = (signed char)115;
signed char var_3 = (signed char)70;
signed char var_6 = (signed char)80;
unsigned char var_8 = (unsigned char)45;
unsigned char var_13 = (unsigned char)211;
short var_17 = (short)1820;
int zero = 0;
long long int var_19 = -287364191007363923LL;
short var_20 = (short)3061;
unsigned short var_21 = (unsigned short)56070;
int var_22 = 827547061;
unsigned char var_23 = (unsigned char)16;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
