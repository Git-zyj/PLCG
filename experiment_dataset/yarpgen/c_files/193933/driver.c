#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-96;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 13849612750877137305ULL;
int zero = 0;
unsigned int var_12 = 4202406703U;
unsigned long long int var_13 = 13663195648198571733ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
