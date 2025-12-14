#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6820757301608486664LL;
long long int var_4 = -6828882406297195720LL;
long long int var_5 = 248722946611097456LL;
unsigned short var_6 = (unsigned short)34732;
short var_7 = (short)3622;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)14366;
short var_11 = (short)20967;
short var_16 = (short)3427;
unsigned short var_17 = (unsigned short)23038;
short var_18 = (short)1784;
unsigned short var_19 = (unsigned short)26218;
int zero = 0;
short var_20 = (short)-1527;
short var_21 = (short)-9006;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)3699;
long long int var_24 = -3444619364659735533LL;
unsigned short var_25 = (unsigned short)28697;
long long int var_26 = 6026528924605578359LL;
short var_27 = (short)9306;
unsigned short var_28 = (unsigned short)9357;
unsigned short arr_4 [19] [19] ;
_Bool arr_5 [19] ;
unsigned short arr_6 [19] ;
_Bool arr_9 [22] ;
long long int arr_10 [22] [22] ;
_Bool arr_15 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)41231;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)49663;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = -5161199420166699727LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
