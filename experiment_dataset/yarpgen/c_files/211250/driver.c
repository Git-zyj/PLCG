#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3215;
short var_5 = (short)-17351;
unsigned short var_6 = (unsigned short)18449;
unsigned int var_8 = 53588625U;
signed char var_12 = (signed char)-60;
unsigned char var_15 = (unsigned char)56;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)116;
unsigned int var_21 = 1762189759U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
