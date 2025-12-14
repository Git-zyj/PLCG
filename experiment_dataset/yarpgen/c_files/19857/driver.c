#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_3 = (short)27147;
short var_6 = (short)31938;
int var_7 = 447497428;
short var_10 = (short)27849;
int var_14 = 649875342;
int zero = 0;
int var_15 = -2085593665;
int var_16 = 662701079;
long long int var_17 = 3474175610762198949LL;
void init() {
}

void checksum() {
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
