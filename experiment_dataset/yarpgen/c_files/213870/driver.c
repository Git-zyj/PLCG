#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4285823536207181652LL;
long long int var_4 = 1112530444033664743LL;
long long int var_12 = 7133834480470402282LL;
unsigned int var_13 = 240816540U;
long long int var_18 = 5040149812862555780LL;
int zero = 0;
signed char var_20 = (signed char)68;
unsigned long long int var_21 = 18386863756095993651ULL;
short var_22 = (short)6593;
signed char var_23 = (signed char)-91;
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
