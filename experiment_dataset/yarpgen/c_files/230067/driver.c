#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17426860236065164805ULL;
unsigned long long int var_5 = 861802932667715608ULL;
long long int var_12 = 1812172518056176885LL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-17;
int zero = 0;
unsigned long long int var_16 = 11346591526849038658ULL;
signed char var_17 = (signed char)97;
unsigned long long int var_18 = 8110530294036439470ULL;
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
