#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7424023417047682915LL;
long long int var_6 = -9051391775891438171LL;
long long int var_7 = 6078031500070581712LL;
int zero = 0;
long long int var_14 = -3247765242371640774LL;
long long int var_15 = -2549536552013341961LL;
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
