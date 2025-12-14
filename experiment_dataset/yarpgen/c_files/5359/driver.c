#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = 264715715;
_Bool var_4 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 11148425170135859296ULL;
short var_12 = (short)5579;
long long int var_15 = 5699771724739893469LL;
int zero = 0;
int var_19 = 1416301284;
unsigned int var_20 = 3931400824U;
void init() {
}

void checksum() {
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
