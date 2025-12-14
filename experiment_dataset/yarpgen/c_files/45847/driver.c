#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
int var_3 = -38501902;
unsigned short var_4 = (unsigned short)54988;
unsigned long long int var_5 = 9235846140844140491ULL;
unsigned int var_6 = 2705909593U;
unsigned int var_7 = 1661034869U;
unsigned int var_8 = 2486453286U;
unsigned char var_9 = (unsigned char)119;
long long int var_10 = -2460750367090387843LL;
unsigned short var_11 = (unsigned short)55532;
int zero = 0;
unsigned short var_12 = (unsigned short)3245;
unsigned int var_13 = 2818024715U;
int var_14 = 24402702;
signed char var_15 = (signed char)13;
signed char var_16 = (signed char)-100;
short var_17 = (short)-12597;
unsigned int var_18 = 14060488U;
unsigned int var_19 = 4102458591U;
unsigned int var_20 = 3130748733U;
signed char var_21 = (signed char)-61;
short var_22 = (short)-19246;
long long int var_23 = -2362736347778720715LL;
unsigned long long int var_24 = 990648819224444126ULL;
unsigned char var_25 = (unsigned char)40;
unsigned short var_26 = (unsigned short)51787;
unsigned int var_27 = 3533549185U;
_Bool var_28 = (_Bool)0;
long long int var_29 = -58073827383595131LL;
unsigned char var_30 = (unsigned char)255;
unsigned short var_31 = (unsigned short)49825;
short var_32 = (short)-16685;
unsigned int var_33 = 210106601U;
long long int var_34 = 550436858581358900LL;
unsigned char var_35 = (unsigned char)154;
int var_36 = -1806603067;
_Bool var_37 = (_Bool)0;
int var_38 = -995374269;
long long int var_39 = -819189800269104297LL;
short var_40 = (short)-10222;
long long int var_41 = -8851096919777668810LL;
long long int var_42 = -7741901960587287523LL;
unsigned char var_43 = (unsigned char)20;
_Bool var_44 = (_Bool)0;
unsigned char var_45 = (unsigned char)198;
_Bool var_46 = (_Bool)0;
unsigned char var_47 = (unsigned char)140;
int var_48 = -791078641;
int var_49 = -743852655;
signed char var_50 = (signed char)-113;
unsigned char var_51 = (unsigned char)21;
unsigned char var_52 = (unsigned char)176;
unsigned char var_53 = (unsigned char)41;
unsigned long long int var_54 = 11655448084628633585ULL;
long long int var_55 = 7269024556848804189LL;
short var_56 = (short)19767;
signed char arr_3 [10] ;
long long int arr_7 [20] ;
int arr_10 [20] [20] [20] ;
signed char arr_14 [20] [20] ;
unsigned char arr_15 [20] [20] [20] [20] [20] [20] ;
short arr_16 [20] [20] [20] [20] ;
_Bool arr_19 [20] [20] [20] [20] [20] ;
signed char arr_23 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -1682832755343887525LL : 7772967539973297269LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 564404615 : -149363896;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)110 : (signed char)8;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)10179 : (short)-22783;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)64 : (signed char)24;
}

void checksum() {
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
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
