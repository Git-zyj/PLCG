#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-79;
signed char var_1 = (signed char)-119;
unsigned char var_2 = (unsigned char)128;
_Bool var_3 = (_Bool)1;
int var_4 = -921698764;
unsigned int var_5 = 108488219U;
int var_6 = 697919284;
int var_7 = 1685249421;
int var_9 = 244429729;
unsigned short var_10 = (unsigned short)44001;
long long int var_11 = 9098760186015328047LL;
unsigned char var_12 = (unsigned char)252;
unsigned int var_13 = 787524717U;
unsigned int var_14 = 177882650U;
int zero = 0;
long long int var_15 = -8609396815231548332LL;
unsigned char var_16 = (unsigned char)137;
_Bool var_17 = (_Bool)1;
long long int var_18 = -514029658121034466LL;
short var_19 = (short)10928;
unsigned int var_20 = 1475444122U;
unsigned int var_21 = 323643754U;
unsigned short var_22 = (unsigned short)44242;
unsigned int var_23 = 85060910U;
unsigned int var_24 = 1848682483U;
unsigned short var_25 = (unsigned short)26814;
unsigned int var_26 = 2605493645U;
long long int var_27 = -1847272040390825405LL;
signed char var_28 = (signed char)112;
_Bool var_29 = (_Bool)1;
unsigned char var_30 = (unsigned char)119;
unsigned short var_31 = (unsigned short)13886;
unsigned int var_32 = 1568978899U;
unsigned char var_33 = (unsigned char)21;
long long int var_34 = -2595374218262865286LL;
unsigned short var_35 = (unsigned short)37746;
int var_36 = -2130098940;
signed char var_37 = (signed char)40;
signed char var_38 = (signed char)-63;
unsigned long long int var_39 = 1399033507019468330ULL;
unsigned char var_40 = (unsigned char)91;
_Bool var_41 = (_Bool)1;
short var_42 = (short)10607;
int var_43 = 1927441952;
long long int var_44 = -7763878383639754246LL;
int var_45 = -163886707;
long long int var_46 = -6155700347274894272LL;
unsigned short var_47 = (unsigned short)46445;
long long int var_48 = 1792567729260629961LL;
signed char var_49 = (signed char)-121;
unsigned char var_50 = (unsigned char)197;
signed char var_51 = (signed char)-49;
unsigned short var_52 = (unsigned short)63712;
unsigned long long int var_53 = 8199326892495049858ULL;
unsigned short var_54 = (unsigned short)2197;
int var_55 = 264678726;
unsigned char var_56 = (unsigned char)12;
long long int var_57 = -170018214236455885LL;
unsigned char var_58 = (unsigned char)111;
int var_59 = 317294257;
unsigned short var_60 = (unsigned short)51015;
int var_61 = 1322937144;
unsigned long long int var_62 = 16459061212264358274ULL;
unsigned long long int var_63 = 16765040059855159355ULL;
unsigned short var_64 = (unsigned short)50361;
short var_65 = (short)-11599;
long long int var_66 = 3241759019368229044LL;
int var_67 = 1295506764;
int var_68 = -1168082965;
unsigned char var_69 = (unsigned char)9;
unsigned long long int var_70 = 7965057999533329330ULL;
short var_71 = (short)-2994;
unsigned char var_72 = (unsigned char)21;
unsigned short var_73 = (unsigned short)19691;
long long int var_74 = -2524372333785149078LL;
unsigned int var_75 = 2029275871U;
signed char var_76 = (signed char)64;
long long int var_77 = 4459509378387061357LL;
unsigned char var_78 = (unsigned char)61;
_Bool var_79 = (_Bool)0;
long long int var_80 = 2486276801110465554LL;
unsigned long long int var_81 = 10369840196622210864ULL;
signed char var_82 = (signed char)-63;
signed char var_83 = (signed char)-7;
unsigned char var_84 = (unsigned char)249;
unsigned char arr_1 [11] ;
unsigned short arr_2 [11] ;
unsigned char arr_3 [11] [11] ;
unsigned int arr_5 [11] [11] ;
signed char arr_6 [11] [11] [11] ;
unsigned long long int arr_7 [11] [11] ;
short arr_17 [23] [23] ;
unsigned short arr_18 [23] ;
unsigned int arr_19 [23] ;
short arr_20 [23] ;
_Bool arr_21 [23] [23] ;
short arr_22 [23] [23] ;
long long int arr_23 [23] ;
unsigned short arr_24 [23] [23] [23] [23] ;
unsigned long long int arr_25 [23] [23] ;
unsigned char arr_26 [23] [23] [23] [23] [23] [23] ;
int arr_27 [23] [23] [23] [23] [23] ;
long long int arr_28 [23] [23] [23] [23] [23] [23] [23] ;
signed char arr_29 [23] [23] [23] ;
unsigned long long int arr_30 [23] ;
unsigned int arr_31 [23] ;
unsigned int arr_32 [23] [23] [23] [23] ;
unsigned long long int arr_34 [23] ;
long long int arr_35 [23] [23] [23] [23] ;
unsigned short arr_36 [23] [23] ;
long long int arr_37 [23] [23] [23] ;
long long int arr_40 [23] [23] [23] ;
unsigned long long int arr_41 [23] [23] [23] [23] ;
unsigned int arr_42 [23] [23] [23] [23] ;
signed char arr_43 [23] [23] [23] [23] [23] ;
short arr_44 [23] [23] [23] ;
_Bool arr_45 [23] [23] [23] [23] [23] ;
unsigned char arr_47 [23] [23] [23] [23] ;
signed char arr_48 [23] [23] [23] [23] ;
int arr_49 [23] [23] ;
short arr_50 [23] [23] [23] [23] [23] ;
unsigned int arr_51 [23] ;
unsigned short arr_52 [23] ;
unsigned char arr_53 [23] [23] [23] [23] [23] [23] [23] ;
long long int arr_54 [23] [23] [23] [23] [23] ;
int arr_55 [23] [23] [23] [23] ;
unsigned short arr_56 [23] [23] [23] [23] [23] [23] ;
_Bool arr_57 [23] [23] [23] [23] [23] [23] [23] ;
int arr_65 [23] [23] ;
long long int arr_66 [23] [23] [23] [23] [23] ;
_Bool arr_67 [23] [23] [23] [23] [23] [23] ;
unsigned short arr_68 [23] [23] [23] [23] ;
long long int arr_72 [23] [23] [23] [23] ;
unsigned char arr_73 [23] [23] [23] [23] [23] ;
long long int arr_74 [23] [23] [23] [23] [23] ;
int arr_75 [23] [23] [23] [23] [23] [23] ;
short arr_76 [23] [23] [23] [23] [23] [23] [23] ;
long long int arr_78 [23] [23] [23] [23] ;
int arr_82 [23] [23] [23] [23] ;
long long int arr_84 [23] [23] [23] ;
signed char arr_88 [23] [23] [23] ;
signed char arr_91 [23] [23] [23] ;
unsigned int arr_92 [23] [23] ;
signed char arr_93 [23] [23] [23] ;
int arr_99 [23] ;
signed char arr_110 [23] [23] ;
int arr_111 [23] [23] ;
int arr_116 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)59513;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 1388387176U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-9 : (signed char)-106;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 7457925912965758133ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = (short)-8693;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (unsigned short)17043;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = 1336279182U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (short)2407;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_22 [i_0] [i_1] = (short)28288;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = -7643480721997548649LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (unsigned short)15901;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_25 [i_0] [i_1] = 7969835949090029253ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (unsigned char)188 : (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = 2116211135;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 5699858415713020940LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = 16566257741818362869ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_31 [i_0] = 1668961263U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = 4226563920U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_34 [i_0] = 1373296500724870322ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = -5658379594596527816LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_36 [i_0] [i_1] = (unsigned short)62088;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = 1103004800840464464LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = -6887492639566225402LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = 13523168233919854173ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = 1666952978U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (short)-5320;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_49 [i_0] [i_1] = -1486434959;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)-3437 : (short)32638;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_51 [i_0] = 644590784U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_52 [i_0] = (unsigned short)37730;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] = -2549111716251423937LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_55 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 486800572 : -1328222420;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned short)29893 : (unsigned short)62948;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_65 [i_0] [i_1] = 194564141;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] = 2381408852007337903LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_67 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_68 [i_0] [i_1] [i_2] [i_3] = (unsigned short)19228;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_72 [i_0] [i_1] [i_2] [i_3] = 5166487455343570745LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_73 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_74 [i_0] [i_1] [i_2] [i_3] [i_4] = -6721055784956404666LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_75 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 41087495;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_76 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (short)11407 : (short)-15518;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_78 [i_0] [i_1] [i_2] [i_3] = -1105950064839915289LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_82 [i_0] [i_1] [i_2] [i_3] = 980168304;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_84 [i_0] [i_1] [i_2] = -8674612318500977261LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_88 [i_0] [i_1] [i_2] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_91 [i_0] [i_1] [i_2] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_92 [i_0] [i_1] = 475670955U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_93 [i_0] [i_1] [i_2] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_99 [i_0] = (i_0 % 2 == 0) ? 248612656 : 29724591;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_110 [i_0] [i_1] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_111 [i_0] [i_1] = -1724990430;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_116 [i_0] [i_1] [i_2] [i_3] = -898603301;
}

void checksum() {
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
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
    hash(&seed, var_83);
    hash(&seed, var_84);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
