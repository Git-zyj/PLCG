#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned char var_12 = (unsigned char)211;
int zero = 0;
unsigned long long int var_13 = 9554690271995964454ULL;
unsigned int var_14 = 3283475197U;
unsigned long long int var_15 = 10762563648288944525ULL;
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
