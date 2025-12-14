#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17864231687272607158ULL;
unsigned long long int var_1 = 8108652292618293156ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)14166;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)33285;
signed char var_8 = (signed char)-60;
unsigned char var_9 = (unsigned char)69;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 397709494966611655ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)16731;
unsigned short var_15 = (unsigned short)16360;
unsigned short var_16 = (unsigned short)45738;
signed char var_17 = (signed char)19;
unsigned short var_18 = (unsigned short)64702;
unsigned short var_19 = (unsigned short)47858;
signed char var_20 = (signed char)-107;
unsigned char var_21 = (unsigned char)239;
unsigned short var_22 = (unsigned short)49622;
int var_23 = 888237509;
unsigned short var_24 = (unsigned short)56193;
long long int var_25 = -4894361975725545304LL;
unsigned char var_26 = (unsigned char)154;
long long int var_27 = -3817786286261794666LL;
int var_28 = -361733581;
_Bool var_29 = (_Bool)0;
long long int var_30 = -4540713758066067119LL;
unsigned int var_31 = 4276877449U;
unsigned int var_32 = 752970924U;
unsigned short var_33 = (unsigned short)31390;
unsigned char var_34 = (unsigned char)29;
unsigned long long int var_35 = 9315454739280429018ULL;
short arr_0 [16] ;
long long int arr_3 [16] ;
unsigned short arr_4 [16] [16] [16] ;
unsigned long long int arr_13 [16] [16] [16] [16] [16] ;
unsigned int arr_15 [16] [16] ;
unsigned int arr_17 [21] ;
short arr_18 [21] [21] ;
unsigned short arr_19 [21] ;
short arr_20 [21] ;
int arr_21 [22] [22] ;
unsigned short arr_22 [22] ;
_Bool arr_23 [22] ;
signed char arr_24 [22] ;
unsigned char arr_25 [22] ;
_Bool arr_28 [25] ;
long long int arr_29 [25] ;
short arr_31 [25] [25] [25] ;
unsigned short arr_33 [25] [25] [25] [25] [25] [25] ;
unsigned char arr_39 [25] ;
unsigned short arr_16 [16] [16] [16] [16] ;
unsigned char arr_35 [25] [25] [25] [25] [25] ;
unsigned int arr_43 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)10474;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 5792910512582695420LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)52495;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 3251792763179318201ULL : 9585763982501075255ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = 2057311805U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 1163999023U : 3763717256U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)501 : (short)27514;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = (unsigned short)11221;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (short)16333;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = 1703897417;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (unsigned short)64048;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = -8526110591961445279LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (short)-22895;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)46340;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? (unsigned char)210 : (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned short)62213;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? 4217473234U : 2072236888U;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_43 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
