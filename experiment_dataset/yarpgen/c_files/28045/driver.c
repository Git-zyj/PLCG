#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)24;
unsigned int var_3 = 1671250125U;
signed char var_4 = (signed char)36;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 3935823480191121755ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1843757740U;
unsigned long long int var_14 = 4456792987956300272ULL;
void init() {
}

void checksum() {
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
