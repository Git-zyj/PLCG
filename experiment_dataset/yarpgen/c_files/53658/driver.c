#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)73;
unsigned char var_2 = (unsigned char)231;
unsigned long long int var_3 = 2329949518725410194ULL;
long long int var_4 = -3563413950934590553LL;
unsigned long long int var_5 = 10983656918547225358ULL;
short var_7 = (short)17;
short var_10 = (short)7143;
unsigned char var_12 = (unsigned char)134;
unsigned long long int var_13 = 14997976030884099360ULL;
int zero = 0;
int var_14 = 1868039069;
long long int var_15 = -398306948986994057LL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-5083;
unsigned long long int arr_0 [13] ;
long long int arr_1 [13] ;
long long int arr_3 [13] ;
unsigned short arr_4 [13] ;
long long int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 13957229378208129790ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -596866692884340981LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -135178280554646925LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)16162;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -1582146127494946792LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
