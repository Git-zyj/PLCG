#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13050069112637576166ULL;
_Bool var_6 = (_Bool)1;
signed char var_16 = (signed char)-73;
int zero = 0;
unsigned int var_17 = 2806742265U;
unsigned long long int var_18 = 12403536445414578038ULL;
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
