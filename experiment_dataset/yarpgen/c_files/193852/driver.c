#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)15;
int var_4 = -189758801;
unsigned short var_12 = (unsigned short)13763;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3367384169U;
unsigned short var_16 = (unsigned short)58945;
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
