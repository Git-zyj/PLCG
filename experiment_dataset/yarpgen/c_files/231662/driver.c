#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4090886824U;
unsigned int var_3 = 2038263920U;
unsigned long long int var_12 = 13581564603739152041ULL;
int var_13 = 978098493;
int zero = 0;
unsigned int var_15 = 2643621979U;
_Bool var_16 = (_Bool)0;
int var_17 = -1185689390;
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
