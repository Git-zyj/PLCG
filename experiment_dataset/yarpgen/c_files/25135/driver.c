#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8562866771121813584ULL;
unsigned long long int var_3 = 12550051268951743715ULL;
long long int var_10 = -5571357897358960224LL;
unsigned long long int var_13 = 9974593721398764116ULL;
int zero = 0;
long long int var_17 = -3021576359750670319LL;
unsigned long long int var_18 = 8426188235471816461ULL;
void init() {
}

void checksum() {
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
