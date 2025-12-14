#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1814832572356191431LL;
short var_5 = (short)-688;
unsigned short var_7 = (unsigned short)50019;
unsigned int var_14 = 1558194737U;
long long int var_15 = -8999039209003198721LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = 755808288113753972LL;
unsigned int var_18 = 2706047665U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
