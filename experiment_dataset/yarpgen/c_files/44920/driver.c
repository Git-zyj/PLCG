#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 13582562652743247241ULL;
int var_3 = -296273154;
long long int var_4 = 6879017865158245839LL;
short var_5 = (short)-25817;
unsigned short var_10 = (unsigned short)31675;
unsigned long long int var_11 = 7159132064207309250ULL;
int zero = 0;
unsigned long long int var_13 = 2039943042114654012ULL;
int var_14 = 232623562;
unsigned short var_15 = (unsigned short)1730;
unsigned short var_16 = (unsigned short)63984;
int var_17 = 1300446728;
unsigned int arr_0 [15] ;
long long int arr_1 [15] ;
long long int arr_3 [15] ;
long long int arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3797475622U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -8751634142811420718LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -7158125700826754053LL : -5148485844248893833LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 3977575924967643880LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
