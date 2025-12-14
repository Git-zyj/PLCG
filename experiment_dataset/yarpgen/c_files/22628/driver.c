#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7295703306049063433ULL;
_Bool var_2 = (_Bool)1;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)55922;
short var_13 = (short)12254;
unsigned char var_14 = (unsigned char)69;
int zero = 0;
long long int var_15 = 789466955998746955LL;
_Bool var_16 = (_Bool)1;
long long int var_17 = -6214876198413873348LL;
long long int var_18 = -5571215032910208072LL;
long long int var_19 = 4288681727841843699LL;
int var_20 = 1054177167;
int arr_0 [23] ;
int arr_2 [23] ;
long long int arr_3 [23] ;
_Bool arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -1825776869;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1948386972;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 597319643731257076LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
