#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)94;
_Bool var_9 = (_Bool)1;
int var_11 = -2035090379;
unsigned char var_16 = (unsigned char)42;
int zero = 0;
signed char var_19 = (signed char)110;
unsigned char var_20 = (unsigned char)1;
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
