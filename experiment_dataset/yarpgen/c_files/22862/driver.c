#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)213;
unsigned int var_6 = 3548284448U;
unsigned short var_7 = (unsigned short)58899;
short var_9 = (short)-15712;
int var_14 = -2091812173;
long long int var_15 = -327247685002540695LL;
signed char var_19 = (signed char)24;
int zero = 0;
unsigned int var_20 = 3346407436U;
short var_21 = (short)-12168;
long long int var_22 = 8717369091015789769LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
