#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 843505642;
unsigned int var_6 = 1801750089U;
unsigned int var_7 = 1710285171U;
signed char var_8 = (signed char)73;
int zero = 0;
unsigned int var_20 = 3224632034U;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3586614154U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
