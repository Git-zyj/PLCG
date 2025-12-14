#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
unsigned int var_1 = 1146516988U;
unsigned long long int var_3 = 14049451465657039834ULL;
unsigned char var_4 = (unsigned char)118;
signed char var_6 = (signed char)-56;
short var_7 = (short)-19958;
unsigned int var_8 = 1391750732U;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)135;
unsigned long long int var_13 = 9870413437564602783ULL;
unsigned char var_14 = (unsigned char)104;
unsigned short var_15 = (unsigned short)8505;
long long int var_16 = -3715837816281270840LL;
long long int var_17 = -6286689295762853080LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 2451035799U;
unsigned int var_20 = 3426032910U;
unsigned char var_21 = (unsigned char)156;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 2447489317559511784ULL;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)205;
long long int var_26 = -4146149958415950764LL;
unsigned char var_27 = (unsigned char)46;
long long int var_28 = -1924644951446979778LL;
long long int var_29 = 8873405645820800582LL;
unsigned int var_30 = 1203611391U;
unsigned char var_31 = (unsigned char)74;
int var_32 = -492615703;
unsigned int var_33 = 3801026839U;
unsigned int var_34 = 2001618224U;
int var_35 = 639641999;
_Bool var_36 = (_Bool)0;
_Bool arr_1 [11] ;
unsigned short arr_2 [11] ;
unsigned int arr_4 [11] ;
_Bool arr_5 [11] [11] ;
unsigned int arr_6 [11] [11] [11] ;
short arr_7 [11] [11] [11] ;
int arr_13 [11] [11] [11] [11] [11] [11] ;
int arr_14 [11] [11] [11] [11] [11] ;
int arr_18 [24] ;
long long int arr_20 [24] ;
signed char arr_23 [24] [24] ;
signed char arr_24 [24] [24] ;
unsigned char arr_26 [24] [24] ;
unsigned char arr_3 [11] ;
_Bool arr_21 [24] ;
unsigned long long int arr_22 [24] ;
unsigned char arr_27 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)47781;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1476043805U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1756843531U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)3773;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1630582381;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = -471426367;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = 1454153184;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = -6794657813153684374LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_23 [i_0] [i_1] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = 13851116043297440934ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned char)24 : (unsigned char)70;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
