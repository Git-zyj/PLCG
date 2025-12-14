#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -426793406;
int var_1 = -1274596037;
unsigned char var_2 = (unsigned char)46;
unsigned short var_4 = (unsigned short)41400;
unsigned short var_6 = (unsigned short)59609;
unsigned char var_7 = (unsigned char)173;
signed char var_10 = (signed char)34;
int zero = 0;
int var_11 = 1333357466;
long long int var_12 = 2710093429167852221LL;
unsigned long long int var_13 = 1905109999319711029ULL;
unsigned long long int var_14 = 17003095681776015616ULL;
unsigned long long int var_15 = 629008285870274628ULL;
int var_16 = -1382611013;
unsigned short var_17 = (unsigned short)27511;
unsigned long long int var_18 = 16237853439468180826ULL;
unsigned long long int var_19 = 4822130695523519283ULL;
int var_20 = -393742880;
signed char var_21 = (signed char)100;
long long int var_22 = -9081821179411746160LL;
unsigned short var_23 = (unsigned short)40203;
unsigned long long int var_24 = 11522629350348353610ULL;
unsigned long long int var_25 = 954497168514938659ULL;
int var_26 = 698107691;
unsigned short var_27 = (unsigned short)38013;
int arr_0 [18] ;
_Bool arr_1 [18] [18] ;
signed char arr_2 [19] ;
unsigned long long int arr_3 [19] ;
unsigned char arr_6 [22] ;
long long int arr_8 [22] ;
unsigned short arr_10 [22] ;
unsigned short arr_12 [22] [22] [22] [22] ;
long long int arr_13 [22] [22] [22] ;
unsigned char arr_16 [22] [22] [22] ;
unsigned char arr_17 [22] [22] [22] [22] ;
unsigned short arr_18 [22] ;
unsigned short arr_4 [19] [19] ;
unsigned short arr_5 [19] ;
unsigned char arr_20 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -459051680;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 3512293222559560483ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1900155594950980439LL : 4381773215290109303LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (unsigned short)61599;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned short)48247;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -6838245607772613157LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)111 : (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)163 : (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned short)47403 : (unsigned short)44588;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)45762;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned short)42999;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)163 : (unsigned char)222;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
