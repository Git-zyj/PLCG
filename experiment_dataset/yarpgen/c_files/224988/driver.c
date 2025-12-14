#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 17439097191271974152ULL;
signed char var_13 = (signed char)69;
unsigned int var_15 = 2244052145U;
short var_17 = (short)-15311;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_20 = (short)-26541;
unsigned int var_21 = 1708820289U;
long long int var_22 = -1539607324136133370LL;
short var_23 = (short)-5851;
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
