#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3464410122570458387LL;
unsigned char var_1 = (unsigned char)212;
unsigned int var_2 = 2387302609U;
long long int var_3 = -8932372302491677254LL;
unsigned char var_4 = (unsigned char)192;
unsigned int var_5 = 4275963323U;
unsigned char var_6 = (unsigned char)212;
unsigned char var_7 = (unsigned char)60;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)75;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 3450766195U;
long long int var_13 = -4405916246576319876LL;
unsigned char var_14 = (unsigned char)21;
unsigned int var_15 = 580474184U;
unsigned int var_16 = 3493870734U;
unsigned char var_17 = (unsigned char)19;
long long int var_18 = 8336886305243828262LL;
unsigned int var_19 = 1671755187U;
unsigned char var_20 = (unsigned char)136;
unsigned char var_21 = (unsigned char)150;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)50;
long long int var_24 = -6611505720667669561LL;
unsigned long long int var_25 = 1626202765850876166ULL;
unsigned char var_26 = (unsigned char)60;
_Bool var_27 = (_Bool)0;
unsigned char var_28 = (unsigned char)52;
unsigned char var_29 = (unsigned char)27;
long long int var_30 = -1588455465121027203LL;
unsigned int var_31 = 2087852135U;
_Bool var_32 = (_Bool)0;
unsigned int var_33 = 3588970171U;
unsigned char var_34 = (unsigned char)121;
unsigned char var_35 = (unsigned char)62;
_Bool var_36 = (_Bool)1;
long long int arr_1 [25] [25] ;
unsigned int arr_2 [25] ;
unsigned char arr_4 [19] ;
unsigned long long int arr_5 [19] ;
_Bool arr_9 [19] [19] [19] ;
long long int arr_10 [19] [19] ;
unsigned char arr_12 [19] [19] [19] ;
unsigned int arr_14 [19] [19] [19] [19] ;
_Bool arr_18 [19] [19] ;
unsigned char arr_20 [19] ;
unsigned long long int arr_21 [19] [19] [19] ;
unsigned int arr_22 [19] [19] ;
unsigned char arr_25 [19] ;
unsigned long long int arr_30 [19] [19] [19] [19] ;
long long int arr_31 [19] ;
unsigned long long int arr_34 [19] [19] [19] [19] ;
unsigned int arr_3 [25] [25] ;
unsigned char arr_6 [19] ;
_Bool arr_11 [19] [19] [19] ;
unsigned long long int arr_16 [19] [19] [19] [19] ;
_Bool arr_29 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 7597023448791068212LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1022795425U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 14891278224663350007ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 6075248253414470732LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 4150201892U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 10489910614630853739ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_22 [i_0] [i_1] = 1097169779U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (unsigned char)146 : (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 2660494608478622793ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = -7163476176298623237LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = 8495531636498544481ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 1795286488U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 14367292206893700346ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
