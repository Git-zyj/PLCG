#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24779;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3092902604U;
unsigned char var_6 = (unsigned char)107;
short var_13 = (short)23796;
unsigned short var_15 = (unsigned short)63760;
short var_17 = (short)17771;
int zero = 0;
unsigned char var_20 = (unsigned char)195;
unsigned int var_21 = 1676881012U;
unsigned short var_22 = (unsigned short)4579;
long long int var_23 = 5110090213962209500LL;
long long int var_24 = 3255377049137287111LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
