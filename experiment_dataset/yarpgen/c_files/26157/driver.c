#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)54;
unsigned int var_5 = 2028363591U;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)134;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)247;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
