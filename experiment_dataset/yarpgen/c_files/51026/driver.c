#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14947;
int var_2 = 1486851333;
unsigned long long int var_3 = 17303817327508959135ULL;
unsigned long long int var_4 = 6021954071540775722ULL;
unsigned long long int var_5 = 7148057234139321092ULL;
short var_7 = (short)-27548;
short var_8 = (short)-20080;
long long int var_9 = -1320751012490439674LL;
short var_10 = (short)-18365;
unsigned long long int var_11 = 10295641039299861825ULL;
long long int var_12 = -4791466961714014881LL;
long long int var_13 = 4545913669453514503LL;
int zero = 0;
short var_15 = (short)-25999;
short var_16 = (short)-3256;
long long int var_17 = -1164595589466753187LL;
short var_18 = (short)-32730;
int var_19 = 1467355680;
short var_20 = (short)27174;
unsigned long long int var_21 = 16305461751900090554ULL;
long long int var_22 = 4733931596192943238LL;
short var_23 = (short)20384;
long long int var_24 = -1688761013293458931LL;
long long int arr_4 [14] [14] ;
long long int arr_5 [14] ;
unsigned long long int arr_8 [22] [22] ;
unsigned long long int arr_10 [22] [22] ;
short arr_12 [22] [22] [22] ;
long long int arr_14 [22] [22] ;
unsigned long long int arr_16 [22] [22] [22] ;
int arr_3 [12] ;
short arr_11 [22] ;
long long int arr_17 [22] ;
short arr_18 [22] ;
int arr_21 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = -5271499292240620060LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 1396466403541038662LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 3915842441081842981ULL : 3365128568357269968ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = 7734940998787330251ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)-15656;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 6796888439380483381LL : -4031811077629741302LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 13802834919584999405ULL : 5734628041826922619ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 2034398116;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)-12639 : (short)-13252;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 1287713439808657729LL : 5756552469525557102LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)-2161 : (short)-15313;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? -1900665173 : 414599393;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
