#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1009288459;
unsigned long long int var_2 = 13595307556834131985ULL;
long long int var_3 = -7548709536616476393LL;
unsigned int var_5 = 1183795292U;
unsigned char var_7 = (unsigned char)229;
unsigned long long int var_8 = 17660935072806784985ULL;
unsigned long long int var_9 = 15474601456218888336ULL;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)23;
short var_12 = (short)-26560;
unsigned int var_14 = 1174848836U;
unsigned char var_16 = (unsigned char)164;
unsigned int var_17 = 3453645585U;
int zero = 0;
signed char var_18 = (signed char)-109;
unsigned long long int var_19 = 13416525346127812394ULL;
unsigned long long int var_20 = 4497866270276326342ULL;
unsigned char var_21 = (unsigned char)27;
long long int var_22 = -758040350547906080LL;
short var_23 = (short)6169;
unsigned char var_24 = (unsigned char)16;
unsigned int var_25 = 1388308908U;
unsigned short var_26 = (unsigned short)10689;
short var_27 = (short)-4229;
unsigned char var_28 = (unsigned char)167;
_Bool var_29 = (_Bool)1;
long long int var_30 = 2845684763777981397LL;
_Bool var_31 = (_Bool)1;
unsigned short var_32 = (unsigned short)29287;
unsigned char var_33 = (unsigned char)78;
unsigned char var_34 = (unsigned char)184;
_Bool var_35 = (_Bool)0;
unsigned int var_36 = 3826381392U;
long long int arr_0 [21] ;
signed char arr_1 [21] [21] ;
unsigned long long int arr_3 [21] [21] [21] ;
unsigned int arr_6 [21] ;
unsigned int arr_8 [21] ;
unsigned long long int arr_13 [21] [21] [21] [21] ;
int arr_19 [21] [21] [21] ;
signed char arr_24 [21] [21] [21] [21] ;
unsigned char arr_26 [21] [21] [21] [21] [21] ;
short arr_34 [21] [21] ;
unsigned long long int arr_35 [25] ;
short arr_37 [25] ;
unsigned short arr_9 [21] ;
long long int arr_15 [21] [21] [21] [21] ;
unsigned char arr_16 [21] [21] [21] [21] ;
unsigned short arr_17 [21] ;
short arr_23 [21] ;
unsigned long long int arr_29 [21] [21] [21] [21] [21] [21] ;
signed char arr_30 [21] [21] [21] [21] ;
int arr_31 [21] [21] ;
unsigned long long int arr_38 [25] ;
long long int arr_39 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -8300167823274381258LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 5318095137354747941ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 2032398844U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 1065117977U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 2046075132141252983ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 611724320;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_34 [i_0] [i_1] = (short)-2250;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_35 [i_0] = 12878694393413540752ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_37 [i_0] = (short)-3517;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned short)46244;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = -7133762873698121012LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (unsigned short)23769;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = (short)3485;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 15952716855988840041ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_31 [i_0] [i_1] = 2065228651;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_38 [i_0] = 6944550353192843339ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_39 [i_0] = -3756242478758481556LL;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_39 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
