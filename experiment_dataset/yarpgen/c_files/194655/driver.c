#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7582412295892694900LL;
unsigned int var_2 = 919615781U;
long long int var_3 = 3268503239803631119LL;
short var_4 = (short)28762;
unsigned short var_5 = (unsigned short)54519;
short var_6 = (short)38;
short var_7 = (short)-25177;
unsigned long long int var_8 = 13624195285884374603ULL;
long long int var_9 = -6546139368180048644LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = 1034985175499435836LL;
unsigned int var_12 = 4253640039U;
long long int var_13 = 939916514428564519LL;
signed char var_14 = (signed char)-71;
unsigned short var_15 = (unsigned short)26084;
short var_16 = (short)10170;
short var_17 = (short)807;
_Bool var_18 = (_Bool)1;
long long int var_19 = 7496087193181536158LL;
_Bool arr_0 [14] ;
unsigned long long int arr_1 [14] ;
long long int arr_4 [14] ;
signed char arr_5 [14] [14] ;
long long int arr_6 [22] [22] ;
int arr_7 [22] ;
unsigned int arr_2 [14] [14] ;
_Bool arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 6338531233257704127ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -481166899547224441LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 4082254936089584344LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 2116749919;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 1428340590U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
