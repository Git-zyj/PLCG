#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1614679631U;
short var_9 = (short)-19906;
unsigned long long int var_13 = 14753498746863851668ULL;
long long int var_17 = -3750165362742504971LL;
int zero = 0;
short var_18 = (short)26204;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 13079252112996382057ULL;
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
