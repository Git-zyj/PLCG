#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7749707791444523009LL;
unsigned int var_1 = 2894927395U;
long long int var_2 = 4166511402955367643LL;
long long int var_3 = -6388443036832975238LL;
unsigned int var_4 = 2516751089U;
unsigned char var_5 = (unsigned char)130;
long long int var_6 = 3775276462631086554LL;
unsigned long long int var_7 = 4631493245818302852ULL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1346091179U;
unsigned char var_11 = (unsigned char)211;
unsigned char var_12 = (unsigned char)21;
unsigned char var_15 = (unsigned char)162;
int zero = 0;
long long int var_16 = -6892691996638454132LL;
_Bool var_17 = (_Bool)1;
int var_18 = -1029294617;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)17457;
unsigned long long int var_21 = 2804612324634438399ULL;
unsigned long long int arr_0 [13] ;
unsigned short arr_1 [13] ;
int arr_2 [13] ;
long long int arr_7 [25] ;
unsigned short arr_3 [13] ;
long long int arr_4 [13] [13] ;
int arr_8 [25] ;
int arr_9 [25] ;
long long int arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1243096651093338204ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)39808;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 476313229;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -643920438325178651LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)58677;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = -2816065050534189373LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1228454486 : -851522510;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1093382713 : 631296849;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -5685005464793482309LL : -5891775616955240894LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
