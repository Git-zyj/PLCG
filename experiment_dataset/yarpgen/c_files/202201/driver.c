#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
long long int var_4 = -6801795668147298643LL;
_Bool var_5 = (_Bool)0;
int var_9 = -702071332;
unsigned int var_14 = 1202855364U;
long long int var_17 = -9089199481433750961LL;
int zero = 0;
int var_18 = 753130025;
unsigned long long int var_19 = 9379625224054519062ULL;
long long int var_20 = 5771153982851996724LL;
void init() {
}

void checksum() {
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
