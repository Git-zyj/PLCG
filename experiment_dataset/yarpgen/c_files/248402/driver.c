#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1751488489;
_Bool var_2 = (_Bool)1;
int var_3 = 1408361151;
unsigned long long int var_4 = 14178432150076825250ULL;
signed char var_5 = (signed char)91;
signed char var_6 = (signed char)20;
unsigned char var_7 = (unsigned char)78;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)25;
unsigned long long int var_11 = 5862518237974315845ULL;
int zero = 0;
unsigned long long int var_12 = 9162772281859244420ULL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)137;
int var_15 = -1506513261;
unsigned char var_16 = (unsigned char)234;
unsigned char var_17 = (unsigned char)136;
unsigned char var_18 = (unsigned char)182;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)93;
unsigned char var_21 = (unsigned char)172;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)6;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)-72;
_Bool var_26 = (_Bool)0;
unsigned char var_27 = (unsigned char)29;
_Bool var_28 = (_Bool)1;
int var_29 = -92791783;
int arr_0 [25] [25] ;
_Bool arr_1 [25] ;
unsigned char arr_2 [25] ;
int arr_3 [25] ;
unsigned char arr_4 [25] [25] ;
unsigned long long int arr_5 [25] [25] ;
int arr_7 [25] [25] [25] [25] ;
_Bool arr_9 [14] [14] ;
unsigned char arr_10 [14] ;
unsigned char arr_11 [24] ;
unsigned char arr_13 [24] [24] ;
unsigned char arr_14 [19] ;
int arr_15 [19] ;
int arr_17 [19] ;
unsigned char arr_20 [19] [19] [19] ;
unsigned short arr_22 [19] [19] [19] ;
_Bool arr_26 [19] ;
unsigned char arr_27 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 1485279960;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -992338988;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 3021791325826521034ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -1816062153;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = 1361182398;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = -1257855220;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)42365 : (unsigned short)9564;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)39;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
