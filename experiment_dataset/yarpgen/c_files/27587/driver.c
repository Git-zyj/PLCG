#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7295155451675776250LL;
short var_3 = (short)-7709;
unsigned long long int var_7 = 17755060007167661271ULL;
long long int var_8 = -5174599163823244189LL;
int zero = 0;
long long int var_10 = -2360067847859613132LL;
long long int var_11 = -1180218202375988013LL;
signed char var_12 = (signed char)9;
long long int var_13 = -8181390836426587104LL;
unsigned long long int var_14 = 7104547378044945586ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
