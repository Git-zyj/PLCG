#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9790664554660819263ULL;
unsigned short var_1 = (unsigned short)19206;
unsigned short var_2 = (unsigned short)11106;
_Bool var_3 = (_Bool)0;
short var_4 = (short)889;
unsigned int var_5 = 1467008445U;
unsigned int var_6 = 2968329420U;
unsigned long long int var_7 = 12670415421511728807ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)8609;
unsigned long long int var_11 = 17793490204782384604ULL;
unsigned int var_12 = 1630923499U;
unsigned short var_14 = (unsigned short)13552;
unsigned short var_15 = (unsigned short)37283;
unsigned short var_16 = (unsigned short)56505;
unsigned short var_17 = (unsigned short)62722;
short var_18 = (short)20989;
int zero = 0;
unsigned short var_19 = (unsigned short)55550;
unsigned int var_20 = 133721527U;
unsigned int var_21 = 3593071838U;
unsigned int var_22 = 1757213030U;
unsigned short var_23 = (unsigned short)39270;
unsigned char var_24 = (unsigned char)22;
unsigned int var_25 = 3355570333U;
short var_26 = (short)-9794;
unsigned short var_27 = (unsigned short)16311;
unsigned short var_28 = (unsigned short)58843;
unsigned int var_29 = 1274283377U;
signed char var_30 = (signed char)76;
unsigned char var_31 = (unsigned char)248;
unsigned int var_32 = 242582171U;
short var_33 = (short)-4055;
unsigned short var_34 = (unsigned short)51048;
unsigned int var_35 = 2767438108U;
signed char var_36 = (signed char)81;
short var_37 = (short)-18524;
short var_38 = (short)-29875;
_Bool var_39 = (_Bool)1;
unsigned int var_40 = 3871220711U;
unsigned int var_41 = 2090934390U;
unsigned int arr_0 [22] ;
signed char arr_2 [22] [22] ;
unsigned char arr_3 [22] [22] [22] ;
unsigned int arr_4 [22] [22] [22] ;
unsigned short arr_7 [22] ;
unsigned int arr_8 [22] [22] [22] ;
unsigned long long int arr_13 [19] ;
short arr_14 [19] ;
signed char arr_16 [19] [19] [19] ;
int arr_17 [19] [19] [19] ;
signed char arr_18 [19] [19] ;
unsigned int arr_21 [19] [19] [19] [19] ;
unsigned int arr_32 [15] ;
short arr_38 [15] [15] [15] [15] ;
unsigned char arr_6 [22] ;
_Bool arr_9 [22] [22] ;
signed char arr_10 [22] ;
_Bool arr_11 [22] [22] ;
short arr_26 [19] [19] [19] [19] ;
signed char arr_27 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1711767818U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1331531154U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned short)6258;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3149846364U : 1730974140U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 10893075027600362514ULL : 6244421923259735860ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)-20062 : (short)-11875;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-34 : (signed char)50;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1004174376 : 834265505;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2331114033U : 3996460501U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_32 [i_0] = 3815163166U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (short)-8682;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-16313 : (short)-26170;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)(-127 - 1) : (signed char)92;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
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
