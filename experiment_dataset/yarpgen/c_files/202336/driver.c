#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 70003055U;
unsigned short var_12 = (unsigned short)30362;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 11220209957396547453ULL;
unsigned long long int var_21 = 7627457133434192536ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
