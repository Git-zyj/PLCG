#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6111;
_Bool var_3 = (_Bool)1;
long long int var_4 = 2086622615747757090LL;
unsigned short var_6 = (unsigned short)26272;
unsigned long long int var_7 = 1856374133977426415ULL;
short var_8 = (short)-16893;
unsigned short var_9 = (unsigned short)18097;
unsigned short var_10 = (unsigned short)14504;
unsigned short var_11 = (unsigned short)6640;
signed char var_12 = (signed char)106;
int var_14 = -1585724702;
int zero = 0;
int var_15 = 2073174125;
short var_16 = (short)9822;
short var_17 = (short)-25723;
short var_18 = (short)2347;
unsigned short var_19 = (unsigned short)20384;
signed char var_20 = (signed char)65;
short var_21 = (short)6495;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 10754529152442961146ULL;
unsigned long long int var_24 = 7224637287310209880ULL;
int var_25 = 1036846649;
short var_26 = (short)-9391;
short var_27 = (short)17027;
long long int var_28 = 1183932493977386676LL;
short var_29 = (short)-32671;
long long int var_30 = -73394359199672995LL;
short var_31 = (short)2069;
unsigned short var_32 = (unsigned short)1149;
_Bool var_33 = (_Bool)0;
_Bool arr_0 [16] ;
long long int arr_1 [16] ;
long long int arr_2 [16] ;
signed char arr_3 [16] ;
int arr_6 [16] [16] [16] ;
unsigned short arr_7 [16] [16] [16] ;
unsigned short arr_10 [12] ;
unsigned long long int arr_13 [12] [12] [12] ;
short arr_14 [12] [12] [12] ;
_Bool arr_18 [12] [12] ;
short arr_23 [16] ;
unsigned long long int arr_26 [12] ;
long long int arr_4 [16] [16] ;
int arr_9 [16] [16] [16] [16] ;
int arr_24 [16] ;
int arr_30 [12] ;
unsigned long long int arr_33 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -3250923910414100197LL : -8932663816130374832LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 9173340781632781663LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-113 : (signed char)-42;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 847807991;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)49636 : (unsigned short)25939;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (unsigned short)52644;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 4879042160737902908ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-13712 : (short)12613;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (short)31652;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_26 [i_0] = 12774493947689284057ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 4076214087954869333LL : 163162804538511041LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1547544545 : -1746351897;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = -2066567431;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? 956175833 : 1003667721;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_33 [i_0] [i_1] = (i_0 % 2 == 0) ? 15739943167615796925ULL : 7904528407774397888ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
