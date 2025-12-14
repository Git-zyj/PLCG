#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)14406;
long long int var_16 = 2180713930745700017LL;
_Bool var_17 = (_Bool)1;
long long int var_18 = 2270082794151233177LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
