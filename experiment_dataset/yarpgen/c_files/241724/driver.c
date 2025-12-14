#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_5 = -3383933327801644022LL;
unsigned int var_11 = 2057044494U;
short var_13 = (short)12480;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-3411;
long long int var_17 = -5476809125763997088LL;
short var_18 = (short)-21124;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
