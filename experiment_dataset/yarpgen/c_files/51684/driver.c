#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -176146469;
long long int var_2 = -1754984779158328564LL;
unsigned long long int var_3 = 10067956526460145461ULL;
unsigned short var_4 = (unsigned short)50817;
short var_5 = (short)-28854;
unsigned long long int var_6 = 7121950729483102543ULL;
unsigned short var_7 = (unsigned short)20905;
short var_10 = (short)-16697;
_Bool var_12 = (_Bool)0;
int var_14 = -291426300;
_Bool var_15 = (_Bool)0;
long long int var_16 = -756567051154564098LL;
int zero = 0;
unsigned short var_17 = (unsigned short)56430;
unsigned long long int var_18 = 13553105924783824452ULL;
unsigned int var_19 = 320429388U;
unsigned short var_20 = (unsigned short)34698;
short var_21 = (short)8873;
long long int var_22 = -8452870008649819547LL;
unsigned short var_23 = (unsigned short)33030;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)17560;
short var_26 = (short)-29033;
unsigned long long int var_27 = 4470176349882950982ULL;
signed char var_28 = (signed char)-85;
long long int var_29 = 2632629007174149079LL;
signed char var_30 = (signed char)51;
_Bool var_31 = (_Bool)1;
short var_32 = (short)-1921;
int var_33 = -828656465;
int arr_0 [22] [22] ;
unsigned int arr_1 [22] ;
unsigned int arr_4 [22] ;
int arr_6 [22] [22] [22] [22] ;
unsigned short arr_9 [22] [22] [22] ;
unsigned short arr_10 [22] ;
long long int arr_11 [22] ;
unsigned short arr_12 [22] ;
long long int arr_13 [22] ;
long long int arr_16 [22] [22] [22] [22] ;
_Bool arr_17 [22] [22] [22] ;
int arr_18 [24] ;
unsigned short arr_19 [24] [24] ;
_Bool arr_21 [24] [24] [24] ;
_Bool arr_23 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 983327786 : 155391073;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1488758949U : 3205506920U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1533293295U : 308354094U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 644809935 : 66147723;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)14751 : (unsigned short)17960;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (unsigned short)29654;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 4142138705227314610LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (unsigned short)7712;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 8941890975186164602LL : -1860755067507188095LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -5326185172544852539LL : -9007726344759522475LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? -751375903 : 5730731;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)19441 : (unsigned short)63860;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
