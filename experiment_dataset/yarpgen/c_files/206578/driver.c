#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 15041426381110459418ULL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)16598;
unsigned long long int var_6 = 2629791388446843542ULL;
short var_7 = (short)22614;
signed char var_8 = (signed char)119;
int zero = 0;
signed char var_10 = (signed char)-57;
signed char var_11 = (signed char)-31;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
