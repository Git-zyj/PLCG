#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)65;
signed char var_3 = (signed char)-54;
unsigned char var_4 = (unsigned char)152;
unsigned char var_8 = (unsigned char)142;
int var_9 = 287771929;
int var_12 = 1336397734;
int zero = 0;
unsigned char var_13 = (unsigned char)4;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-11473;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)35;
unsigned char var_18 = (unsigned char)250;
long long int var_19 = -8206804040185685810LL;
unsigned short var_20 = (unsigned short)20694;
unsigned int var_21 = 1730972061U;
signed char var_22 = (signed char)-76;
unsigned char var_23 = (unsigned char)150;
short var_24 = (short)28968;
unsigned short var_25 = (unsigned short)31373;
unsigned char var_26 = (unsigned char)242;
short var_27 = (short)2806;
short var_28 = (short)1160;
unsigned short var_29 = (unsigned short)61196;
short var_30 = (short)-8322;
long long int var_31 = 914549111033006485LL;
short var_32 = (short)19523;
int var_33 = -1392280801;
unsigned char var_34 = (unsigned char)241;
unsigned short var_35 = (unsigned short)34662;
short var_36 = (short)8884;
int var_37 = 99740734;
unsigned char arr_0 [14] ;
unsigned char arr_1 [14] ;
unsigned short arr_2 [14] ;
unsigned short arr_3 [14] ;
long long int arr_4 [18] ;
long long int arr_5 [18] [18] ;
unsigned char arr_8 [19] [19] ;
unsigned short arr_9 [19] [19] ;
_Bool arr_16 [12] [12] [12] ;
short arr_18 [12] [12] [12] ;
unsigned short arr_22 [12] [12] ;
long long int arr_34 [24] ;
unsigned char arr_36 [24] [24] [24] ;
short arr_38 [24] [24] ;
short arr_40 [24] [24] ;
unsigned char arr_42 [24] ;
long long int arr_45 [23] [23] ;
unsigned char arr_10 [19] ;
short arr_17 [12] ;
short arr_25 [12] [12] ;
unsigned char arr_39 [24] ;
signed char arr_44 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)18939;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)29514;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -1070015098086412114LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 5120539814444336258LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)9495;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (short)-29078;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)56183;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_34 [i_0] = -6487295722048196725LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_38 [i_0] [i_1] = (short)-12186;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_40 [i_0] [i_1] = (short)-14064;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_42 [i_0] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_45 [i_0] [i_1] = -993407471809371980LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)143 : (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (short)14878;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_25 [i_0] [i_1] = (short)1296;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_39 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_44 [i_0] = (signed char)43;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_44 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
