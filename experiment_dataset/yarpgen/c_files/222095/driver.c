#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2542081659U;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3917895562U;
unsigned int var_8 = 4203554671U;
long long int var_9 = 6419639906606501567LL;
unsigned int var_10 = 3443938576U;
unsigned long long int var_14 = 5626188112950824100ULL;
short var_16 = (short)-13363;
int zero = 0;
int var_17 = 840363074;
signed char var_18 = (signed char)77;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
