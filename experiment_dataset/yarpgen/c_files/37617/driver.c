#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -901394664;
short var_1 = (short)16505;
unsigned char var_2 = (unsigned char)12;
unsigned char var_3 = (unsigned char)152;
unsigned int var_4 = 2948172733U;
short var_5 = (short)-31523;
unsigned char var_6 = (unsigned char)146;
int var_7 = -573011652;
short var_10 = (short)-20374;
unsigned long long int var_11 = 3569315647424258548ULL;
int var_12 = 607077534;
int zero = 0;
unsigned char var_13 = (unsigned char)130;
long long int var_14 = -4086020497581513606LL;
unsigned short var_15 = (unsigned short)10340;
int var_16 = 787692835;
short var_17 = (short)27530;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
