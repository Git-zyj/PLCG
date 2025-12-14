#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)66;
long long int var_11 = -5165410166355263282LL;
short var_12 = (short)-22333;
int var_13 = 390912675;
int zero = 0;
unsigned int var_14 = 675826009U;
unsigned int var_15 = 1584976775U;
unsigned int var_16 = 2396401050U;
unsigned int var_17 = 3969339014U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
