#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 265633246;
signed char var_7 = (signed char)-2;
unsigned int var_13 = 1263037722U;
unsigned long long int var_15 = 11176015579143594636ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 1363420822;
void init() {
}

void checksum() {
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
