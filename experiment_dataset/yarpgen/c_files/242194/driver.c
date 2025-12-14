#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4046360745U;
unsigned int var_5 = 2835270944U;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 3896988607U;
signed char var_13 = (signed char)42;
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
