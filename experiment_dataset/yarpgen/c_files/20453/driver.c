#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)90;
signed char var_2 = (signed char)44;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-11895;
unsigned int var_8 = 639894336U;
short var_10 = (short)-23598;
short var_14 = (short)-24164;
unsigned long long int var_16 = 7497463329287068637ULL;
int zero = 0;
int var_18 = 1042151625;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-32699;
unsigned int var_21 = 2455903161U;
short var_22 = (short)32388;
unsigned int var_23 = 1534296617U;
unsigned int var_24 = 1878473706U;
int var_25 = 1121020642;
unsigned long long int var_26 = 12894015966741684763ULL;
long long int var_27 = 3315632094157486989LL;
_Bool var_28 = (_Bool)0;
unsigned int var_29 = 613284420U;
unsigned long long int var_30 = 17286179579307107564ULL;
long long int var_31 = -7354216081016645633LL;
short var_32 = (short)-4294;
_Bool var_33 = (_Bool)1;
unsigned long long int arr_0 [19] ;
signed char arr_2 [19] ;
int arr_3 [19] ;
_Bool arr_4 [19] ;
int arr_5 [19] ;
long long int arr_9 [19] ;
short arr_10 [19] [19] ;
int arr_12 [19] [19] [19] ;
long long int arr_13 [19] ;
signed char arr_16 [11] [11] ;
signed char arr_18 [11] ;
_Bool arr_21 [11] [11] ;
int arr_25 [11] ;
long long int arr_27 [11] ;
signed char arr_33 [11] [11] ;
short arr_6 [19] ;
signed char arr_7 [19] ;
int arr_11 [19] [19] [19] ;
unsigned long long int arr_14 [19] [19] [19] ;
long long int arr_15 [19] [19] ;
short arr_24 [11] [11] ;
long long int arr_29 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 11402535030884442693ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -1375872154;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -2042326850;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 4130313832047641413LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-20779;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1183055345;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = 521708551690433080LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_25 [i_0] = -1830242024;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_27 [i_0] = -8962892015920833970LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_33 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)35 : (signed char)64;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (short)-18416;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1933805986;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 6348701937593717596ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = 2888001446632338498LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-15593 : (short)5617;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_29 [i_0] [i_1] = -3670587283731039077LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
