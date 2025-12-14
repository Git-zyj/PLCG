#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 196023397;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 12578464467668520713ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 5037878089868030058ULL;
int zero = 0;
signed char var_15 = (signed char)49;
unsigned long long int var_16 = 11912684175963588121ULL;
long long int var_17 = 8955699404745551238LL;
long long int var_18 = -2327234081769155318LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
