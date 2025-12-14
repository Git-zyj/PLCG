#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_8 = (signed char)-84;
long long int var_10 = -7914373140771688496LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = 7803825851081002552LL;
long long int var_15 = -1815469050863636875LL;
signed char var_16 = (signed char)-11;
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
