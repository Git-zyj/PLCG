#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
_Bool var_2 = (_Bool)1;
unsigned char var_7 = (unsigned char)76;
int var_8 = 2050676041;
int zero = 0;
signed char var_10 = (signed char)8;
long long int var_11 = -1786196439412048136LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
