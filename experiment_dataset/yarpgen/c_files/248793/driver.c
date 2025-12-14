#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 606764452;
unsigned int var_1 = 3748839222U;
unsigned int var_2 = 2376672366U;
unsigned int var_8 = 828715755U;
unsigned int var_10 = 2447599762U;
short var_11 = (short)-18028;
int var_13 = -1994959007;
int zero = 0;
unsigned long long int var_14 = 12850148213162738866ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
