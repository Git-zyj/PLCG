#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11192684248640413368ULL;
unsigned int var_4 = 2887104915U;
unsigned char var_6 = (unsigned char)126;
_Bool var_7 = (_Bool)1;
signed char var_13 = (signed char)31;
int zero = 0;
long long int var_16 = 5388268755173856063LL;
signed char var_17 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
