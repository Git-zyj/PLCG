#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1096191647;
_Bool var_10 = (_Bool)0;
int var_11 = -1429018848;
long long int var_16 = -6255421358420994171LL;
int zero = 0;
long long int var_17 = -2646047659147287017LL;
unsigned int var_18 = 3552278552U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
