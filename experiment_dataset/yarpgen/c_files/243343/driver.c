#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)61134;
unsigned int var_7 = 2387324547U;
unsigned int var_10 = 1105687007U;
unsigned int var_11 = 3001301024U;
int zero = 0;
unsigned int var_12 = 2187845740U;
long long int var_13 = 8591212492252764394LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
