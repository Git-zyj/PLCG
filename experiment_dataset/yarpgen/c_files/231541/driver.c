#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)42;
unsigned short var_3 = (unsigned short)18835;
unsigned long long int var_4 = 15437479434042355089ULL;
unsigned char var_5 = (unsigned char)30;
short var_6 = (short)-25686;
unsigned long long int var_7 = 17980992939871185946ULL;
short var_8 = (short)6493;
unsigned int var_9 = 2842738454U;
int zero = 0;
short var_10 = (short)16213;
int var_11 = -372544583;
unsigned long long int var_12 = 2555648479803068934ULL;
short var_13 = (short)13971;
unsigned char var_14 = (unsigned char)222;
short var_15 = (short)22211;
unsigned char var_16 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
