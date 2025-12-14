#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2212264474U;
signed char var_9 = (signed char)126;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)55692;
unsigned int var_20 = 2311382381U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
