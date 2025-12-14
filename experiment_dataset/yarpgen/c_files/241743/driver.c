#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21688;
long long int var_2 = 2221117038737210551LL;
unsigned char var_7 = (unsigned char)221;
unsigned char var_8 = (unsigned char)5;
unsigned char var_10 = (unsigned char)190;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)-16643;
signed char var_15 = (signed char)21;
unsigned short var_16 = (unsigned short)27727;
void init() {
}

void checksum() {
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
