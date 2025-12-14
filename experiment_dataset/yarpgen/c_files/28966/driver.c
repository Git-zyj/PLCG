#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3733;
long long int var_2 = -7766464421410756827LL;
unsigned char var_3 = (unsigned char)150;
signed char var_4 = (signed char)79;
signed char var_5 = (signed char)-94;
unsigned int var_6 = 3488339048U;
unsigned int var_7 = 3945725204U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1051323250U;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-59;
unsigned short var_12 = (unsigned short)48413;
signed char var_13 = (signed char)83;
unsigned short var_14 = (unsigned short)6863;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)117;
int var_17 = 267145268;
int zero = 0;
unsigned int var_18 = 3002879692U;
int var_19 = 1789745107;
unsigned short var_20 = (unsigned short)38997;
unsigned char var_21 = (unsigned char)13;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)49804;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
int var_26 = 1458388023;
int var_27 = 335971090;
int var_28 = 1533006065;
int var_29 = -990762583;
short var_30 = (short)-4138;
long long int var_31 = -2888492780882188652LL;
int var_32 = -1852093255;
int var_33 = -185796573;
signed char var_34 = (signed char)43;
unsigned long long int var_35 = 5555286609627673487ULL;
unsigned short var_36 = (unsigned short)33417;
unsigned long long int var_37 = 3821571824399313106ULL;
unsigned char var_38 = (unsigned char)202;
unsigned char var_39 = (unsigned char)164;
unsigned char var_40 = (unsigned char)31;
int var_41 = 348862785;
unsigned int var_42 = 3381994944U;
int var_43 = 141109445;
unsigned short var_44 = (unsigned short)55219;
_Bool var_45 = (_Bool)0;
unsigned char var_46 = (unsigned char)71;
unsigned long long int var_47 = 12125034644768405057ULL;
unsigned int var_48 = 685494527U;
unsigned short var_49 = (unsigned short)38123;
int var_50 = 1777254076;
unsigned short var_51 = (unsigned short)64221;
unsigned int var_52 = 1029011030U;
signed char var_53 = (signed char)-100;
signed char var_54 = (signed char)-53;
long long int var_55 = -9207596683842133163LL;
signed char var_56 = (signed char)42;
signed char var_57 = (signed char)-121;
unsigned long long int var_58 = 11174870034665873442ULL;
signed char var_59 = (signed char)111;
unsigned long long int var_60 = 15088240128502830680ULL;
unsigned short var_61 = (unsigned short)9674;
unsigned short var_62 = (unsigned short)65086;
short var_63 = (short)3019;
unsigned char var_64 = (unsigned char)222;
unsigned short var_65 = (unsigned short)41538;
unsigned char var_66 = (unsigned char)152;
unsigned long long int var_67 = 10102461887649740220ULL;
unsigned short var_68 = (unsigned short)40889;
signed char var_69 = (signed char)-88;
short var_70 = (short)-14936;
unsigned char arr_0 [10] ;
signed char arr_1 [10] ;
signed char arr_2 [10] [10] ;
int arr_6 [13] [13] ;
signed char arr_10 [13] [13] [13] ;
long long int arr_14 [13] [13] [13] [13] [13] [13] ;
_Bool arr_17 [25] ;
int arr_18 [25] ;
short arr_19 [21] ;
unsigned char arr_20 [21] ;
signed char arr_23 [21] ;
unsigned long long int arr_24 [21] ;
unsigned char arr_25 [21] [21] [21] [21] ;
unsigned short arr_26 [21] [21] [21] [21] ;
short arr_27 [21] ;
unsigned long long int arr_32 [21] [21] [21] [21] [21] ;
signed char arr_33 [21] [21] [21] [21] ;
signed char arr_37 [21] [21] ;
unsigned char arr_38 [21] [21] [21] [21] ;
unsigned int arr_39 [21] [21] [21] ;
unsigned short arr_42 [21] [21] [21] [21] ;
long long int arr_45 [21] [21] [21] [21] ;
short arr_46 [21] ;
signed char arr_48 [21] [21] [21] [21] [21] ;
unsigned char arr_51 [21] [21] [21] [21] [21] [21] ;
unsigned short arr_53 [21] [21] [21] [21] [21] ;
unsigned short arr_63 [21] [21] [21] [21] [21] [21] ;
unsigned char arr_68 [21] [21] [21] [21] ;
unsigned int arr_86 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)71 : (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-96 : (signed char)-127;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-43 : (signed char)53;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = -1109077957;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -166289463848316067LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = -519599397;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = (short)-12781;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 12575232423352973707ULL : 10848519254704292904ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)45558 : (unsigned short)6227;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (short)27970 : (short)-20455;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = 4019550891821224925ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_37 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-89 : (signed char)93;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)149 : (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = 67962400U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (unsigned short)30552;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 7567628006667083581LL : 8166363351595462867LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_46 [i_0] = (i_0 % 2 == 0) ? (short)25472 : (short)-18710;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned char)153 : (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)60166;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (unsigned short)49258 : (unsigned short)37869;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_68 [i_0] [i_1] [i_2] [i_3] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_86 [i_0] [i_1] = 4015013857U;
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
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
