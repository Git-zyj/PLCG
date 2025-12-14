#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24053;
unsigned char var_2 = (unsigned char)210;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-10;
signed char var_6 = (signed char)-63;
int var_8 = -2124846482;
unsigned long long int var_15 = 1289249150312831441ULL;
signed char var_16 = (signed char)47;
unsigned short var_17 = (unsigned short)40326;
int zero = 0;
int var_19 = -522272680;
int var_20 = 487454165;
unsigned short var_21 = (unsigned short)48284;
unsigned short var_22 = (unsigned short)5245;
_Bool var_23 = (_Bool)1;
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
