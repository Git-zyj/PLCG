#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3323703884U;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2732084605U;
signed char var_14 = (signed char)13;
unsigned short var_15 = (unsigned short)15385;
long long int var_16 = -378427390941517412LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
