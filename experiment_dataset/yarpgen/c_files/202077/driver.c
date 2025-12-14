#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -491737754;
long long int var_1 = 5211925415833770443LL;
int var_2 = -826258279;
unsigned char var_3 = (unsigned char)166;
unsigned char var_5 = (unsigned char)54;
unsigned int var_6 = 1399619639U;
unsigned int var_7 = 2105485034U;
int var_8 = 584436455;
unsigned short var_9 = (unsigned short)18957;
int var_10 = -739994462;
signed char var_11 = (signed char)-110;
int var_12 = 631884806;
int zero = 0;
unsigned int var_13 = 2234830684U;
unsigned int var_14 = 3212958406U;
signed char var_15 = (signed char)94;
unsigned short var_16 = (unsigned short)53812;
unsigned int var_17 = 1139837902U;
signed char var_18 = (signed char)-106;
int var_19 = -616797559;
unsigned int var_20 = 2032607329U;
signed char var_21 = (signed char)-84;
unsigned char var_22 = (unsigned char)244;
signed char var_23 = (signed char)-80;
long long int var_24 = -410685578384125358LL;
signed char var_25 = (signed char)-77;
int var_26 = 89175591;
unsigned int var_27 = 2774658386U;
unsigned int var_28 = 2886059983U;
int var_29 = 383287807;
unsigned int var_30 = 3563396699U;
unsigned char arr_0 [10] ;
unsigned short arr_2 [10] ;
unsigned int arr_4 [10] ;
unsigned int arr_5 [10] ;
unsigned char arr_6 [10] [10] ;
signed char arr_8 [10] [10] [10] [10] ;
long long int arr_10 [10] [10] [10] ;
unsigned int arr_17 [12] ;
unsigned short arr_18 [12] [12] ;
unsigned long long int arr_19 [12] ;
unsigned char arr_9 [10] [10] [10] ;
unsigned int arr_14 [10] [10] ;
unsigned int arr_20 [12] ;
unsigned int arr_24 [12] [12] ;
unsigned int arr_25 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)53218;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 370746181U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 3701171244U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)125 : (signed char)-89;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 5077919668855151356LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = 796745910U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)1241;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = 12157160673308176578ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)18 : (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = 3179892037U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = 16627563U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_24 [i_0] [i_1] = 3593322195U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = 3198278356U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
