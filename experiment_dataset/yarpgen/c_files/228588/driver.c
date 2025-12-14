#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16528869274333064448ULL;
short var_2 = (short)25099;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 764899701U;
unsigned int var_8 = 1821295494U;
int var_10 = 94381432;
long long int var_14 = -6442437397757920817LL;
int var_16 = -595168623;
unsigned short var_17 = (unsigned short)18181;
int zero = 0;
unsigned long long int var_18 = 7925240331766754102ULL;
unsigned int var_19 = 1491939403U;
unsigned int var_20 = 1391103531U;
unsigned int var_21 = 2894991420U;
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
