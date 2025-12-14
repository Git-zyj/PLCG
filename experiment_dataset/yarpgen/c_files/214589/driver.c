#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 14423635926202331951ULL;
unsigned long long int var_2 = 10876118599593702701ULL;
unsigned long long int var_4 = 17066503638259284584ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 3232123146942349704ULL;
unsigned long long int var_9 = 1447888732803671910ULL;
unsigned long long int var_11 = 15860201127597593429ULL;
int zero = 0;
unsigned long long int var_14 = 2712646368829951964ULL;
unsigned long long int var_15 = 7677902945451550741ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 5675251217914626551ULL;
unsigned long long int var_18 = 18212915798104303271ULL;
unsigned long long int var_19 = 11578544260306218167ULL;
unsigned long long int var_20 = 5350904590649592504ULL;
_Bool arr_0 [14] ;
unsigned long long int arr_3 [12] ;
unsigned long long int arr_4 [12] ;
unsigned long long int arr_6 [18] ;
unsigned long long int arr_7 [18] ;
unsigned long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 940570534409429248ULL : 4351663167766865287ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 5109844993599036303ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 1141684770738246664ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 16166426643502791719ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 7305331121698200624ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
