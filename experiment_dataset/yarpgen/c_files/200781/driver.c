#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 3758192266150441512ULL;
unsigned long long int var_2 = 9828887689230566486ULL;
unsigned long long int var_3 = 1377976730675824088ULL;
unsigned long long int var_4 = 10477855716392722325ULL;
unsigned long long int var_5 = 14053220527082607443ULL;
unsigned long long int var_6 = 661816080675322119ULL;
unsigned long long int var_7 = 15159553392738688953ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 14948776886163595656ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 3036629442974181959ULL;
int zero = 0;
unsigned long long int var_16 = 2246186666570987574ULL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 9578399032467072888ULL;
_Bool var_19 = (_Bool)0;
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
