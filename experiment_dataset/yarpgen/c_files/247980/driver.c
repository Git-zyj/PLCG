#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 760607738;
short var_5 = (short)-1212;
short var_8 = (short)-8737;
short var_10 = (short)31875;
int zero = 0;
long long int var_16 = 6573462305774006627LL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)13942;
unsigned int var_19 = 1418324966U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
