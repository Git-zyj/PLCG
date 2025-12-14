#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2359257747U;
long long int var_3 = 6898135288159330105LL;
long long int var_4 = 9018423726714874341LL;
signed char var_6 = (signed char)56;
unsigned char var_7 = (unsigned char)113;
unsigned char var_11 = (unsigned char)69;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = -786843199;
unsigned long long int var_14 = 2620059390796346076ULL;
long long int var_15 = 5812974354677969627LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
