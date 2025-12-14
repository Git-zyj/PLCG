#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1817198242U;
unsigned char var_2 = (unsigned char)171;
short var_3 = (short)8340;
short var_4 = (short)8938;
unsigned char var_6 = (unsigned char)14;
unsigned char var_7 = (unsigned char)154;
short var_9 = (short)11077;
int zero = 0;
short var_11 = (short)2645;
long long int var_12 = 5075389341972879068LL;
short var_13 = (short)-7834;
unsigned int var_14 = 2492700331U;
unsigned int var_15 = 3815034941U;
unsigned short var_16 = (unsigned short)13852;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)1;
unsigned long long int var_19 = 12349941121570120423ULL;
unsigned int arr_0 [13] [13] ;
short arr_1 [13] [13] ;
unsigned char arr_2 [13] ;
unsigned char arr_3 [13] ;
short arr_5 [13] ;
short arr_6 [13] ;
unsigned short arr_7 [13] [13] ;
short arr_10 [13] [13] [13] ;
short arr_11 [13] ;
short arr_13 [13] [13] [13] [13] ;
short arr_8 [13] ;
unsigned short arr_14 [13] [13] [13] [13] [13] [13] ;
unsigned int arr_15 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 3385493133U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (short)26338;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (short)27173;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)991;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)36229;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)21418;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (short)-32721;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (short)3607;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (short)-16728;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)30425;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 1095510748U;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
