#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -157883592;
_Bool var_8 = (_Bool)1;
unsigned int var_13 = 635259600U;
signed char var_15 = (signed char)-78;
int zero = 0;
unsigned int var_17 = 3091408573U;
unsigned int var_18 = 3391192342U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
