#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 6397282418107405713ULL;
unsigned char var_2 = (unsigned char)160;
long long int var_4 = 3515128183937023614LL;
short var_5 = (short)21372;
long long int var_6 = -4771123001045406784LL;
short var_7 = (short)-20686;
unsigned int var_8 = 1252927652U;
unsigned long long int var_9 = 12035537475073471800ULL;
unsigned char var_10 = (unsigned char)168;
unsigned short var_11 = (unsigned short)16816;
unsigned short var_12 = (unsigned short)63993;
unsigned char var_13 = (unsigned char)70;
int var_14 = 348327935;
int var_15 = -99085908;
long long int var_16 = -5545267406843874805LL;
unsigned long long int var_17 = 6229571005322668062ULL;
int zero = 0;
long long int var_18 = -1781814949113847532LL;
long long int var_19 = 3870121018205198315LL;
unsigned char var_20 = (unsigned char)82;
unsigned char var_21 = (unsigned char)158;
unsigned long long int var_22 = 13397225505954366128ULL;
signed char var_23 = (signed char)-58;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)169;
unsigned short var_26 = (unsigned short)62985;
unsigned long long int var_27 = 8879611045240433442ULL;
unsigned char var_28 = (unsigned char)75;
signed char var_29 = (signed char)-77;
_Bool var_30 = (_Bool)1;
long long int var_31 = 150946273835184634LL;
unsigned char var_32 = (unsigned char)216;
signed char var_33 = (signed char)-119;
unsigned short var_34 = (unsigned short)59943;
_Bool var_35 = (_Bool)1;
unsigned short var_36 = (unsigned short)47739;
_Bool var_37 = (_Bool)1;
unsigned short var_38 = (unsigned short)875;
signed char var_39 = (signed char)-33;
unsigned long long int var_40 = 16969248494283675033ULL;
long long int var_41 = -6789745812456795760LL;
_Bool var_42 = (_Bool)0;
unsigned char var_43 = (unsigned char)138;
unsigned int var_44 = 360730817U;
long long int var_45 = -5940253552856600868LL;
unsigned char var_46 = (unsigned char)90;
unsigned long long int var_47 = 7567822944052706859ULL;
_Bool var_48 = (_Bool)1;
unsigned long long int var_49 = 3616558512622976791ULL;
unsigned short var_50 = (unsigned short)45749;
unsigned long long int var_51 = 17261294044289183330ULL;
unsigned int var_52 = 1575877263U;
unsigned char var_53 = (unsigned char)68;
int var_54 = -1100343804;
signed char var_55 = (signed char)-92;
signed char var_56 = (signed char)-66;
int var_57 = 1859667909;
signed char var_58 = (signed char)-96;
_Bool var_59 = (_Bool)0;
int var_60 = -1763686663;
_Bool var_61 = (_Bool)1;
_Bool var_62 = (_Bool)0;
_Bool var_63 = (_Bool)0;
long long int var_64 = 3816072575006605159LL;
_Bool var_65 = (_Bool)0;
short var_66 = (short)29457;
unsigned long long int var_67 = 16390111403792319270ULL;
unsigned char var_68 = (unsigned char)152;
unsigned int var_69 = 1577045088U;
unsigned short var_70 = (unsigned short)52383;
unsigned char var_71 = (unsigned char)216;
int var_72 = 886051341;
short var_73 = (short)12169;
unsigned char var_74 = (unsigned char)190;
unsigned short var_75 = (unsigned short)62535;
_Bool var_76 = (_Bool)1;
long long int var_77 = 6126987608917919819LL;
long long int arr_0 [11] [11] ;
unsigned long long int arr_1 [11] ;
signed char arr_2 [11] [11] ;
long long int arr_3 [11] ;
short arr_4 [11] [11] [11] ;
_Bool arr_5 [11] [11] [11] ;
int arr_6 [11] [11] [11] ;
int arr_7 [11] [11] [11] [11] [11] ;
unsigned long long int arr_8 [11] [11] [11] [11] [11] [11] ;
short arr_9 [11] [11] [11] [11] ;
unsigned long long int arr_10 [11] ;
long long int arr_11 [11] [11] ;
unsigned long long int arr_12 [11] ;
unsigned short arr_13 [11] ;
int arr_15 [11] ;
int arr_16 [11] [11] [11] ;
long long int arr_19 [11] ;
unsigned int arr_21 [11] [11] [11] [11] [11] [11] ;
unsigned long long int arr_22 [11] [11] [11] [11] [11] ;
unsigned char arr_25 [11] [11] ;
unsigned char arr_26 [11] [11] [11] [11] [11] [11] ;
int arr_27 [11] [11] [11] [11] ;
_Bool arr_28 [11] [11] [11] [11] [11] ;
unsigned long long int arr_29 [11] [11] [11] [11] ;
unsigned short arr_31 [11] [11] [11] [11] [11] ;
unsigned short arr_32 [11] [11] [11] [11] [11] [11] ;
int arr_33 [11] ;
signed char arr_35 [11] ;
unsigned long long int arr_36 [11] [11] [11] ;
unsigned long long int arr_37 [11] ;
_Bool arr_40 [11] [11] [11] [11] ;
unsigned short arr_41 [11] [11] [11] [11] [11] ;
unsigned short arr_45 [11] [11] [11] [11] [11] ;
unsigned int arr_48 [11] [11] [11] [11] ;
unsigned short arr_54 [11] ;
int arr_55 [11] [11] [11] ;
int arr_58 [11] [11] [11] [11] ;
signed char arr_61 [11] [11] [11] ;
unsigned char arr_65 [11] [11] [11] [11] [11] ;
unsigned char arr_70 [11] [11] [11] [11] [11] ;
unsigned char arr_76 [11] [11] [11] [11] [11] ;
_Bool arr_78 [11] [11] ;
unsigned long long int arr_81 [11] [11] [11] ;
int arr_82 [11] [11] [11] [11] ;
unsigned int arr_18 [11] [11] [11] ;
long long int arr_23 [11] [11] [11] [11] [11] ;
long long int arr_51 [11] [11] [11] ;
unsigned long long int arr_67 [11] [11] [11] [11] ;
_Bool arr_71 [11] [11] [11] [11] [11] ;
unsigned char arr_74 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -562158718958140407LL : -2709994079011242952LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 3267473609250950665ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -6860083606804935898LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-22387;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1782327852;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = -163855618;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2024591155722401833ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-6992;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 13868226016857978566ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 8703431514509781451LL : -1261664999640460032LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 10614855136166417815ULL : 9052606011661470414ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (unsigned short)58285;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = 646020388;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1191471725 : -1739047619;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = 5634576793937350857LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 4200346083U : 1682595977U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = 9553285376627044831ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)239 : (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1644388376 : 100508494;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 9373848781588732903ULL : 7009974806611624981ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)49914;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (unsigned short)2795 : (unsigned short)24841;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_33 [i_0] = -1254628871;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_35 [i_0] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = 17139101338016011920ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? 2812516614684583741ULL : 18134411284171860024ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)3129 : (unsigned short)18005;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)45606 : (unsigned short)16984;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = 3514449999U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_54 [i_0] = (unsigned short)350;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = -350099610;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -927656735 : 814690634;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_61 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-81 : (signed char)35;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_65 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_70 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)174 : (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_76 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)112 : (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_78 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_81 [i_0] [i_1] [i_2] = 5235378688429799303ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_82 [i_0] [i_1] [i_2] [i_3] = -590014542;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4267089863U : 2171503590U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 8983791005111102254LL : 4160233735488683935LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -7808776732713689045LL : 5291510623878307803LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_67 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 9219378196588067097ULL : 14743654053278078284ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_71 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_74 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)42 : (unsigned char)241;
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
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_51 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_67 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_71 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_74 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
