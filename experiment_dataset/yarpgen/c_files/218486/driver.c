#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)71;
_Bool var_4 = (_Bool)0;
long long int var_9 = -6594888255507373949LL;
long long int var_12 = 3609671827996158934LL;
int zero = 0;
long long int var_17 = 1824018362198308253LL;
signed char var_18 = (signed char)-61;
unsigned long long int var_19 = 6550072208962763826ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
