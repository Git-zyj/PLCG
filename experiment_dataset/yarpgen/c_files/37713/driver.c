#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_4 = -307970309485574606LL;
unsigned int var_6 = 1296200036U;
long long int var_7 = 3991223756603522083LL;
_Bool var_9 = (_Bool)1;
short var_11 = (short)11505;
int zero = 0;
short var_15 = (short)-24304;
int var_16 = 179528660;
void init() {
}

void checksum() {
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
