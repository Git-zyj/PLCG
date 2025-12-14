#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3842601589225599980LL;
long long int var_1 = -8563345189845791711LL;
unsigned short var_4 = (unsigned short)58710;
signed char var_5 = (signed char)-74;
unsigned int var_8 = 3761683126U;
long long int var_10 = 171228662441576844LL;
long long int var_11 = -8126592410305774222LL;
unsigned int var_12 = 1704682578U;
int zero = 0;
unsigned short var_14 = (unsigned short)115;
long long int var_15 = -150772660315433711LL;
_Bool var_16 = (_Bool)1;
int var_17 = 799704278;
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
