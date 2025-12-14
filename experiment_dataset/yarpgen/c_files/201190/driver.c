#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)65;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
int var_10 = 1996179391;
unsigned int var_11 = 2611272731U;
long long int var_15 = 3657869365686606140LL;
int zero = 0;
int var_18 = 801217744;
unsigned long long int var_19 = 13244519018620150104ULL;
unsigned int var_20 = 2649262293U;
long long int var_21 = 7220537420036266882LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
