#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5731697303985044860ULL;
unsigned short var_4 = (unsigned short)49596;
long long int var_6 = -1986956462109132830LL;
short var_13 = (short)-20116;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 4741528375667626166ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
