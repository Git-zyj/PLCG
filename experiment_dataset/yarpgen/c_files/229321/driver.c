#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2668540595U;
unsigned short var_1 = (unsigned short)56613;
int var_4 = 1226630943;
unsigned char var_5 = (unsigned char)255;
unsigned int var_6 = 2257245164U;
long long int var_8 = -3201804532215043344LL;
unsigned long long int var_9 = 9177065423698319015ULL;
int zero = 0;
unsigned long long int var_11 = 8257554228534210848ULL;
unsigned short var_12 = (unsigned short)31643;
long long int var_13 = 434718974523770985LL;
unsigned char var_14 = (unsigned char)178;
unsigned int var_15 = 3031710717U;
unsigned char var_16 = (unsigned char)129;
unsigned int var_17 = 3344533109U;
unsigned char var_18 = (unsigned char)235;
long long int var_19 = -3830654412315978850LL;
unsigned char var_20 = (unsigned char)120;
int var_21 = 1329133688;
long long int var_22 = -3490710645541247951LL;
long long int var_23 = 3733837631963497348LL;
unsigned int var_24 = 179025327U;
unsigned int var_25 = 1595360582U;
long long int var_26 = -3386136079711344928LL;
unsigned int var_27 = 3055433017U;
long long int var_28 = 1654117219134593328LL;
unsigned short var_29 = (unsigned short)8363;
_Bool var_30 = (_Bool)0;
signed char var_31 = (signed char)-89;
int var_32 = -1970139218;
long long int var_33 = 8775986930539636027LL;
unsigned short var_34 = (unsigned short)6352;
signed char var_35 = (signed char)-41;
unsigned short var_36 = (unsigned short)38283;
unsigned int var_37 = 2545654418U;
long long int arr_0 [12] [12] ;
unsigned long long int arr_1 [12] ;
int arr_2 [13] ;
_Bool arr_6 [23] ;
unsigned int arr_7 [23] ;
int arr_8 [23] [23] [23] ;
unsigned int arr_9 [23] [23] ;
short arr_11 [23] [23] [23] [23] ;
int arr_13 [23] ;
unsigned char arr_14 [23] [23] [23] ;
unsigned long long int arr_17 [23] [23] [23] ;
short arr_18 [23] [23] [23] ;
long long int arr_20 [23] [23] [23] ;
unsigned short arr_23 [23] [23] [23] ;
unsigned char arr_25 [23] [23] [23] ;
int arr_26 [23] [23] [23] ;
long long int arr_29 [23] [23] ;
unsigned short arr_31 [14] ;
unsigned int arr_33 [14] [14] [14] ;
long long int arr_35 [14] [14] [14] ;
unsigned char arr_15 [23] ;
unsigned char arr_16 [23] ;
unsigned long long int arr_22 [23] ;
int arr_27 [23] [23] [23] ;
long long int arr_36 [14] ;
signed char arr_40 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -8777223003713524853LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 6918083358955168046ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -91507880;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 4134397073U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 640952956;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 1077247452U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)27563;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = -1290123999;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 16948359511916299082ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (short)30388;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 4118199107956268272LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (unsigned short)2668;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = -1916234011;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_29 [i_0] [i_1] = -3972322371682704632LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_31 [i_0] = (unsigned short)28059;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 2910228560U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = -6519463933345387553LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = 15714758497809175937ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = -1403600518;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_36 [i_0] = 7510882373388790735LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_40 [i_0] = (signed char)-113;
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_40 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
