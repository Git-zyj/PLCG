#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
unsigned int var_1 = 840167856U;
signed char var_4 = (signed char)-92;
unsigned int var_5 = 1390582736U;
unsigned long long int var_9 = 1844474514986170564ULL;
_Bool var_10 = (_Bool)1;
unsigned int var_13 = 3492321669U;
_Bool var_15 = (_Bool)1;
int var_17 = -670912639;
int zero = 0;
int var_18 = -730270628;
unsigned int var_19 = 873982422U;
long long int arr_1 [22] ;
short arr_3 [22] [22] ;
short arr_4 [22] ;
int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -3815320622640691402LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-20143;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)-5604;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -177104714;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
