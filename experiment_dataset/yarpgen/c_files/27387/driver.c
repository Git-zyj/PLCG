#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1512721407;
short var_1 = (short)-938;
int var_2 = -1733788794;
short var_3 = (short)1430;
unsigned int var_4 = 914871208U;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-18435;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)8166;
signed char var_13 = (signed char)19;
short var_14 = (short)-7856;
unsigned int var_15 = 456836245U;
int var_16 = 704709899;
short var_17 = (short)-23390;
unsigned int var_18 = 295366777U;
_Bool var_19 = (_Bool)1;
short var_20 = (short)23672;
int var_21 = 51923112;
signed char var_22 = (signed char)-50;
long long int var_23 = -3569047060139244722LL;
unsigned int var_24 = 2347082823U;
signed char var_25 = (signed char)4;
short var_26 = (short)27904;
long long int var_27 = -3104628938010518215LL;
int var_28 = -33193291;
unsigned int var_29 = 633926408U;
unsigned int var_30 = 4192456482U;
_Bool var_31 = (_Bool)0;
unsigned int var_32 = 3114785604U;
_Bool var_33 = (_Bool)1;
_Bool var_34 = (_Bool)1;
short var_35 = (short)-16704;
_Bool var_36 = (_Bool)1;
short var_37 = (short)-16708;
short var_38 = (short)29210;
unsigned int arr_1 [11] ;
int arr_3 [11] ;
_Bool arr_4 [11] ;
signed char arr_6 [11] ;
signed char arr_7 [11] [11] ;
unsigned int arr_9 [11] [11] ;
_Bool arr_14 [11] [11] ;
short arr_20 [25] [25] ;
unsigned int arr_21 [25] ;
signed char arr_24 [25] [25] ;
_Bool arr_27 [25] [25] ;
_Bool arr_28 [25] [25] [25] [25] ;
signed char arr_29 [25] [25] [25] [25] ;
unsigned int arr_2 [11] [11] ;
short arr_12 [11] [11] ;
long long int arr_13 [11] [11] ;
int arr_19 [11] ;
unsigned int arr_22 [25] ;
unsigned int arr_23 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 754218026U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -215859753;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = 800197225U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = (short)27897;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = 3754088817U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_24 [i_0] [i_1] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_27 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 2759552144U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)7781 : (short)16889;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? -6898740173366573053LL : 8407708318004582918LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = 93272199;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = 1239783513U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = 1690426277U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
