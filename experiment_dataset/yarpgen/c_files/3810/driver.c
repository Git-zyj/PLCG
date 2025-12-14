#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -853599599;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 11077651938669035575ULL;
unsigned long long int var_3 = 7894824452331680854ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)64792;
short var_7 = (short)29900;
unsigned char var_8 = (unsigned char)98;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_11 = (short)-26880;
short var_12 = (short)3489;
unsigned char var_13 = (unsigned char)5;
short var_14 = (short)-28142;
short var_15 = (short)-21759;
long long int var_16 = 6910256446375510015LL;
unsigned long long int var_17 = 893775800887938451ULL;
unsigned long long int var_18 = 11186400860677985791ULL;
int var_19 = -1442591108;
short var_20 = (short)-2907;
unsigned char var_21 = (unsigned char)234;
_Bool var_22 = (_Bool)1;
long long int var_23 = -7777689973509636222LL;
short var_24 = (short)4229;
unsigned short var_25 = (unsigned short)5231;
signed char var_26 = (signed char)35;
unsigned int arr_0 [16] ;
unsigned long long int arr_2 [16] ;
unsigned char arr_5 [16] ;
short arr_13 [18] [18] ;
int arr_17 [18] [18] [18] ;
short arr_18 [18] [18] ;
short arr_20 [18] ;
unsigned char arr_6 [16] ;
long long int arr_7 [16] [16] ;
short arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1305912807U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 11948502335607560506ULL : 3370338070928253188ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-17635;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 74221736;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)4852 : (short)2576;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (short)12020;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = -3374823619557400697LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (short)20117;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
