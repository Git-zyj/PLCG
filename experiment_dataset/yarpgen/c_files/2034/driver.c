#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10933232014719679650ULL;
signed char var_2 = (signed char)34;
signed char var_4 = (signed char)-96;
unsigned int var_8 = 2549384195U;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -1780071069;
void init() {
}

void checksum() {
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
