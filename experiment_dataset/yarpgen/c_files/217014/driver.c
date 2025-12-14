#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 4908294131978787181ULL;
short var_3 = (short)18010;
int var_7 = -1810390440;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 14883475669261338859ULL;
unsigned char var_12 = (unsigned char)76;
int zero = 0;
short var_15 = (short)14710;
long long int var_16 = -1079107523298073899LL;
unsigned int var_17 = 779095381U;
unsigned int var_18 = 2198582934U;
short var_19 = (short)16669;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
