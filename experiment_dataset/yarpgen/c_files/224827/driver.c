#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)-17877;
int var_4 = -542033323;
long long int var_5 = 7110565214273076982LL;
unsigned long long int var_6 = 3117689507761142951ULL;
unsigned int var_11 = 2895116316U;
short var_13 = (short)-31150;
long long int var_14 = -3491595836646927751LL;
int zero = 0;
short var_15 = (short)16129;
short var_16 = (short)24674;
unsigned int var_17 = 2249886894U;
_Bool var_18 = (_Bool)0;
_Bool arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
