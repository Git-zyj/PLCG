#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29302;
unsigned long long int var_10 = 3648049811610956664ULL;
long long int var_11 = -1177657410758430367LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-65;
unsigned long long int var_15 = 17420509037713108516ULL;
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
