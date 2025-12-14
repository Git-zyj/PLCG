#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 821324576982336776LL;
long long int var_1 = -3169741169273849296LL;
long long int var_3 = -362120464190691138LL;
unsigned char var_4 = (unsigned char)77;
unsigned int var_5 = 3624201842U;
unsigned short var_6 = (unsigned short)34473;
short var_7 = (short)17825;
long long int var_8 = -7992517214863255476LL;
unsigned char var_9 = (unsigned char)48;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)33840;
signed char var_15 = (signed char)91;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 4104862166U;
unsigned int var_18 = 1933617561U;
int zero = 0;
short var_19 = (short)-10810;
unsigned char var_20 = (unsigned char)63;
int var_21 = 672125904;
unsigned char var_22 = (unsigned char)127;
long long int var_23 = 1873034579591247325LL;
short var_24 = (short)-11794;
_Bool var_25 = (_Bool)0;
long long int var_26 = 6115125139289620180LL;
long long int var_27 = 543175505854366604LL;
signed char var_28 = (signed char)-22;
unsigned char var_29 = (unsigned char)227;
unsigned short var_30 = (unsigned short)60291;
signed char var_31 = (signed char)122;
int var_32 = -1318672197;
long long int var_33 = 2338921412472840337LL;
signed char var_34 = (signed char)35;
short var_35 = (short)16130;
int var_36 = -741881839;
short var_37 = (short)6543;
unsigned int var_38 = 2696734283U;
unsigned char var_39 = (unsigned char)173;
signed char var_40 = (signed char)113;
long long int var_41 = 7372866026796587228LL;
signed char var_42 = (signed char)-33;
_Bool var_43 = (_Bool)0;
long long int var_44 = -6489321584470888997LL;
int var_45 = 1500410799;
signed char var_46 = (signed char)54;
unsigned char var_47 = (unsigned char)32;
long long int var_48 = 6602323140514642843LL;
signed char var_49 = (signed char)-93;
unsigned long long int var_50 = 8697997492682437021ULL;
short var_51 = (short)-3522;
_Bool arr_0 [23] [23] ;
unsigned short arr_1 [23] ;
_Bool arr_2 [23] [23] ;
_Bool arr_3 [23] [23] ;
_Bool arr_4 [23] ;
short arr_6 [23] ;
int arr_14 [23] [23] [23] [23] [23] ;
long long int arr_15 [23] [23] [23] ;
int arr_17 [23] [23] [23] ;
signed char arr_24 [23] [23] [23] ;
long long int arr_26 [23] [23] [23] [23] ;
signed char arr_30 [23] [23] [23] ;
long long int arr_39 [23] ;
unsigned int arr_40 [23] [23] [23] ;
long long int arr_41 [23] [23] [23] [23] [23] ;
long long int arr_47 [23] [23] [23] ;
unsigned char arr_48 [23] [23] [23] ;
unsigned long long int arr_49 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)20324;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (short)-13026;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -510529315 : 524527189;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 8369658392221344510LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = -2120077069;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)9 : (signed char)35;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = -3791756989532069979LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? -8713245099573069906LL : -6477304465443499234LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2023335195U : 2054702728U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -8236201601770484117LL : -3504389563614556877LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -374283294078856822LL : -7859699049512295570LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)212 : (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_49 [i_0] = (i_0 % 2 == 0) ? 9342269067969812642ULL : 7764946088116827165ULL;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_40 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_47 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_48 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_49 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
