#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)77;
unsigned char var_1 = (unsigned char)125;
unsigned long long int var_2 = 9733900079249069753ULL;
signed char var_3 = (signed char)99;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)28319;
unsigned char var_6 = (unsigned char)117;
unsigned long long int var_7 = 5533823317383115287ULL;
unsigned int var_8 = 3052188991U;
short var_11 = (short)-1171;
unsigned char var_13 = (unsigned char)16;
unsigned char var_14 = (unsigned char)162;
unsigned char var_16 = (unsigned char)221;
int zero = 0;
unsigned int var_17 = 3050700756U;
short var_18 = (short)-24120;
signed char var_19 = (signed char)102;
unsigned char var_20 = (unsigned char)43;
unsigned short var_21 = (unsigned short)23078;
unsigned int var_22 = 2990549402U;
unsigned int var_23 = 3226899604U;
unsigned char var_24 = (unsigned char)181;
unsigned char var_25 = (unsigned char)107;
unsigned long long int var_26 = 5546255693669433376ULL;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 868519616U;
_Bool var_29 = (_Bool)1;
unsigned int var_30 = 3459594167U;
unsigned long long int var_31 = 5402564605244518217ULL;
unsigned char var_32 = (unsigned char)77;
unsigned int var_33 = 3019615022U;
_Bool var_34 = (_Bool)1;
_Bool var_35 = (_Bool)1;
unsigned char var_36 = (unsigned char)192;
unsigned short var_37 = (unsigned short)37435;
_Bool var_38 = (_Bool)0;
signed char var_39 = (signed char)61;
unsigned int var_40 = 1795405019U;
signed char var_41 = (signed char)30;
_Bool var_42 = (_Bool)1;
unsigned char arr_0 [22] ;
unsigned int arr_1 [22] ;
unsigned char arr_2 [22] ;
long long int arr_4 [18] ;
signed char arr_7 [18] ;
signed char arr_8 [18] [18] [18] ;
short arr_10 [18] [18] [18] ;
signed char arr_11 [18] [18] [18] [18] ;
_Bool arr_13 [18] [18] [18] [18] ;
signed char arr_14 [18] [18] ;
unsigned int arr_15 [18] [18] [18] [18] [18] [18] ;
unsigned char arr_16 [18] [18] [18] ;
unsigned int arr_18 [18] ;
unsigned char arr_21 [18] [18] ;
short arr_29 [18] [18] [18] ;
unsigned long long int arr_17 [18] [18] [18] [18] [18] [18] [18] ;
unsigned char arr_25 [18] [18] ;
unsigned int arr_26 [18] ;
unsigned int arr_30 [18] [18] ;
unsigned long long int arr_42 [12] ;
unsigned int arr_43 [12] ;
signed char arr_44 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 762926512U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -3614294964030498039LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)6908 : (short)8168;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)68 : (signed char)-31;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2079803268U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)3 : (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = 1990061785U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (short)6053;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? 2913155891975169162ULL : 3442770187704351793ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_25 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)210 : (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_26 [i_0] = 3119783640U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_30 [i_0] [i_1] = 4157052261U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_42 [i_0] = 15112611875408056293ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_43 [i_0] = 2327509180U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_44 [i_0] [i_1] = (signed char)114;
}

void checksum() {
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
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
