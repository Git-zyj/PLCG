#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4111887816502663816LL;
unsigned long long int var_4 = 11948199788586038169ULL;
_Bool var_7 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 944787479U;
signed char var_15 = (signed char)85;
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
