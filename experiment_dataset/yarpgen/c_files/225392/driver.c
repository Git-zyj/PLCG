#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-92;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 15696516422366334838ULL;
signed char var_12 = (signed char)-78;
unsigned long long int var_14 = 6842363272310246390ULL;
int zero = 0;
int var_15 = 107765240;
int var_16 = 1281505065;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
