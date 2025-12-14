#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7650977195093661576ULL;
unsigned short var_1 = (unsigned short)63058;
unsigned char var_2 = (unsigned char)141;
unsigned char var_3 = (unsigned char)38;
unsigned char var_4 = (unsigned char)29;
unsigned char var_5 = (unsigned char)97;
unsigned int var_6 = 122744910U;
unsigned long long int var_7 = 16510649421724510537ULL;
unsigned char var_8 = (unsigned char)202;
unsigned int var_9 = 467428331U;
long long int var_10 = 6163205047429664430LL;
long long int var_11 = 7594718766003326831LL;
unsigned long long int var_12 = 12416480769031940756ULL;
unsigned int var_15 = 3734859986U;
unsigned long long int var_16 = 9322691792392749764ULL;
int zero = 0;
int var_17 = -1016015903;
unsigned short var_18 = (unsigned short)50942;
int var_19 = -311133149;
signed char var_20 = (signed char)15;
unsigned long long int var_21 = 14618714057841595113ULL;
short var_22 = (short)-5706;
unsigned long long int var_23 = 7566897740947860134ULL;
unsigned int var_24 = 1243138446U;
unsigned int var_25 = 3197674976U;
unsigned char var_26 = (unsigned char)204;
long long int var_27 = 5220391486643005409LL;
unsigned char var_28 = (unsigned char)36;
unsigned short var_29 = (unsigned short)44465;
unsigned short var_30 = (unsigned short)11043;
unsigned int var_31 = 2516942084U;
unsigned long long int var_32 = 15669836356062476056ULL;
unsigned int var_33 = 1686677835U;
unsigned short var_34 = (unsigned short)28866;
long long int var_35 = -6648788378514889974LL;
unsigned char var_36 = (unsigned char)160;
unsigned long long int var_37 = 1781525789416944697ULL;
unsigned long long int var_38 = 2370447881881633260ULL;
unsigned char var_39 = (unsigned char)47;
unsigned long long int var_40 = 7712410062412894129ULL;
unsigned char var_41 = (unsigned char)147;
short var_42 = (short)12025;
short var_43 = (short)-30226;
short var_44 = (short)-16308;
long long int var_45 = 1414006927219709024LL;
long long int var_46 = 2080856177843045521LL;
unsigned short var_47 = (unsigned short)61429;
long long int var_48 = 8575626110589555517LL;
int var_49 = 1552884593;
long long int var_50 = -7156134000212574004LL;
signed char var_51 = (signed char)-3;
unsigned int var_52 = 2976259728U;
short var_53 = (short)17125;
unsigned char var_54 = (unsigned char)166;
short var_55 = (short)30128;
unsigned int var_56 = 2881441019U;
unsigned char var_57 = (unsigned char)119;
_Bool var_58 = (_Bool)1;
long long int var_59 = 9155331446399847888LL;
unsigned int var_60 = 2228688487U;
unsigned int var_61 = 3640428867U;
long long int var_62 = 1551110042740559117LL;
unsigned short arr_1 [12] [12] ;
unsigned char arr_2 [12] ;
unsigned int arr_3 [12] ;
unsigned char arr_4 [12] [12] [12] ;
unsigned int arr_5 [12] [12] [12] ;
short arr_6 [12] ;
signed char arr_8 [12] [12] [12] [12] [12] [12] ;
int arr_12 [12] [12] ;
long long int arr_14 [12] [12] [12] ;
unsigned long long int arr_16 [12] ;
unsigned short arr_18 [12] [12] [12] ;
short arr_19 [12] ;
short arr_21 [12] [12] [12] ;
short arr_23 [12] [12] [12] [12] ;
unsigned int arr_45 [12] ;
unsigned short arr_49 [19] ;
unsigned long long int arr_50 [19] ;
short arr_54 [19] ;
signed char arr_56 [19] [19] ;
unsigned char arr_57 [19] [19] ;
short arr_58 [19] [19] [19] ;
signed char arr_59 [19] [19] [19] ;
unsigned short arr_61 [19] [19] [19] ;
short arr_62 [19] ;
unsigned char arr_63 [19] [19] [19] ;
int arr_64 [19] ;
unsigned int arr_69 [19] [19] [19] ;
unsigned char arr_70 [19] ;
short arr_72 [19] [19] [19] ;
unsigned long long int arr_73 [19] [19] [19] [19] [19] [19] ;
signed char arr_74 [19] ;
short arr_75 [19] [19] [19] ;
unsigned int arr_80 [19] ;
signed char arr_83 [19] [19] [19] [19] ;
int arr_86 [19] [19] [19] [19] ;
unsigned char arr_87 [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_88 [19] [19] [19] [19] ;
short arr_90 [19] [19] [19] [19] [19] ;
unsigned long long int arr_103 [15] [15] ;
unsigned long long int arr_10 [12] [12] [12] [12] [12] [12] ;
unsigned char arr_11 [12] [12] [12] ;
unsigned long long int arr_15 [12] ;
int arr_25 [12] ;
short arr_28 [12] [12] [12] [12] [12] ;
short arr_29 [12] ;
long long int arr_34 [12] [12] [12] [12] [12] [12] ;
long long int arr_35 [12] [12] ;
long long int arr_36 [12] [12] [12] [12] ;
unsigned short arr_39 [12] [12] [12] [12] [12] ;
short arr_40 [12] [12] [12] ;
unsigned short arr_41 [12] ;
signed char arr_48 [12] [12] ;
unsigned short arr_51 [19] ;
long long int arr_52 [19] ;
unsigned int arr_60 [19] [19] [19] ;
unsigned short arr_66 [19] [19] ;
unsigned int arr_71 [19] [19] [19] [19] ;
unsigned char arr_76 [19] [19] [19] [19] [19] ;
unsigned int arr_81 [19] [19] [19] [19] [19] [19] ;
signed char arr_82 [19] [19] [19] ;
long long int arr_97 [19] [19] ;
long long int arr_102 [19] [19] ;
unsigned short arr_107 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)39545;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 3597506632U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3002629074U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)5442 : (short)26020;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (signed char)-17 : (signed char)90;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = 2353396;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -8605468970765823280LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = 2184281607262884868ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)8780;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (short)23203;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (short)29229;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (short)-6634;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_45 [i_0] = 4007184596U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_49 [i_0] = (unsigned short)60468;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_50 [i_0] = 511776183725355633ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_54 [i_0] = (short)28149;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_56 [i_0] [i_1] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_57 [i_0] [i_1] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_58 [i_0] [i_1] [i_2] = (short)13430;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_59 [i_0] [i_1] [i_2] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_61 [i_0] [i_1] [i_2] = (unsigned short)31932;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_62 [i_0] = (short)31302;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_63 [i_0] [i_1] [i_2] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_64 [i_0] = 1210996144;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_69 [i_0] [i_1] [i_2] = 3910321604U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_70 [i_0] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_72 [i_0] [i_1] [i_2] = (short)15660;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_73 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 16750091199704593452ULL : 16654874269317632968ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_74 [i_0] = (i_0 % 2 == 0) ? (signed char)-38 : (signed char)72;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_75 [i_0] [i_1] [i_2] = (short)-6099;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_80 [i_0] = 410727511U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_83 [i_0] [i_1] [i_2] [i_3] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_86 [i_0] [i_1] [i_2] [i_3] = -1243961625;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_87 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_88 [i_0] [i_1] [i_2] [i_3] = 9073575210759473490ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_90 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)20982;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_103 [i_0] [i_1] = 16862474025130649782ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 3235519620283129441ULL : 8859646152486295494ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = 17251704915975343477ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = -1232020258;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-24299;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_29 [i_0] = (short)12981;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 6441061730558245911LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_35 [i_0] [i_1] = -5187837350390614796LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = 6151294522486906717LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)4969;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (short)-16914;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_41 [i_0] = (unsigned short)20238;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_48 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-46 : (signed char)81;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_51 [i_0] = (unsigned short)58414;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_52 [i_0] = -5789623617590200334LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_60 [i_0] [i_1] [i_2] = 1565257296U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_66 [i_0] [i_1] = (unsigned short)60002;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_71 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 452550232U : 778187248U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_76 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned char)93 : (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_81 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 2680545187U : 3410045136U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_82 [i_0] [i_1] [i_2] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_97 [i_0] [i_1] = -3125646947109466798LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_102 [i_0] [i_1] = 1438533341243916082LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_107 [i_0] [i_1] = (unsigned short)29562;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_40 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_48 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_52 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_60 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_66 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_71 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_76 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_81 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_82 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_97 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_102 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_107 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
