#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
unsigned long long int var_2 = 14489475348695554052ULL;
long long int var_5 = -6123496290218287889LL;
long long int var_6 = -2666808102005591917LL;
short var_7 = (short)2728;
_Bool var_10 = (_Bool)1;
long long int var_12 = -3096974449829527013LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-111;
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
