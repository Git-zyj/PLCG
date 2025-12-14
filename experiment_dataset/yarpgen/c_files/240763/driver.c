#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)60;
_Bool var_10 = (_Bool)1;
long long int var_15 = -7714976758297317683LL;
int zero = 0;
long long int var_16 = 4875390094794736377LL;
unsigned int var_17 = 3513588790U;
unsigned int var_18 = 1731130674U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
