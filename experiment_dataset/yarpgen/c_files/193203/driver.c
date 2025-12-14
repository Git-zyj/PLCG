#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 375081324U;
_Bool var_7 = (_Bool)0;
signed char var_12 = (signed char)56;
int zero = 0;
long long int var_13 = 7049611973446163200LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = 3342364954786202831LL;
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
