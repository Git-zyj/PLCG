#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)65;
unsigned char var_1 = (unsigned char)72;
unsigned int var_2 = 2352919108U;
short var_3 = (short)-4032;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3081259078U;
short var_6 = (short)21953;
long long int var_10 = -5801668693554134432LL;
unsigned int var_12 = 2027854474U;
int zero = 0;
short var_14 = (short)14889;
unsigned int var_15 = 3485494370U;
short var_16 = (short)-22762;
short var_17 = (short)17176;
short var_18 = (short)-31970;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)40703;
long long int var_21 = -4580021615953155654LL;
unsigned short var_22 = (unsigned short)64501;
short var_23 = (short)25628;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)107;
long long int var_26 = 1194848323764232607LL;
unsigned char var_27 = (unsigned char)75;
short var_28 = (short)-6801;
long long int var_29 = 9132181780218095247LL;
unsigned short var_30 = (unsigned short)8139;
short var_31 = (short)-9407;
unsigned short var_32 = (unsigned short)52644;
short var_33 = (short)-29964;
unsigned short var_34 = (unsigned short)5153;
unsigned short var_35 = (unsigned short)54812;
unsigned char var_36 = (unsigned char)94;
_Bool var_37 = (_Bool)0;
unsigned int var_38 = 1179000758U;
_Bool var_39 = (_Bool)0;
unsigned char var_40 = (unsigned char)250;
long long int var_41 = -9024404682675219031LL;
unsigned short arr_0 [19] [19] ;
_Bool arr_2 [19] ;
unsigned int arr_3 [19] ;
unsigned short arr_4 [19] [19] ;
unsigned char arr_5 [19] [19] [19] ;
long long int arr_6 [19] [19] [19] ;
unsigned char arr_8 [19] [19] [19] ;
short arr_11 [19] [19] [19] [19] [19] [19] ;
unsigned char arr_14 [19] [19] [19] [19] [19] ;
_Bool arr_19 [19] [19] [19] [19] ;
short arr_23 [19] [19] ;
short arr_27 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)30239;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1906545461U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)20597;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -5595035646015423747LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-3528;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)186 : (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_23 [i_0] [i_1] = (short)24843;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = (short)17380;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
