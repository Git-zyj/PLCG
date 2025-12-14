#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 13773676302009799914ULL;
unsigned int var_18 = 2475585763U;
unsigned long long int var_19 = 1221283141122712911ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
