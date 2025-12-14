#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)200;
_Bool var_3 = (_Bool)0;
unsigned int var_8 = 4112584388U;
short var_12 = (short)-13858;
_Bool var_13 = (_Bool)1;
long long int var_17 = 7867221630755046319LL;
short var_19 = (short)3491;
int zero = 0;
unsigned long long int var_20 = 17780921709743499404ULL;
signed char var_21 = (signed char)52;
long long int var_22 = 6385905466598042093LL;
long long int var_23 = 7322222889409792996LL;
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
