#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)-19732;
long long int var_4 = 3392581355629440165LL;
unsigned int var_11 = 3523100796U;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 3396425947010392491LL;
unsigned short var_17 = (unsigned short)36947;
signed char var_18 = (signed char)24;
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
