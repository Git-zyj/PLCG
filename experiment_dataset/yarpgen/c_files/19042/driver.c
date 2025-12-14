#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-49;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 3449428245U;
int zero = 0;
unsigned int var_20 = 1151577040U;
unsigned int var_21 = 868742355U;
int var_22 = 927428689;
void init() {
}

void checksum() {
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
