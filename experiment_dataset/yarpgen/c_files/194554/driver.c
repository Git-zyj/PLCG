#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3326181500U;
signed char var_10 = (signed char)-58;
long long int var_12 = 1926866355034189266LL;
int var_15 = 159147903;
int zero = 0;
unsigned long long int var_20 = 14270501256144998880ULL;
short var_21 = (short)-28561;
long long int var_22 = 7208766640964050593LL;
unsigned short var_23 = (unsigned short)54802;
signed char var_24 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
