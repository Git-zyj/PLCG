#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11593542214604303106ULL;
signed char var_1 = (signed char)107;
unsigned short var_2 = (unsigned short)46905;
signed char var_3 = (signed char)-124;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)29151;
unsigned char var_6 = (unsigned char)113;
unsigned short var_7 = (unsigned short)59294;
_Bool var_8 = (_Bool)0;
long long int var_9 = -9215640735517388715LL;
unsigned char var_10 = (unsigned char)206;
signed char var_11 = (signed char)106;
unsigned long long int var_12 = 17425557926738934507ULL;
unsigned long long int var_13 = 16966253041185425678ULL;
_Bool var_14 = (_Bool)0;
unsigned char var_17 = (unsigned char)33;
int zero = 0;
unsigned int var_18 = 970098106U;
int var_19 = 609474380;
unsigned long long int var_20 = 9642363866701187596ULL;
unsigned char var_21 = (unsigned char)241;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)46273;
unsigned int var_24 = 895662203U;
long long int var_25 = -7108960851396510024LL;
signed char var_26 = (signed char)-113;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 3581515957U;
signed char var_29 = (signed char)-90;
unsigned int var_30 = 797885418U;
unsigned short var_31 = (unsigned short)14122;
int var_32 = 928020556;
short var_33 = (short)-11783;
signed char var_34 = (signed char)78;
unsigned short var_35 = (unsigned short)28301;
long long int var_36 = 3522842463215986190LL;
_Bool var_37 = (_Bool)1;
long long int var_38 = 2712071879209863713LL;
_Bool var_39 = (_Bool)1;
unsigned char var_40 = (unsigned char)206;
_Bool var_41 = (_Bool)0;
unsigned int var_42 = 3197658096U;
unsigned int var_43 = 1680684115U;
int var_44 = 1239029168;
short var_45 = (short)7082;
int var_46 = 24154366;
int var_47 = -1985441481;
int var_48 = 1973269955;
_Bool var_49 = (_Bool)1;
int var_50 = -28309323;
long long int var_51 = -7097162402847442896LL;
signed char var_52 = (signed char)-69;
int var_53 = 954018184;
_Bool var_54 = (_Bool)1;
short var_55 = (short)28507;
long long int var_56 = 4810727802165984356LL;
_Bool var_57 = (_Bool)1;
unsigned char var_58 = (unsigned char)102;
unsigned short var_59 = (unsigned short)37986;
short var_60 = (short)-10282;
long long int var_61 = 60817572666585544LL;
long long int var_62 = -1295351666380055760LL;
long long int var_63 = -6821357056453169016LL;
unsigned int var_64 = 3187248768U;
unsigned int var_65 = 3670542917U;
unsigned int var_66 = 4065201266U;
unsigned short var_67 = (unsigned short)62324;
unsigned long long int var_68 = 16427950257004622824ULL;
long long int var_69 = 6947464614832346759LL;
unsigned short var_70 = (unsigned short)64616;
_Bool var_71 = (_Bool)0;
_Bool var_72 = (_Bool)1;
short var_73 = (short)-2053;
_Bool var_74 = (_Bool)0;
unsigned char var_75 = (unsigned char)240;
unsigned long long int var_76 = 4119740352060435378ULL;
signed char var_77 = (signed char)-69;
int var_78 = 455077397;
short var_79 = (short)-20471;
signed char var_80 = (signed char)-123;
int var_81 = 1452106618;
signed char var_82 = (signed char)104;
short var_83 = (short)-27393;
_Bool var_84 = (_Bool)0;
_Bool var_85 = (_Bool)0;
short var_86 = (short)31191;
_Bool var_87 = (_Bool)0;
unsigned char var_88 = (unsigned char)139;
unsigned char var_89 = (unsigned char)191;
short var_90 = (short)-12872;
int var_91 = -940830215;
int var_92 = -474157533;
unsigned short var_93 = (unsigned short)53359;
signed char var_94 = (signed char)116;
unsigned short var_95 = (unsigned short)27568;
long long int var_96 = 8566586191310744227LL;
long long int var_97 = -1600268170390965404LL;
unsigned int var_98 = 3258193059U;
long long int var_99 = 6137455023022132937LL;
unsigned short var_100 = (unsigned short)41536;
unsigned int var_101 = 183348030U;
short var_102 = (short)15540;
short var_103 = (short)20449;
unsigned char var_104 = (unsigned char)85;
_Bool var_105 = (_Bool)1;
unsigned long long int var_106 = 15348274173455770577ULL;
unsigned long long int var_107 = 8818425969287319608ULL;
short arr_0 [17] ;
_Bool arr_2 [17] ;
int arr_3 [17] ;
int arr_4 [23] ;
short arr_5 [23] ;
_Bool arr_6 [23] [23] ;
signed char arr_7 [23] ;
int arr_8 [23] [23] ;
_Bool arr_9 [23] [23] ;
short arr_10 [23] [23] ;
short arr_11 [10] [10] ;
signed char arr_12 [10] ;
unsigned char arr_13 [10] ;
int arr_14 [10] [10] [10] ;
unsigned int arr_15 [10] [10] [10] ;
short arr_16 [10] [10] ;
unsigned char arr_17 [10] ;
unsigned short arr_18 [10] ;
unsigned short arr_19 [10] [10] ;
long long int arr_20 [10] [10] [10] [10] ;
short arr_21 [10] [10] [10] [10] ;
int arr_22 [10] [10] [10] [10] ;
unsigned char arr_23 [10] ;
unsigned int arr_24 [10] [10] [10] [10] [10] [10] ;
short arr_25 [10] [10] [10] [10] ;
int arr_26 [10] [10] [10] [10] [10] ;
signed char arr_28 [10] [10] [10] [10] [10] [10] ;
unsigned short arr_30 [10] [10] ;
unsigned int arr_31 [10] [10] [10] [10] [10] [10] ;
short arr_32 [10] [10] [10] ;
int arr_33 [10] [10] [10] [10] [10] ;
unsigned short arr_35 [10] [10] [10] [10] [10] [10] ;
signed char arr_36 [10] [10] ;
unsigned long long int arr_38 [10] [10] [10] [10] [10] [10] ;
long long int arr_39 [10] [10] [10] [10] [10] ;
unsigned char arr_41 [10] [10] [10] [10] [10] [10] [10] ;
short arr_43 [10] [10] [10] [10] [10] ;
short arr_44 [10] [10] [10] ;
_Bool arr_45 [10] ;
signed char arr_46 [10] [10] [10] ;
unsigned short arr_50 [10] [10] [10] [10] [10] ;
_Bool arr_51 [10] [10] [10] [10] ;
unsigned int arr_52 [10] [10] [10] [10] ;
unsigned long long int arr_53 [10] [10] [10] [10] ;
short arr_54 [10] [10] [10] [10] [10] ;
signed char arr_55 [10] [10] [10] [10] [10] ;
signed char arr_56 [10] [10] [10] [10] [10] ;
signed char arr_58 [10] [10] [10] [10] [10] [10] ;
unsigned short arr_74 [10] [10] [10] [10] ;
signed char arr_85 [24] ;
long long int arr_86 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)-26820;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 207375338 : -155946475;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1670237413 : -1121319038;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)-13089;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-51 : (signed char)-104;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = -1750455673;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-3270;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-30490;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 1870957743;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 710814335U : 2611629744U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-18595 : (short)-29714;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (unsigned short)28216;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)50577;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = -4532907379304947272LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (short)-32517;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 488579040;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned char)15 : (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 3070562151U : 197580570U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (short)5860;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = 257749062;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned short)42919;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2444958932U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-32376 : (short)-24402;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = -233636461;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (unsigned short)32046 : (unsigned short)63402;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_36 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)68 : (signed char)60;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2956311148104943869ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = -7130350087312993478LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? (unsigned char)121 : (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-22567;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (short)-22473;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)17399;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = 4150388545U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = 8176650422140705647ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-10252;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_58 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (signed char)127 : (signed char)64;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_74 [i_0] [i_1] [i_2] [i_3] = (unsigned short)33760;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_85 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_86 [i_0] [i_1] = -3806222169547835734LL;
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
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
    hash(&seed, var_83);
    hash(&seed, var_84);
    hash(&seed, var_85);
    hash(&seed, var_86);
    hash(&seed, var_87);
    hash(&seed, var_88);
    hash(&seed, var_89);
    hash(&seed, var_90);
    hash(&seed, var_91);
    hash(&seed, var_92);
    hash(&seed, var_93);
    hash(&seed, var_94);
    hash(&seed, var_95);
    hash(&seed, var_96);
    hash(&seed, var_97);
    hash(&seed, var_98);
    hash(&seed, var_99);
    hash(&seed, var_100);
    hash(&seed, var_101);
    hash(&seed, var_102);
    hash(&seed, var_103);
    hash(&seed, var_104);
    hash(&seed, var_105);
    hash(&seed, var_106);
    hash(&seed, var_107);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
