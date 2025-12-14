#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12693581753333894931ULL;
signed char var_5 = (signed char)-69;
signed char var_8 = (signed char)-24;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)40891;
unsigned short var_16 = (unsigned short)10835;
unsigned int var_17 = 3429335080U;
int zero = 0;
unsigned long long int var_18 = 8020038084050210102ULL;
unsigned long long int var_19 = 16409758663898586390ULL;
unsigned long long int var_20 = 16038749372172885070ULL;
int var_21 = -836594092;
unsigned short var_22 = (unsigned short)3848;
unsigned short var_23 = (unsigned short)21967;
int var_24 = -1970534574;
unsigned short var_25 = (unsigned short)60202;
unsigned char var_26 = (unsigned char)238;
long long int var_27 = -463236162798187922LL;
long long int var_28 = 3855689855405654171LL;
unsigned long long int var_29 = 13132046537056887822ULL;
unsigned short var_30 = (unsigned short)7036;
unsigned int var_31 = 1342967542U;
unsigned long long int var_32 = 4851189653011599729ULL;
unsigned long long int var_33 = 1770052202989816007ULL;
unsigned long long int arr_0 [24] ;
int arr_1 [24] ;
unsigned int arr_3 [24] ;
short arr_4 [24] ;
unsigned char arr_5 [24] [24] ;
int arr_6 [24] [24] [24] ;
long long int arr_7 [24] [24] [24] ;
unsigned long long int arr_11 [24] ;
_Bool arr_13 [24] [24] ;
short arr_18 [19] ;
signed char arr_26 [19] [19] [19] ;
signed char arr_27 [19] [19] [19] ;
long long int arr_34 [19] [19] [19] ;
signed char arr_37 [19] ;
unsigned short arr_8 [24] ;
unsigned short arr_16 [24] [24] [24] ;
int arr_28 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 132206913428210955ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 851394093;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 2184940528U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-4147;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1219590476;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -7044914829585419258LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 16336297840943993559ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (short)27678;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5765814068293409134LL : 6863724322233421126LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_37 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned short)59869;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned short)53262;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 1316369522;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
