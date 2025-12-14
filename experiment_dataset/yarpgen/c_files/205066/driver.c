#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37944;
unsigned int var_1 = 3191423964U;
short var_2 = (short)-14183;
short var_3 = (short)-13499;
unsigned short var_4 = (unsigned short)6015;
signed char var_5 = (signed char)-105;
int var_6 = -1647220494;
short var_7 = (short)-12275;
unsigned short var_8 = (unsigned short)33025;
signed char var_9 = (signed char)-95;
unsigned long long int var_11 = 14153654950989484269ULL;
long long int var_12 = -2943942696934841754LL;
unsigned int var_13 = 447986884U;
short var_14 = (short)24846;
unsigned char var_15 = (unsigned char)50;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_17 = (short)-26502;
unsigned int var_18 = 1648220279U;
unsigned short var_19 = (unsigned short)14242;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)128;
unsigned int var_23 = 3870578467U;
unsigned char var_24 = (unsigned char)128;
unsigned short var_25 = (unsigned short)45372;
short var_26 = (short)-29883;
unsigned short var_27 = (unsigned short)18542;
unsigned int var_28 = 2045287672U;
unsigned int var_29 = 1710826593U;
short var_30 = (short)11807;
unsigned short var_31 = (unsigned short)16275;
unsigned char var_32 = (unsigned char)27;
short var_33 = (short)17101;
long long int var_34 = 156917273193442869LL;
unsigned long long int var_35 = 9994092411834759716ULL;
unsigned short var_36 = (unsigned short)22020;
short var_37 = (short)-24814;
unsigned short var_38 = (unsigned short)55303;
unsigned long long int var_39 = 18431769305544101004ULL;
unsigned int var_40 = 3279056143U;
short var_41 = (short)9298;
unsigned short var_42 = (unsigned short)49036;
unsigned int var_43 = 146274607U;
unsigned short var_44 = (unsigned short)30638;
unsigned short var_45 = (unsigned short)15874;
int var_46 = -1237706791;
short var_47 = (short)9482;
unsigned int var_48 = 4244788122U;
unsigned long long int var_49 = 10800262025774821395ULL;
unsigned int var_50 = 2124394082U;
_Bool var_51 = (_Bool)1;
unsigned short var_52 = (unsigned short)10149;
short var_53 = (short)25930;
unsigned char var_54 = (unsigned char)192;
signed char var_55 = (signed char)35;
unsigned short var_56 = (unsigned short)48314;
_Bool var_57 = (_Bool)1;
unsigned short var_58 = (unsigned short)32762;
unsigned long long int var_59 = 15172503373898615452ULL;
unsigned int var_60 = 3342978670U;
short var_61 = (short)-6938;
unsigned long long int var_62 = 5877832089045496928ULL;
unsigned int var_63 = 1835891637U;
unsigned short var_64 = (unsigned short)14242;
unsigned char var_65 = (unsigned char)121;
_Bool var_66 = (_Bool)1;
unsigned int var_67 = 727021146U;
long long int var_68 = -5051740116999092572LL;
unsigned char var_69 = (unsigned char)43;
_Bool var_70 = (_Bool)0;
unsigned long long int var_71 = 14037523833174158434ULL;
short var_72 = (short)8721;
unsigned long long int var_73 = 16570477137469240449ULL;
_Bool var_74 = (_Bool)0;
unsigned long long int var_75 = 2552424858932120240ULL;
unsigned char var_76 = (unsigned char)79;
unsigned long long int var_77 = 9785108632792366102ULL;
long long int var_78 = 3118029409780625380LL;
unsigned long long int var_79 = 16036660931679592995ULL;
unsigned char var_80 = (unsigned char)143;
unsigned char var_81 = (unsigned char)157;
unsigned char var_82 = (unsigned char)25;
unsigned short var_83 = (unsigned short)41704;
_Bool var_84 = (_Bool)0;
long long int var_85 = 1257067761608545560LL;
long long int var_86 = -1700453338916274417LL;
short var_87 = (short)-9119;
unsigned long long int var_88 = 14761540501742870816ULL;
unsigned int var_89 = 3766065212U;
unsigned char var_90 = (unsigned char)93;
short var_91 = (short)28589;
unsigned char var_92 = (unsigned char)26;
short var_93 = (short)-15667;
unsigned int var_94 = 62772800U;
short var_95 = (short)-28377;
long long int arr_0 [22] ;
signed char arr_1 [22] ;
_Bool arr_5 [22] ;
short arr_6 [22] ;
short arr_8 [22] [22] [22] ;
unsigned int arr_9 [22] [22] [22] ;
_Bool arr_11 [22] [22] ;
unsigned int arr_12 [22] [22] [22] [22] ;
unsigned long long int arr_13 [22] [22] [22] [22] [22] [22] [22] ;
unsigned int arr_14 [22] [22] [22] [22] [22] ;
unsigned int arr_15 [22] [22] [22] [22] [22] [22] ;
unsigned int arr_16 [22] [22] [22] [22] [22] ;
short arr_17 [22] [22] [22] [22] [22] ;
short arr_18 [22] [22] [22] [22] [22] [22] [22] ;
unsigned short arr_19 [22] [22] [22] ;
_Bool arr_21 [22] ;
unsigned short arr_22 [22] [22] [22] ;
long long int arr_23 [22] [22] [22] [22] ;
unsigned long long int arr_24 [22] [22] [22] [22] ;
unsigned long long int arr_25 [22] [22] [22] [22] [22] ;
short arr_29 [22] ;
unsigned short arr_31 [22] ;
signed char arr_37 [22] [22] [22] [22] ;
unsigned long long int arr_38 [22] ;
unsigned char arr_40 [22] [22] [22] [22] ;
unsigned int arr_41 [22] [22] [22] [22] ;
unsigned short arr_45 [22] [22] [22] [22] ;
long long int arr_49 [22] [22] [22] [22] ;
short arr_50 [22] [22] [22] [22] [22] [22] ;
short arr_51 [22] [22] [22] ;
short arr_54 [22] ;
unsigned int arr_55 [22] [22] [22] ;
unsigned long long int arr_58 [22] ;
short arr_71 [22] [22] [22] [22] [22] ;
unsigned short arr_72 [22] [22] [22] [22] [22] ;
short arr_78 [22] [22] [22] ;
unsigned long long int arr_88 [22] [22] ;
short arr_94 [22] [22] [22] ;
long long int arr_113 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -6100130820666332222LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (short)-20092;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)26471;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2104034067U : 54086175U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3981699739U : 2976912357U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? 10498172336109597852ULL : 8103522401106664879ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 891512607U : 1674269821U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 170605929U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 1601570847U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)31998 : (short)-24796;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)18483;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)21973;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned short)15022;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -8834914764569277549LL : 7161106094315065645LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 5957850631990512143ULL : 7053235044471991858ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = 16781750778144727240ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (short)-22831 : (short)26976;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (unsigned short)65101 : (unsigned short)56303;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)87 : (signed char)-4;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_38 [i_0] = 13740576152826322662ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)16 : (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = 702005814U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)63416 : (unsigned short)41387;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_49 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -1132539099655612834LL : 6277769856607784149LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)16797;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = (short)25970;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_54 [i_0] = (short)23841;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = 3993774478U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_58 [i_0] = 4050723620667049838ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_71 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (short)-27995 : (short)-20489;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_72 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)42664;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_78 [i_0] [i_1] [i_2] = (short)2843;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_88 [i_0] [i_1] = 14613827108582721552ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_94 [i_0] [i_1] [i_2] = (short)-21293;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_113 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -6216402299143902488LL : 8014967806335916740LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
