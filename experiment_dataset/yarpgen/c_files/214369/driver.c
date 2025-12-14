#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = -5925468341385091190LL;
int var_10 = 154468486;
_Bool var_12 = (_Bool)1;
signed char var_15 = (signed char)70;
int zero = 0;
unsigned char var_18 = (unsigned char)95;
unsigned int var_19 = 2749735304U;
unsigned int var_20 = 2051090099U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
