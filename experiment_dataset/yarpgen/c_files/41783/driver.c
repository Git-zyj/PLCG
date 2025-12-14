#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)100;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)81;
int zero = 0;
unsigned char var_10 = (unsigned char)28;
unsigned char var_11 = (unsigned char)7;
unsigned int var_12 = 2762593397U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
