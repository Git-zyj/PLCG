#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 2447416870U;
_Bool var_12 = (_Bool)0;
long long int var_18 = 4462101959084362295LL;
int zero = 0;
unsigned char var_19 = (unsigned char)113;
signed char var_20 = (signed char)27;
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
