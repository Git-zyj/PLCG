#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2246483189U;
_Bool var_1 = (_Bool)0;
short var_3 = (short)-8369;
long long int var_6 = -8256330898943729038LL;
signed char var_7 = (signed char)-89;
short var_8 = (short)11151;
unsigned long long int var_10 = 13159045751127117971ULL;
unsigned int var_12 = 2450036760U;
unsigned char var_13 = (unsigned char)141;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-20803;
int var_16 = -2071281386;
long long int var_17 = 5944058108698589077LL;
unsigned short var_18 = (unsigned short)7843;
unsigned short var_19 = (unsigned short)58308;
int var_20 = 1121687578;
unsigned char arr_0 [21] ;
int arr_1 [21] ;
int arr_2 [21] [21] ;
int arr_3 [21] ;
unsigned char arr_5 [21] ;
unsigned short arr_7 [21] ;
signed char arr_8 [21] ;
unsigned char arr_9 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -57780035;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 2123634742;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1014867541;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned short)44121;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned char)222;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
