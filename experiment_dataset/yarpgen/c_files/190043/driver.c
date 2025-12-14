#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_14 = (_Bool)0;
short var_15 = (short)-17346;
long long int var_18 = -3052348650543064733LL;
int zero = 0;
short var_20 = (short)-30942;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)1095;
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
