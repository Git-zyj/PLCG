#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18775;
unsigned int var_3 = 4286738575U;
short var_4 = (short)-7761;
unsigned int var_6 = 1433646668U;
int zero = 0;
signed char var_10 = (signed char)11;
long long int var_11 = 7339063284474629011LL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 10274774697107653251ULL;
long long int var_14 = 2987896693340992232LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
