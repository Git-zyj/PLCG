#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1984935723;
_Bool var_6 = (_Bool)1;
int var_11 = 417596271;
long long int var_14 = -8410406355725122377LL;
int zero = 0;
signed char var_15 = (signed char)-34;
unsigned long long int var_16 = 9338399534239886968ULL;
unsigned int var_17 = 2727910559U;
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
