#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4419;
signed char var_1 = (signed char)112;
short var_2 = (short)20995;
unsigned char var_3 = (unsigned char)175;
short var_4 = (short)-9438;
_Bool var_6 = (_Bool)0;
int var_7 = 58143722;
unsigned int var_10 = 934443275U;
int zero = 0;
short var_11 = (short)-4087;
int var_12 = 331615703;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
