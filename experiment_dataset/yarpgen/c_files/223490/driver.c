#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1330553319;
short var_1 = (short)13816;
signed char var_2 = (signed char)-34;
unsigned char var_4 = (unsigned char)175;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)146;
signed char var_12 = (signed char)29;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)-45;
unsigned long long int var_16 = 15417971953765841778ULL;
int var_17 = 759617885;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_20 = -1873106688749672655LL;
_Bool var_21 = (_Bool)0;
short var_22 = (short)764;
long long int var_23 = -4888085458672565626LL;
unsigned char var_24 = (unsigned char)194;
unsigned short var_25 = (unsigned short)11944;
_Bool var_26 = (_Bool)1;
unsigned char var_27 = (unsigned char)216;
short var_28 = (short)-15982;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)0;
_Bool var_31 = (_Bool)0;
_Bool var_32 = (_Bool)0;
int var_33 = 1024654587;
unsigned short var_34 = (unsigned short)13200;
unsigned char var_35 = (unsigned char)216;
_Bool var_36 = (_Bool)1;
unsigned char var_37 = (unsigned char)190;
signed char var_38 = (signed char)-104;
_Bool arr_0 [22] [22] ;
_Bool arr_1 [22] [22] ;
unsigned char arr_2 [22] ;
unsigned short arr_3 [22] ;
unsigned char arr_4 [22] ;
unsigned long long int arr_10 [14] ;
short arr_11 [14] [14] ;
signed char arr_12 [14] ;
long long int arr_14 [14] [14] ;
long long int arr_15 [14] ;
unsigned char arr_16 [14] [14] [14] [14] ;
long long int arr_22 [14] ;
short arr_24 [14] [14] [14] ;
unsigned long long int arr_25 [14] [14] ;
_Bool arr_9 [13] ;
unsigned char arr_19 [14] ;
_Bool arr_20 [14] [14] [14] [14] [14] [14] ;
int arr_21 [14] [14] [14] ;
unsigned short arr_30 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)52541;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 9170478212560249490ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)11095 : (short)16080;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)-100 : (signed char)67;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = -5455716328405941062LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = 6491287184664749780LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = 1846550086164749295LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)14920 : (short)31126;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_25 [i_0] [i_1] = 18375803142447988144ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned char)99 : (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1817659404 : 1138611302;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)1710 : (unsigned short)31347;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
