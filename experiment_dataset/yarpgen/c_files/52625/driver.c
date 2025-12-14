#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 554281576U;
long long int var_2 = -5330426609524532732LL;
unsigned int var_3 = 2101014549U;
long long int var_10 = -1611007575223267351LL;
signed char var_11 = (signed char)97;
unsigned char var_12 = (unsigned char)20;
int zero = 0;
long long int var_13 = 4900827026701748716LL;
unsigned long long int var_14 = 6754408644470401757ULL;
unsigned int var_15 = 3593478560U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
