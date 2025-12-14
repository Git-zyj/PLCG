#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1689582606;
signed char var_3 = (signed char)122;
long long int var_13 = 2645288311542299114LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2389495384U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
