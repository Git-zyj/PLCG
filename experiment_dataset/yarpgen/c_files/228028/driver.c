#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)95;
signed char var_2 = (signed char)3;
unsigned int var_7 = 3573642145U;
unsigned long long int var_10 = 9952544260630006000ULL;
long long int var_11 = -8603146716844053236LL;
unsigned long long int var_14 = 11614412531974089928ULL;
unsigned int var_15 = 2354440175U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)15921;
signed char var_19 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
