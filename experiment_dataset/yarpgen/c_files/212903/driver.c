#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)1058;
unsigned int var_5 = 2054280613U;
long long int var_10 = -2943722196980940136LL;
unsigned char var_17 = (unsigned char)226;
int zero = 0;
unsigned short var_18 = (unsigned short)5705;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)52075;
short var_21 = (short)19034;
int var_22 = -413735520;
signed char var_23 = (signed char)-118;
long long int var_24 = -4509386393978942902LL;
signed char var_25 = (signed char)-67;
unsigned short var_26 = (unsigned short)59422;
signed char var_27 = (signed char)-103;
unsigned short var_28 = (unsigned short)38643;
unsigned short var_29 = (unsigned short)37438;
long long int var_30 = 1810125957152961943LL;
unsigned short var_31 = (unsigned short)38796;
unsigned char var_32 = (unsigned char)254;
_Bool var_33 = (_Bool)1;
signed char var_34 = (signed char)-37;
_Bool var_35 = (_Bool)1;
_Bool var_36 = (_Bool)0;
signed char var_37 = (signed char)115;
signed char var_38 = (signed char)17;
unsigned short var_39 = (unsigned short)64371;
long long int var_40 = 4316602556438816711LL;
_Bool var_41 = (_Bool)0;
_Bool var_42 = (_Bool)1;
unsigned char arr_0 [24] [24] ;
unsigned int arr_4 [24] ;
unsigned char arr_5 [24] [24] [24] ;
signed char arr_7 [24] ;
short arr_8 [24] [24] [24] ;
unsigned short arr_9 [24] [24] [24] [24] ;
int arr_12 [23] ;
short arr_15 [23] ;
short arr_16 [23] [23] [23] ;
unsigned long long int arr_17 [23] [23] [23] [23] ;
signed char arr_18 [23] ;
short arr_19 [23] [23] [23] ;
unsigned short arr_21 [23] ;
int arr_23 [23] ;
unsigned short arr_25 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 441889526U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)29401 : (short)7287;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)9124 : (unsigned short)63424;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 1533191021;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (short)-30406 : (short)31360;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)8207 : (short)22178;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 5853394621826786280ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)50 : (signed char)-85;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (short)7757;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned short)48949 : (unsigned short)31610;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = 1655864397;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_25 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)34465 : (unsigned short)46468;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
