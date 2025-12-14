#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)130;
unsigned char var_8 = (unsigned char)60;
int zero = 0;
long long int var_12 = 6866385558628007363LL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-103;
int var_15 = 2109829191;
unsigned long long int var_16 = 2286833865925923968ULL;
unsigned char var_17 = (unsigned char)162;
signed char var_18 = (signed char)-33;
int var_19 = -32360460;
long long int var_20 = 8004250628977872080LL;
unsigned char var_21 = (unsigned char)224;
long long int var_22 = 3428342546310813368LL;
unsigned short var_23 = (unsigned short)38261;
int var_24 = 229091600;
unsigned short var_25 = (unsigned short)240;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)1;
unsigned long long int var_28 = 6398297483831432362ULL;
unsigned short var_29 = (unsigned short)15613;
unsigned int var_30 = 1210782934U;
unsigned short var_31 = (unsigned short)10553;
unsigned char var_32 = (unsigned char)247;
unsigned long long int var_33 = 6925011948416784017ULL;
long long int var_34 = -7984770872743055636LL;
unsigned short var_35 = (unsigned short)27928;
long long int var_36 = -465965835010307707LL;
int var_37 = 682904694;
short var_38 = (short)-12175;
unsigned long long int var_39 = 168846875976035326ULL;
int var_40 = 1857655031;
_Bool var_41 = (_Bool)1;
_Bool var_42 = (_Bool)0;
int var_43 = -2045003688;
long long int var_44 = 1551940219945453369LL;
int var_45 = -138169934;
int var_46 = 2135780780;
_Bool var_47 = (_Bool)0;
unsigned char var_48 = (unsigned char)47;
_Bool var_49 = (_Bool)0;
_Bool var_50 = (_Bool)1;
int var_51 = 1748658576;
short var_52 = (short)15603;
unsigned long long int var_53 = 12635027218282546383ULL;
_Bool var_54 = (_Bool)1;
int var_55 = 1952072985;
unsigned long long int var_56 = 17947783688120486785ULL;
int var_57 = 828188308;
long long int var_58 = 493696758636566335LL;
int var_59 = -1986714834;
unsigned char var_60 = (unsigned char)139;
int var_61 = 1623188386;
signed char var_62 = (signed char)-20;
unsigned int var_63 = 3165645473U;
long long int var_64 = 634870086283592701LL;
signed char var_65 = (signed char)-111;
int var_66 = -1977657837;
signed char var_67 = (signed char)0;
_Bool var_68 = (_Bool)0;
unsigned int var_69 = 3547275034U;
_Bool var_70 = (_Bool)0;
unsigned short var_71 = (unsigned short)14998;
_Bool var_72 = (_Bool)1;
unsigned char var_73 = (unsigned char)107;
int var_74 = 1953597885;
int var_75 = -846055678;
long long int var_76 = 5951881064186475538LL;
long long int var_77 = 7030325675111022493LL;
short var_78 = (short)12902;
_Bool arr_0 [16] [16] ;
int arr_1 [16] ;
unsigned long long int arr_2 [16] ;
unsigned long long int arr_3 [16] ;
_Bool arr_4 [16] ;
unsigned int arr_5 [16] [16] [16] ;
long long int arr_6 [16] [16] ;
_Bool arr_7 [16] ;
short arr_8 [16] [16] [16] [16] [16] ;
unsigned long long int arr_9 [16] [16] [16] ;
long long int arr_10 [16] [16] [16] [16] [16] ;
int arr_11 [16] [16] ;
signed char arr_12 [22] ;
long long int arr_13 [22] ;
signed char arr_14 [22] ;
unsigned long long int arr_15 [22] ;
long long int arr_16 [22] [22] [22] ;
short arr_17 [13] [13] ;
unsigned int arr_18 [13] ;
signed char arr_19 [13] ;
int arr_20 [13] ;
signed char arr_21 [13] ;
int arr_23 [13] [13] ;
unsigned int arr_25 [13] [13] [13] ;
int arr_26 [13] [13] [13] ;
signed char arr_27 [13] [13] [13] [13] ;
short arr_28 [13] ;
unsigned int arr_29 [13] [13] [13] [13] [13] [13] [13] ;
unsigned char arr_30 [13] [13] [13] [13] [13] ;
int arr_31 [13] [13] [13] [13] [13] ;
int arr_32 [13] [13] [13] ;
int arr_34 [13] [13] [13] [13] [13] [13] ;
signed char arr_35 [13] [13] [13] [13] [13] ;
_Bool arr_36 [13] [13] [13] [13] ;
int arr_38 [13] [13] [13] ;
unsigned long long int arr_39 [13] ;
int arr_40 [13] [13] [13] ;
_Bool arr_41 [13] ;
short arr_42 [13] ;
signed char arr_44 [13] [13] [13] ;
int arr_46 [13] [13] [13] [13] ;
unsigned int arr_48 [10] ;
unsigned short arr_49 [10] ;
int arr_50 [10] [10] ;
signed char arr_51 [10] ;
long long int arr_53 [10] [10] [10] ;
signed char arr_54 [10] [10] ;
unsigned char arr_55 [10] ;
unsigned int arr_56 [10] [10] [10] [10] ;
short arr_57 [10] ;
int arr_59 [10] [10] [10] [10] [10] [10] ;
signed char arr_60 [20] [20] ;
signed char arr_61 [20] ;
int arr_62 [20] [20] ;
long long int arr_63 [20] ;
_Bool arr_64 [20] ;
unsigned long long int arr_65 [20] ;
unsigned char arr_66 [20] ;
short arr_67 [20] [20] [20] [20] [20] [20] ;
short arr_68 [20] [20] [20] [20] [20] ;
unsigned char arr_69 [20] [20] ;
short arr_70 [20] ;
unsigned int arr_72 [20] ;
unsigned int arr_73 [20] [20] ;
signed char arr_74 [20] [20] [20] ;
unsigned long long int arr_76 [20] [20] [20] ;
unsigned short arr_82 [10] [10] [10] ;
unsigned int arr_83 [10] [10] [10] [10] ;
signed char arr_84 [10] [10] [10] [10] [10] [10] ;
unsigned int arr_85 [10] ;
long long int arr_86 [10] ;
unsigned int arr_89 [10] [10] [10] [10] ;
long long int arr_90 [10] [10] [10] [10] [10] ;
short arr_93 [10] [10] [10] ;
int arr_95 [10] [10] ;
int arr_97 [10] [10] [10] [10] ;
int arr_101 [10] ;
short arr_113 [19] ;
long long int arr_114 [19] ;
unsigned long long int arr_115 [19] ;
long long int arr_125 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -337723337;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 11752500342450076077ULL : 17423047057706279312ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 2959393332367466830ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 620166995U : 1280698593U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 1499804931938797500LL : -4381079067605584163LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)25556;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 17820288576334956683ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = -8326370569549359632LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = 694705838;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = 8881455240060521497LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 17615327515693690935ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 2158944454048934156LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (short)-5514;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = 3547756553U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = 497146752;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_23 [i_0] [i_1] = 1377711207;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 2364711511U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 1231014193;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = (short)-10357;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 197696300U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = 1017907168;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 1541232073;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1552980501;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = 1888565483;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_39 [i_0] = 14796941912765899361ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = -475710641;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_41 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_42 [i_0] = (short)-29767;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = 1609496577;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_48 [i_0] = 1575324978U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_49 [i_0] = (unsigned short)4996;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_50 [i_0] [i_1] = (i_0 % 2 == 0) ? -928760773 : -205759807;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_51 [i_0] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = -3279200069069791242LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_54 [i_0] [i_1] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_55 [i_0] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 778498390U : 1099169828U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_57 [i_0] = (short)3510;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? -615083731 : 878889543;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_60 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-60 : (signed char)97;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_61 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_62 [i_0] [i_1] = 623282572;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_63 [i_0] = (i_0 % 2 == 0) ? 5167469808570599931LL : -4859210221187308406LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_64 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_65 [i_0] = 4792601255035711243ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_66 [i_0] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_67 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-30952;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_68 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)1304;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_69 [i_0] [i_1] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_70 [i_0] = (short)5430;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_72 [i_0] = 1576950682U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_73 [i_0] [i_1] = 3370926428U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_74 [i_0] [i_1] [i_2] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_76 [i_0] [i_1] [i_2] = 1232770527742872097ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_82 [i_0] [i_1] [i_2] = (unsigned short)58831;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_83 [i_0] [i_1] [i_2] [i_3] = 2629053084U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_84 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_85 [i_0] = (i_0 % 2 == 0) ? 2340618869U : 3348785069U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_86 [i_0] = -7403651464284268639LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_89 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1024913583U : 2111531535U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_90 [i_0] [i_1] [i_2] [i_3] [i_4] = -6967008288270398579LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_93 [i_0] [i_1] [i_2] = (short)-682;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_95 [i_0] [i_1] = 1842514361;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_97 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1671313266 : -416950686;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_101 [i_0] = -951402340;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_113 [i_0] = (short)-25669;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_114 [i_0] = 5500492383802238335LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_115 [i_0] = 7948709318145297862ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_125 [i_0] [i_1] [i_2] [i_3] [i_4] = 8451234556972279933LL;
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
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
