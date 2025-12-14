#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1786236130U;
long long int var_5 = -2455030110903499599LL;
_Bool var_6 = (_Bool)1;
signed char var_10 = (signed char)61;
unsigned int var_11 = 3368343517U;
long long int var_17 = 6381558881131014166LL;
unsigned short var_18 = (unsigned short)16227;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = 1799891220250119879LL;
short var_21 = (short)2630;
unsigned int var_22 = 3163470494U;
unsigned short var_23 = (unsigned short)42283;
unsigned int var_24 = 3145316767U;
int var_25 = 760951042;
unsigned short var_26 = (unsigned short)1595;
int var_27 = -1105050987;
_Bool arr_0 [22] ;
unsigned long long int arr_1 [22] ;
_Bool arr_4 [13] ;
unsigned char arr_5 [13] [13] ;
short arr_6 [13] ;
short arr_8 [13] [13] ;
_Bool arr_10 [13] ;
unsigned int arr_11 [13] ;
long long int arr_2 [22] ;
unsigned short arr_3 [22] ;
short arr_7 [13] ;
unsigned int arr_14 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 15127802546855010779ULL : 15745305952512660424ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)-8078;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-19207;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = 1178788457U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -3058454707524378508LL : 5606659171174518024LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)4810 : (unsigned short)2199;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (short)370;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 3942984437U;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
