#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6020813642234619924LL;
long long int var_9 = -4060979044919188274LL;
long long int var_11 = -3992857497924355396LL;
int zero = 0;
long long int var_13 = -7750067036185522147LL;
long long int var_14 = 1970006663826254506LL;
long long int var_15 = -1277210460739167127LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
