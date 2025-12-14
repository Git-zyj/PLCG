#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)33;
int var_3 = -1914268192;
int var_4 = -108708718;
int var_12 = 1585419765;
signed char var_15 = (signed char)16;
int zero = 0;
long long int var_16 = 6442420276891440845LL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
