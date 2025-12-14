#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3993026695U;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 3843209648U;
int zero = 0;
unsigned int var_19 = 3028074441U;
_Bool var_20 = (_Bool)0;
long long int var_21 = -3569983607927934226LL;
long long int var_22 = 2818119420068060276LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
