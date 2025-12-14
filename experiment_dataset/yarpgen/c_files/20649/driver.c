#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 691149095;
short var_4 = (short)21034;
unsigned char var_5 = (unsigned char)62;
unsigned int var_6 = 2847317337U;
unsigned long long int var_7 = 14414885762420295662ULL;
unsigned char var_8 = (unsigned char)64;
unsigned long long int var_9 = 15370266233077234994ULL;
long long int var_13 = -7594211384807258669LL;
unsigned int var_14 = 2958556001U;
unsigned int var_15 = 3828754342U;
short var_16 = (short)-24542;
int zero = 0;
signed char var_17 = (signed char)-22;
unsigned char var_18 = (unsigned char)167;
short var_19 = (short)-6743;
unsigned int var_20 = 168718845U;
signed char var_21 = (signed char)-103;
unsigned long long int var_22 = 3781231385871631595ULL;
short var_23 = (short)22592;
long long int var_24 = -7083381024272450435LL;
unsigned long long int var_25 = 762774509493863486ULL;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)29757;
long long int var_28 = 720664794564242661LL;
short var_29 = (short)11840;
signed char var_30 = (signed char)-3;
unsigned char var_31 = (unsigned char)48;
long long int var_32 = 7228768500370451999LL;
short var_33 = (short)-11755;
unsigned short var_34 = (unsigned short)3865;
unsigned short var_35 = (unsigned short)45225;
long long int var_36 = 3921613590674642678LL;
short var_37 = (short)6550;
unsigned long long int var_38 = 4460529759819800471ULL;
_Bool var_39 = (_Bool)1;
unsigned long long int var_40 = 13877001842275592981ULL;
long long int var_41 = 1517788115613149518LL;
short var_42 = (short)27153;
signed char arr_4 [10] ;
unsigned char arr_7 [10] [10] ;
signed char arr_12 [15] ;
short arr_13 [15] [15] ;
unsigned int arr_14 [15] ;
unsigned char arr_15 [15] [15] [15] ;
short arr_16 [15] ;
unsigned int arr_19 [15] ;
unsigned long long int arr_28 [23] ;
short arr_31 [23] [23] ;
unsigned char arr_32 [23] [23] ;
_Bool arr_33 [23] [23] ;
short arr_35 [23] [23] [23] [23] ;
unsigned long long int arr_37 [23] ;
signed char arr_42 [23] ;
unsigned long long int arr_45 [23] ;
unsigned char arr_3 [10] ;
short arr_6 [10] ;
unsigned char arr_11 [10] [10] [10] ;
unsigned int arr_17 [15] ;
unsigned int arr_20 [15] ;
unsigned short arr_34 [23] ;
_Bool arr_39 [23] [23] [23] [23] ;
unsigned long long int arr_47 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)57 : (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-10690;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = 3542545750U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)72 : (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)-2519 : (short)27798;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = 601357226U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_28 [i_0] = 7982888165197356542ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_31 [i_0] [i_1] = (short)31363;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_32 [i_0] [i_1] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_33 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (short)-24293;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_37 [i_0] = 2247315772203195093ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? (signed char)73 : (signed char)-123;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_45 [i_0] = 11450719664576616042ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (short)5197;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)192 : (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 3017751155U : 2010665499U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = 2406999749U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_34 [i_0] = (unsigned short)19914;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_47 [i_0] = 14839518311482853003ULL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_47 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
