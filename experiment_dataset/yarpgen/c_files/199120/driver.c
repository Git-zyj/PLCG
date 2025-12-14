#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1937409075U;
unsigned int var_3 = 1478857464U;
int var_8 = -1102538093;
short var_11 = (short)23348;
long long int var_14 = -5680406242379822496LL;
long long int var_18 = -3431527083204003662LL;
int zero = 0;
int var_19 = 1048371183;
unsigned long long int var_20 = 4986471696912639364ULL;
unsigned short var_21 = (unsigned short)51474;
unsigned int var_22 = 1259369321U;
long long int var_23 = 687727485547501335LL;
int var_24 = -1446512458;
unsigned int var_25 = 279589327U;
short var_26 = (short)29331;
signed char var_27 = (signed char)-70;
signed char var_28 = (signed char)35;
unsigned long long int var_29 = 4148251269432611524ULL;
_Bool var_30 = (_Bool)1;
long long int arr_0 [17] [17] ;
short arr_2 [17] [17] ;
unsigned int arr_4 [23] ;
unsigned short arr_5 [23] ;
long long int arr_8 [23] ;
unsigned long long int arr_3 [17] ;
signed char arr_6 [23] ;
unsigned long long int arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 5274651095530875639LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)29130;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3891152509U : 1622251183U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)55481;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 3391334718656397337LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 16464654601876568680ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)119 : (signed char)-10;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 3128915020301890131ULL : 5482137464403042798ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
