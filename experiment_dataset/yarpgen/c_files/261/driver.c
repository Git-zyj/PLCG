#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7864695194280410255ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_13 = 3605542844781281772ULL;
int zero = 0;
unsigned long long int var_15 = 1372823119753536322ULL;
unsigned long long int var_16 = 330213861663492238ULL;
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
