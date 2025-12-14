#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_6 = -600815558;
unsigned int var_7 = 156414033U;
_Bool var_9 = (_Bool)0;
long long int var_11 = 917310083556105933LL;
long long int var_12 = -8699711556545928857LL;
long long int var_13 = 6443968515172280202LL;
short var_14 = (short)-6103;
int zero = 0;
long long int var_16 = 2095822149186039734LL;
unsigned short var_17 = (unsigned short)34167;
unsigned int var_18 = 1465358485U;
long long int var_19 = -2891475966860298132LL;
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
