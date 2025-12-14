#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)38374;
unsigned char var_8 = (unsigned char)33;
long long int var_14 = -7773239514996991948LL;
signed char var_16 = (signed char)-119;
int zero = 0;
unsigned int var_20 = 2035805041U;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-10999;
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
