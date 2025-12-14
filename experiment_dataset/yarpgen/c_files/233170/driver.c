#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3965778028U;
unsigned int var_5 = 3260139869U;
signed char var_8 = (signed char)9;
signed char var_9 = (signed char)-66;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)21;
unsigned int var_16 = 3116765075U;
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
