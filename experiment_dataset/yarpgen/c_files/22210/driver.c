#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1144491770;
unsigned long long int var_1 = 8224101517355203796ULL;
signed char var_2 = (signed char)63;
signed char var_3 = (signed char)-26;
short var_4 = (short)17664;
short var_5 = (short)-18964;
int var_6 = -140738042;
int var_7 = -1631076034;
long long int var_8 = 3785870903592119512LL;
unsigned int var_9 = 4273350914U;
signed char var_10 = (signed char)55;
int zero = 0;
unsigned long long int var_11 = 12007802214947234541ULL;
signed char var_12 = (signed char)45;
long long int var_13 = 8216951184070706991LL;
short var_14 = (short)-30534;
int var_15 = -647491616;
signed char var_16 = (signed char)-78;
long long int var_17 = -8878827568289292635LL;
unsigned long long int var_18 = 9461662988772648673ULL;
unsigned short var_19 = (unsigned short)3998;
signed char var_20 = (signed char)-106;
long long int var_21 = 7554740459949771570LL;
signed char var_22 = (signed char)-18;
signed char var_23 = (signed char)37;
unsigned long long int var_24 = 4199358444088418865ULL;
unsigned char var_25 = (unsigned char)146;
signed char var_26 = (signed char)99;
unsigned char var_27 = (unsigned char)166;
long long int var_28 = 2836683710868741188LL;
_Bool var_29 = (_Bool)1;
short var_30 = (short)-6825;
int var_31 = 1108525152;
long long int var_32 = -7162727909996499730LL;
int var_33 = 1357686618;
short var_34 = (short)1836;
unsigned int var_35 = 3072816075U;
int arr_0 [13] ;
signed char arr_1 [13] ;
short arr_2 [13] [13] ;
_Bool arr_4 [10] ;
signed char arr_5 [18] ;
signed char arr_9 [18] [18] [18] ;
_Bool arr_12 [12] ;
unsigned int arr_13 [12] ;
unsigned long long int arr_14 [12] ;
unsigned char arr_15 [12] ;
int arr_16 [12] [12] [12] ;
int arr_19 [12] ;
short arr_25 [12] ;
unsigned short arr_33 [12] [12] [12] [12] [12] ;
long long int arr_26 [12] [12] ;
unsigned int arr_29 [12] [12] [12] ;
unsigned long long int arr_35 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -486141015;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-12346;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = 1040646246U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = 6127972434858816279ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = -14442393;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 1298368284 : -770783673;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = (short)-3719;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned short)35151 : (unsigned short)35282;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? 6342935007958363584LL : -8415507441426039228LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2226077352U : 2339634611U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 2558216621742528711ULL : 3336141144797102497ULL;
}

void checksum() {
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
