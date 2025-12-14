#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1446736467;
signed char var_5 = (signed char)-78;
unsigned int var_7 = 1578949260U;
int zero = 0;
unsigned short var_12 = (unsigned short)34859;
unsigned int var_13 = 2832681277U;
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
