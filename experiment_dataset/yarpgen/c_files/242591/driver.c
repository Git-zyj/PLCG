#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)49;
unsigned char var_6 = (unsigned char)106;
unsigned long long int var_10 = 3150175485544690443ULL;
unsigned int var_11 = 1591321588U;
int zero = 0;
signed char var_14 = (signed char)-15;
unsigned char var_15 = (unsigned char)75;
unsigned long long int var_16 = 6125222455581150282ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
