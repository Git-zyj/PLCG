#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1221651355U;
unsigned int var_5 = 3716902223U;
unsigned int var_9 = 4097838856U;
long long int var_10 = 5737506512492038735LL;
unsigned int var_11 = 1931344530U;
unsigned int var_13 = 4022541415U;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -4437120866326445301LL;
int var_17 = 906390692;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
