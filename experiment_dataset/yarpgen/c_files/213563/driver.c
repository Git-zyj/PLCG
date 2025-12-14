#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5841976334077733227LL;
long long int var_4 = 4456069161025875271LL;
int var_6 = 1924844125;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)28;
int var_12 = 445392953;
void init() {
}

void checksum() {
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
