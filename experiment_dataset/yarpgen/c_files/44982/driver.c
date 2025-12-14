#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6735036293392177767ULL;
short var_5 = (short)17736;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned int var_13 = 1941796245U;
unsigned long long int var_15 = 17639215083946197267ULL;
int zero = 0;
signed char var_16 = (signed char)79;
long long int var_17 = -6042427026333901469LL;
short var_18 = (short)-10968;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
