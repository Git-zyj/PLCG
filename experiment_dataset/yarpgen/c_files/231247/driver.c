#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -486808485;
unsigned int var_1 = 2121636397U;
int var_2 = 2066097258;
int var_3 = 1030958591;
_Bool var_4 = (_Bool)1;
int var_5 = -1946687015;
_Bool var_6 = (_Bool)1;
int var_7 = -1048210337;
signed char var_8 = (signed char)34;
short var_9 = (short)-4177;
short var_10 = (short)-29158;
unsigned char var_11 = (unsigned char)26;
short var_12 = (short)-30437;
short var_13 = (short)28145;
short var_14 = (short)15417;
unsigned int var_15 = 1005990695U;
unsigned char var_16 = (unsigned char)69;
int var_17 = -811215663;
unsigned char var_18 = (unsigned char)205;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)105;
int var_21 = 466305927;
unsigned int var_22 = 2649598910U;
unsigned int var_23 = 639120505U;
short var_24 = (short)19128;
long long int var_25 = 2133922535636151562LL;
unsigned int var_26 = 3926638190U;
unsigned long long int var_27 = 5626160238213032534ULL;
signed char var_28 = (signed char)-115;
unsigned long long int var_29 = 4319980022090332667ULL;
unsigned short var_30 = (unsigned short)8291;
unsigned char var_31 = (unsigned char)2;
unsigned int var_32 = 1423738302U;
unsigned short var_33 = (unsigned short)33421;
short var_34 = (short)-25675;
int var_35 = 1967362146;
_Bool var_36 = (_Bool)1;
long long int var_37 = 3566530373214379493LL;
signed char var_38 = (signed char)66;
_Bool arr_2 [12] [12] ;
unsigned short arr_5 [25] ;
long long int arr_7 [25] ;
_Bool arr_8 [25] ;
unsigned char arr_9 [25] ;
unsigned int arr_12 [25] [25] [25] [25] ;
unsigned int arr_13 [25] [25] [25] ;
short arr_15 [25] [25] [25] [25] ;
_Bool arr_16 [25] [25] [25] [25] ;
signed char arr_27 [24] ;
unsigned long long int arr_22 [12] [12] ;
unsigned int arr_26 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)37824;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -1836238486731751428LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 1837260674U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 453314121U : 1931320965U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)3275 : (short)-3099;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_22 [i_0] [i_1] = 850476964500515255ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_26 [i_0] [i_1] = 2004231205U;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
