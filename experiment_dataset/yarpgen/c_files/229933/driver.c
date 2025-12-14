#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -809005635;
signed char var_11 = (signed char)17;
int var_13 = -1592652790;
long long int var_14 = -4198413518672663387LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -1030182573861576110LL;
void init() {
}

void checksum() {
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
