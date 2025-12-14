#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9955642030380775750ULL;
unsigned short var_1 = (unsigned short)48616;
unsigned int var_2 = 266196993U;
long long int var_3 = 266533528117590710LL;
int var_4 = -2106110137;
unsigned long long int var_5 = 4110651480788085839ULL;
short var_6 = (short)-15650;
short var_8 = (short)2342;
short var_9 = (short)-20053;
short var_10 = (short)11047;
int var_11 = 1506954831;
unsigned long long int var_12 = 9515249538349829538ULL;
int var_13 = -1087002608;
signed char var_14 = (signed char)107;
unsigned short var_15 = (unsigned short)10043;
int zero = 0;
unsigned short var_16 = (unsigned short)21883;
unsigned int var_17 = 1267786199U;
short var_18 = (short)-13284;
unsigned char var_19 = (unsigned char)159;
unsigned int var_20 = 3014431412U;
short var_21 = (short)-3780;
unsigned short var_22 = (unsigned short)46381;
unsigned short var_23 = (unsigned short)24148;
long long int var_24 = -7629724495676095188LL;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 2286229553404450788ULL;
unsigned long long int var_27 = 984050091008721658ULL;
_Bool var_28 = (_Bool)1;
int var_29 = -1805662090;
unsigned long long int var_30 = 14141739597569944324ULL;
short var_31 = (short)24031;
long long int arr_0 [21] [21] ;
unsigned short arr_1 [21] [21] ;
unsigned long long int arr_2 [21] ;
short arr_3 [21] [21] [21] ;
long long int arr_5 [21] ;
unsigned int arr_6 [21] ;
unsigned char arr_7 [21] [21] [21] ;
unsigned int arr_8 [21] [21] [21] [21] [21] [21] ;
unsigned short arr_10 [21] [21] [21] [21] [21] [21] [21] ;
int arr_12 [21] [21] [21] ;
unsigned char arr_21 [15] ;
short arr_22 [15] ;
_Bool arr_18 [21] [21] ;
_Bool arr_19 [21] [21] ;
long long int arr_24 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -6355284313275481093LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)4481;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1027830231386229225ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)10651;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 4631542591780308605LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 2178114901U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3875910716U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? (unsigned short)13200 : (unsigned short)56986;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -1643326746;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = (short)-32556;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_18 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_19 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? -2981107504540177241LL : 9203543341947079375LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
