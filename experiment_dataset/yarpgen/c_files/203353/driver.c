#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -950074343;
int var_2 = -1365893925;
short var_3 = (short)-11443;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_6 = -6434647986132768135LL;
unsigned char var_7 = (unsigned char)51;
short var_9 = (short)-19786;
int var_10 = -2075157406;
unsigned int var_11 = 3181914839U;
unsigned long long int var_12 = 1097192294116581342ULL;
int var_13 = -366517939;
short var_15 = (short)-21135;
int var_16 = 1857054274;
int zero = 0;
unsigned char var_17 = (unsigned char)233;
unsigned char var_18 = (unsigned char)101;
unsigned int var_19 = 1001482334U;
int var_20 = 625605043;
unsigned long long int var_21 = 1730690159498748651ULL;
unsigned long long int var_22 = 6272580921002111209ULL;
unsigned long long int var_23 = 17475293116754371295ULL;
unsigned long long int var_24 = 14008433111672140501ULL;
unsigned int var_25 = 2874178494U;
unsigned short var_26 = (unsigned short)9287;
unsigned long long int var_27 = 1591558309225953576ULL;
unsigned short var_28 = (unsigned short)46893;
unsigned char var_29 = (unsigned char)123;
long long int var_30 = -7048686112519740096LL;
long long int var_31 = -2945988065363102059LL;
_Bool var_32 = (_Bool)0;
unsigned char var_33 = (unsigned char)183;
unsigned char var_34 = (unsigned char)19;
unsigned char var_35 = (unsigned char)89;
unsigned int var_36 = 3429231688U;
long long int var_37 = -5427667958654777875LL;
short arr_0 [22] ;
unsigned char arr_1 [22] ;
long long int arr_2 [22] ;
long long int arr_3 [22] ;
long long int arr_5 [11] ;
unsigned short arr_18 [24] ;
_Bool arr_19 [24] ;
unsigned char arr_20 [20] [20] ;
_Bool arr_21 [20] ;
_Bool arr_22 [25] [25] ;
long long int arr_23 [25] [25] ;
unsigned long long int arr_25 [25] [25] ;
long long int arr_34 [25] [25] ;
unsigned char arr_36 [25] ;
_Bool arr_40 [17] ;
_Bool arr_4 [22] [22] ;
int arr_13 [11] [11] [11] ;
unsigned short arr_14 [11] [11] ;
short arr_15 [11] [11] [11] [11] ;
unsigned short arr_16 [11] ;
unsigned int arr_17 [11] ;
signed char arr_26 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)-3830;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -6349438157681501321LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1652314057922600484LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = -5330376920092878150LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (unsigned short)61232;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_23 [i_0] [i_1] = -3228486236636890177LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_25 [i_0] [i_1] = 15951016135245151360ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_34 [i_0] [i_1] = 5149157673511639120LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_36 [i_0] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_40 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -1645190917;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)20810;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (short)7934;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (unsigned short)5599;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = 2073983917U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (signed char)-83 : (signed char)43;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
