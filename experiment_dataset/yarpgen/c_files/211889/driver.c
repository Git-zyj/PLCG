#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)40;
int var_1 = 250283573;
int var_2 = 1739240680;
unsigned short var_3 = (unsigned short)20418;
long long int var_4 = 2125527497852464509LL;
unsigned char var_5 = (unsigned char)69;
unsigned int var_6 = 1091262788U;
unsigned long long int var_7 = 6015995794454873020ULL;
unsigned char var_8 = (unsigned char)18;
signed char var_9 = (signed char)-8;
unsigned short var_10 = (unsigned short)37458;
int var_11 = -1422050628;
short var_12 = (short)6364;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)237;
long long int var_15 = 2711645583823028170LL;
unsigned long long int var_16 = 13952232134153410096ULL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 12925416965089599032ULL;
unsigned long long int var_19 = 17145862018550196625ULL;
int var_20 = 475870354;
signed char var_21 = (signed char)-84;
unsigned char var_22 = (unsigned char)191;
unsigned char var_23 = (unsigned char)11;
short var_24 = (short)-27341;
unsigned long long int var_25 = 17024126184291284739ULL;
signed char var_26 = (signed char)-94;
short var_27 = (short)19713;
unsigned int var_28 = 2138327885U;
signed char var_29 = (signed char)122;
_Bool var_30 = (_Bool)0;
long long int var_31 = -5871814327029049723LL;
unsigned short var_32 = (unsigned short)40121;
unsigned long long int var_33 = 18292671915898755470ULL;
signed char var_34 = (signed char)-43;
unsigned char var_35 = (unsigned char)50;
_Bool var_36 = (_Bool)1;
unsigned long long int var_37 = 11885355495969018332ULL;
unsigned long long int var_38 = 6309978357940891279ULL;
short var_39 = (short)-6061;
_Bool arr_0 [13] [13] ;
unsigned long long int arr_1 [13] [13] ;
unsigned long long int arr_2 [13] ;
int arr_3 [13] [13] [13] ;
unsigned long long int arr_4 [13] [13] ;
unsigned long long int arr_5 [13] ;
short arr_10 [18] ;
short arr_12 [15] [15] ;
signed char arr_14 [15] ;
signed char arr_16 [15] [15] [15] ;
unsigned short arr_30 [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_31 [15] [15] [15] ;
short arr_32 [15] [15] [15] [15] [15] ;
short arr_35 [19] ;
unsigned long long int arr_36 [19] ;
unsigned short arr_38 [19] [19] [19] ;
short arr_41 [19] [19] [19] ;
long long int arr_43 [19] [19] ;
int arr_6 [13] ;
unsigned char arr_7 [13] ;
signed char arr_8 [13] [13] ;
short arr_11 [18] ;
unsigned short arr_17 [15] [15] ;
unsigned long long int arr_21 [15] [15] ;
unsigned long long int arr_33 [15] [15] [15] ;
_Bool arr_40 [19] [19] ;
unsigned int arr_45 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 9338578017470871015ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 809774074704175595ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1652596315;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 4378332179117836532ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 4545595031473478814ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (short)-23852;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (short)29557;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)9733;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5261022645128710536ULL : 18141683936024191475ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)9290;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_35 [i_0] = (short)10383;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? 11089822721032603583ULL : 3914572310758127241ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (unsigned short)55551;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (short)24481;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_43 [i_0] [i_1] = -6610391940952964236LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -211523305;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (short)20883;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)30343 : (unsigned short)35637;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 2529685856943676988ULL : 3222703530029252508ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 6572100747527426252ULL : 16070125735569724355ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_40 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? 614998301U : 2976898000U;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_45 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
