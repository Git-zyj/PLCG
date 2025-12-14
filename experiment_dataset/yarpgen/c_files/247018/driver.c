#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16933228633441955206ULL;
short var_2 = (short)24016;
short var_3 = (short)-21826;
unsigned char var_5 = (unsigned char)80;
unsigned short var_7 = (unsigned short)24090;
unsigned char var_8 = (unsigned char)205;
short var_9 = (short)5194;
long long int var_10 = 3860465263575286576LL;
unsigned char var_11 = (unsigned char)158;
unsigned char var_12 = (unsigned char)234;
signed char var_13 = (signed char)121;
int zero = 0;
unsigned char var_14 = (unsigned char)12;
short var_15 = (short)-27218;
unsigned char var_16 = (unsigned char)63;
unsigned long long int var_17 = 14257000090261448317ULL;
_Bool var_18 = (_Bool)0;
long long int var_19 = -4018439186658924510LL;
unsigned char var_20 = (unsigned char)59;
int var_21 = 750787677;
unsigned long long int var_22 = 6611177315041384304ULL;
signed char var_23 = (signed char)112;
short var_24 = (short)12506;
signed char var_25 = (signed char)20;
unsigned short var_26 = (unsigned short)496;
unsigned int var_27 = 1655413696U;
long long int var_28 = 2292252589614750573LL;
unsigned long long int var_29 = 1452354341928373596ULL;
short var_30 = (short)-5514;
signed char var_31 = (signed char)41;
unsigned char var_32 = (unsigned char)54;
signed char var_33 = (signed char)46;
short var_34 = (short)625;
unsigned char var_35 = (unsigned char)95;
short var_36 = (short)-9154;
int var_37 = -1421921463;
unsigned char var_38 = (unsigned char)216;
unsigned short var_39 = (unsigned short)22447;
unsigned int var_40 = 1379268066U;
_Bool var_41 = (_Bool)0;
long long int var_42 = 5055555281226181674LL;
int var_43 = -2004867837;
signed char var_44 = (signed char)-18;
_Bool var_45 = (_Bool)0;
short var_46 = (short)1384;
signed char var_47 = (signed char)8;
unsigned char var_48 = (unsigned char)203;
signed char arr_0 [10] ;
unsigned short arr_4 [25] ;
short arr_5 [25] ;
unsigned char arr_9 [25] [25] [25] ;
int arr_12 [25] [25] [25] ;
int arr_13 [25] ;
unsigned long long int arr_14 [25] [25] [25] [25] [25] ;
unsigned short arr_16 [25] [25] [25] [25] ;
_Bool arr_19 [25] ;
unsigned long long int arr_21 [25] [25] ;
unsigned char arr_26 [25] [25] [25] [25] ;
_Bool arr_29 [25] [25] [25] [25] [25] ;
unsigned long long int arr_30 [25] ;
long long int arr_40 [25] [25] [25] [25] [25] [25] ;
_Bool arr_49 [25] ;
long long int arr_50 [25] [25] ;
long long int arr_8 [25] ;
unsigned char arr_42 [25] [25] [25] ;
signed char arr_51 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)21 : (signed char)82;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)41505;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)-12040;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -291142717;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = -274028526;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 14928003871425854669ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned short)49622;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_21 [i_0] [i_1] = 17679852699985366646ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)213 : (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_30 [i_0] = 15718110427916672969ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8342187968178793689LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_49 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_50 [i_0] [i_1] = (i_1 % 2 == 0) ? 2661034783610931212LL : 44626255268378751LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 7187709261667094913LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)192 : (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_51 [i_0] = (i_0 % 2 == 0) ? (signed char)-94 : (signed char)-122;
}

void checksum() {
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
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_51 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
