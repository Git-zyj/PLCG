#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -301983870;
unsigned int var_5 = 2142979017U;
unsigned int var_6 = 264547568U;
int var_10 = -717305464;
int zero = 0;
unsigned int var_11 = 2808556755U;
unsigned int var_12 = 2562086726U;
unsigned int var_13 = 2504290141U;
int var_14 = 1975907385;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
