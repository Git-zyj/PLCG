#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 7508018731974230775ULL;
unsigned long long int var_10 = 1915251239206906804ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 6211784146584335214LL;
signed char var_16 = (signed char)100;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
