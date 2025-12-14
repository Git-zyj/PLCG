#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14421;
unsigned long long int var_2 = 15039203662381463089ULL;
unsigned int var_3 = 315743174U;
unsigned int var_4 = 1638703557U;
unsigned long long int var_6 = 7433467128142452159ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)37388;
unsigned long long int var_13 = 1360614748789801982ULL;
int zero = 0;
long long int var_14 = -5020549497934984404LL;
unsigned char var_15 = (unsigned char)82;
unsigned char var_16 = (unsigned char)76;
short var_17 = (short)536;
int var_18 = 892985764;
unsigned short var_19 = (unsigned short)46947;
short var_20 = (short)29345;
unsigned int var_21 = 1811865629U;
long long int var_22 = 2343640498624717442LL;
int var_23 = -254620852;
unsigned long long int var_24 = 4986544106872863611ULL;
unsigned int var_25 = 923153791U;
signed char var_26 = (signed char)-34;
unsigned char var_27 = (unsigned char)227;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 17958580178041526273ULL;
unsigned int arr_0 [19] [19] ;
_Bool arr_1 [19] [19] ;
_Bool arr_2 [19] ;
unsigned int arr_3 [19] [19] [19] ;
short arr_4 [19] ;
int arr_5 [19] [19] ;
unsigned char arr_8 [19] [19] ;
unsigned long long int arr_18 [13] [13] [13] [13] ;
signed char arr_21 [22] ;
long long int arr_22 [22] ;
unsigned int arr_26 [12] ;
unsigned int arr_12 [19] [19] [19] ;
_Bool arr_20 [13] [13] ;
long long int arr_23 [22] ;
unsigned char arr_27 [12] [12] ;
unsigned long long int arr_28 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 3989107485U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2975326026U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)-25281;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 2009574618;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 9107058667473589369ULL : 12847276899105835210ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = -3418164173908581022LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 2260277806U : 2633349550U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2135926362U : 334054225U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_20 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = 4871966241591362468LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)45 : (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 12573452455422546346ULL : 5957686896327232205ULL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
