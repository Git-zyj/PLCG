#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 311538880389209922ULL;
long long int var_6 = 4639938102353011748LL;
unsigned int var_7 = 2921167230U;
int zero = 0;
signed char var_10 = (signed char)63;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-4696;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
