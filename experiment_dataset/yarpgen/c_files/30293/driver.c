#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8115652555072106958ULL;
unsigned char var_13 = (unsigned char)68;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 16226976432198235272ULL;
long long int var_19 = -1089262646842095027LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
