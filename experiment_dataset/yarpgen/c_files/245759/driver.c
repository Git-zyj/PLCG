#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-14;
int var_5 = -1802312051;
long long int var_6 = 1412311980929073414LL;
long long int var_7 = 2395332447655267542LL;
signed char var_8 = (signed char)-95;
int var_11 = 1040766371;
int zero = 0;
unsigned long long int var_15 = 3409379355044407543ULL;
signed char var_16 = (signed char)53;
void init() {
}

void checksum() {
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
