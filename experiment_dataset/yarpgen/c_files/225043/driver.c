#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1040666420;
_Bool var_2 = (_Bool)1;
long long int var_5 = 5340711221712963228LL;
int var_13 = -758847778;
int zero = 0;
unsigned long long int var_14 = 1373880983941742378ULL;
signed char var_15 = (signed char)88;
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
