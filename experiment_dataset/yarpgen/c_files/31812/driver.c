#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2670985801U;
signed char var_6 = (signed char)3;
short var_7 = (short)-7909;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)59163;
long long int var_14 = 8818448909389846042LL;
short var_15 = (short)32424;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
