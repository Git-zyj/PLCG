#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1777725686;
_Bool var_9 = (_Bool)1;
int var_11 = -1137044875;
long long int var_13 = -4176309945836244985LL;
int var_14 = -42086510;
int zero = 0;
int var_15 = -71006985;
int var_16 = 1662784472;
long long int var_17 = -4651442976209356030LL;
long long int var_18 = -325442359197972832LL;
int arr_1 [20] ;
_Bool arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 688032454;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
