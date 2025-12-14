#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1840921226422091136ULL;
short var_5 = (short)-21140;
_Bool var_11 = (_Bool)0;
unsigned short var_19 = (unsigned short)29435;
int zero = 0;
signed char var_20 = (signed char)1;
unsigned char var_21 = (unsigned char)8;
unsigned short var_22 = (unsigned short)29264;
short var_23 = (short)4351;
void init() {
}

void checksum() {
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
