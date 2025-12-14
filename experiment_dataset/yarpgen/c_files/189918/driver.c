#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 3831433872129025316ULL;
unsigned int var_5 = 1858983612U;
_Bool var_7 = (_Bool)1;
int var_8 = -106983816;
short var_11 = (short)-23716;
long long int var_15 = 2225148203943571277LL;
int zero = 0;
unsigned long long int var_18 = 7526950104415985603ULL;
_Bool var_19 = (_Bool)1;
long long int var_20 = -6183081853395259043LL;
unsigned int var_21 = 3549687989U;
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
