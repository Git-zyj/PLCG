#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)210;
unsigned short var_3 = (unsigned short)48535;
int var_4 = 421787630;
unsigned char var_6 = (unsigned char)77;
unsigned char var_8 = (unsigned char)207;
int var_10 = 112911145;
signed char var_11 = (signed char)96;
int zero = 0;
unsigned int var_13 = 820705416U;
long long int var_14 = 3655164243081129446LL;
long long int var_15 = 254344163189338052LL;
long long int var_16 = 847111870987232259LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
