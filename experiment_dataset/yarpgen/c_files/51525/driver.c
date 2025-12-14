#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17621781847144338577ULL;
unsigned int var_3 = 1315320353U;
long long int var_4 = -6423325422926700690LL;
unsigned int var_10 = 105017409U;
int zero = 0;
unsigned long long int var_15 = 5141530292551260119ULL;
long long int var_16 = -8155171726867230180LL;
short var_17 = (short)-11173;
void init() {
}

void checksum() {
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
