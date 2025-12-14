#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_4 = 929285101U;
unsigned long long int var_6 = 6612855011915934245ULL;
unsigned char var_8 = (unsigned char)202;
int var_10 = 1165008529;
int var_12 = -1402290976;
unsigned char var_15 = (unsigned char)215;
int zero = 0;
unsigned int var_16 = 2720408415U;
short var_17 = (short)20323;
signed char var_18 = (signed char)56;
unsigned int var_19 = 4004235785U;
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
