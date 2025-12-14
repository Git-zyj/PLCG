#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-7;
unsigned char var_4 = (unsigned char)101;
unsigned long long int var_6 = 10052711846287567895ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 11551023253786977767ULL;
unsigned int var_16 = 2854288826U;
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
