#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 297040328U;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-28201;
unsigned char var_4 = (unsigned char)213;
long long int var_5 = 4431590531386287789LL;
signed char var_6 = (signed char)56;
short var_7 = (short)19843;
short var_8 = (short)24885;
int var_10 = 921543877;
unsigned int var_11 = 3932925359U;
int var_12 = 2121802239;
int zero = 0;
short var_13 = (short)15290;
_Bool var_14 = (_Bool)0;
short var_15 = (short)18125;
void init() {
}

void checksum() {
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
