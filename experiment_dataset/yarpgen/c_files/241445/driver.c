#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2598520906U;
unsigned int var_3 = 3743001392U;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-31950;
unsigned int var_9 = 423032141U;
unsigned int var_11 = 2137050939U;
unsigned long long int var_12 = 14471769022782741374ULL;
unsigned int var_13 = 3103819409U;
unsigned char var_14 = (unsigned char)197;
unsigned int var_15 = 1172481996U;
unsigned int var_16 = 1214498342U;
unsigned int var_19 = 568700262U;
int zero = 0;
unsigned long long int var_20 = 1246549470831850310ULL;
unsigned short var_21 = (unsigned short)4670;
short var_22 = (short)-1667;
unsigned int var_23 = 1945686735U;
unsigned long long int var_24 = 2775738068506454195ULL;
short var_25 = (short)-29413;
unsigned long long int var_26 = 11280022695860031249ULL;
unsigned int var_27 = 726763112U;
unsigned int var_28 = 421475739U;
unsigned int var_29 = 2619142137U;
unsigned long long int var_30 = 5039852686965717106ULL;
unsigned int var_31 = 138266010U;
short var_32 = (short)8421;
unsigned int var_33 = 4232078543U;
unsigned long long int arr_0 [24] ;
unsigned int arr_1 [24] [24] ;
unsigned long long int arr_2 [24] ;
unsigned int arr_3 [24] [24] ;
unsigned long long int arr_4 [24] [24] [24] ;
unsigned int arr_5 [24] [24] [24] ;
unsigned long long int arr_7 [24] [24] ;
unsigned char arr_8 [24] [24] ;
short arr_9 [24] [24] [24] [24] ;
unsigned long long int arr_11 [24] [24] [24] [24] ;
_Bool arr_17 [10] [10] ;
_Bool arr_22 [10] ;
unsigned short arr_23 [10] [10] [10] ;
unsigned short arr_24 [10] ;
unsigned int arr_13 [24] [24] [24] [24] ;
unsigned long long int arr_14 [24] [24] [24] ;
unsigned long long int arr_15 [24] ;
unsigned int arr_18 [10] ;
unsigned short arr_19 [10] ;
short arr_20 [10] ;
unsigned int arr_31 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 6694137640615384810ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 167707532U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 14508044384319553510ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 139815084U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 13728305549601984196ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 767861384U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 12969550727391309039ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-90;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 1665778884784177473ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (unsigned short)9186;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = (unsigned short)1920;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 3882663192U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 17050658743678895412ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = 17406065382110207797ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = 446171523U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (unsigned short)14315;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (short)11863;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = 3964069155U;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
