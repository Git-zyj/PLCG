#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1977852007U;
unsigned int var_1 = 4077953807U;
short var_2 = (short)-16828;
short var_3 = (short)22759;
unsigned char var_4 = (unsigned char)158;
signed char var_5 = (signed char)-118;
unsigned char var_6 = (unsigned char)254;
unsigned short var_7 = (unsigned short)15537;
unsigned char var_8 = (unsigned char)95;
long long int var_9 = -8955774004256905977LL;
short var_10 = (short)-8493;
short var_11 = (short)-13079;
short var_12 = (short)3792;
unsigned char var_13 = (unsigned char)148;
unsigned int var_14 = 2176590265U;
int zero = 0;
short var_15 = (short)5117;
short var_16 = (short)-23727;
int var_17 = -1486622647;
unsigned short var_18 = (unsigned short)62399;
int var_19 = -2118544004;
unsigned int var_20 = 2291265246U;
unsigned int var_21 = 2622984885U;
unsigned long long int var_22 = 3348438170751702061ULL;
unsigned long long int var_23 = 12946976846013768818ULL;
unsigned char var_24 = (unsigned char)54;
signed char var_25 = (signed char)-78;
short var_26 = (short)9433;
signed char var_27 = (signed char)-22;
unsigned short var_28 = (unsigned short)55059;
unsigned short var_29 = (unsigned short)15402;
signed char var_30 = (signed char)41;
int var_31 = 1799183469;
_Bool var_32 = (_Bool)0;
unsigned char var_33 = (unsigned char)25;
short var_34 = (short)5779;
unsigned int var_35 = 1661959259U;
unsigned char var_36 = (unsigned char)125;
unsigned int var_37 = 4269675622U;
_Bool var_38 = (_Bool)1;
int var_39 = 657539164;
signed char var_40 = (signed char)108;
unsigned short var_41 = (unsigned short)31483;
unsigned short var_42 = (unsigned short)39620;
unsigned short var_43 = (unsigned short)48442;
unsigned short var_44 = (unsigned short)40089;
unsigned char var_45 = (unsigned char)229;
unsigned short var_46 = (unsigned short)54580;
unsigned short var_47 = (unsigned short)53862;
unsigned long long int var_48 = 2457723309258120854ULL;
unsigned int var_49 = 1436755901U;
_Bool var_50 = (_Bool)0;
_Bool var_51 = (_Bool)1;
unsigned short var_52 = (unsigned short)34246;
long long int var_53 = 3184914368161347996LL;
unsigned long long int var_54 = 8472019253934820255ULL;
signed char var_55 = (signed char)-57;
long long int var_56 = 9031955882611568130LL;
unsigned char var_57 = (unsigned char)228;
unsigned short var_58 = (unsigned short)2672;
short var_59 = (short)5755;
short var_60 = (short)-25055;
unsigned int var_61 = 2440939078U;
unsigned int var_62 = 4154850027U;
short var_63 = (short)-25925;
_Bool var_64 = (_Bool)1;
long long int var_65 = 1421080648593948718LL;
_Bool var_66 = (_Bool)0;
long long int var_67 = -7306407486787576320LL;
signed char var_68 = (signed char)116;
unsigned char var_69 = (unsigned char)109;
unsigned int var_70 = 3466504379U;
unsigned char var_71 = (unsigned char)9;
unsigned char var_72 = (unsigned char)60;
unsigned short var_73 = (unsigned short)14866;
_Bool var_74 = (_Bool)1;
unsigned short var_75 = (unsigned short)45579;
signed char var_76 = (signed char)-32;
long long int var_77 = 8496408899708789094LL;
unsigned int var_78 = 1393839741U;
short var_79 = (short)9687;
signed char var_80 = (signed char)-39;
unsigned short var_81 = (unsigned short)52692;
int var_82 = -1574500456;
short var_83 = (short)-30444;
unsigned short var_84 = (unsigned short)27563;
int var_85 = -422095570;
unsigned short var_86 = (unsigned short)28881;
long long int var_87 = -4781016248241622257LL;
unsigned char var_88 = (unsigned char)55;
signed char var_89 = (signed char)80;
unsigned int var_90 = 3629847998U;
short var_91 = (short)20208;
unsigned short var_92 = (unsigned short)36284;
unsigned long long int var_93 = 17978304474519650370ULL;
short var_94 = (short)-14057;
unsigned int var_95 = 1971301858U;
int var_96 = -553598408;
int var_97 = 92360105;
_Bool var_98 = (_Bool)0;
long long int var_99 = 7753216355574276835LL;
int var_100 = -1253031385;
unsigned int var_101 = 1164411318U;
unsigned short var_102 = (unsigned short)47139;
int var_103 = -1241023219;
unsigned int var_104 = 1418750326U;
signed char var_105 = (signed char)-106;
signed char arr_0 [16] ;
unsigned long long int arr_1 [16] [16] ;
int arr_2 [16] [16] ;
unsigned short arr_3 [16] ;
unsigned char arr_4 [16] [16] ;
unsigned char arr_6 [16] [16] ;
unsigned long long int arr_7 [16] [16] [16] ;
_Bool arr_8 [16] [16] ;
_Bool arr_9 [16] [16] ;
short arr_11 [16] [16] [16] ;
long long int arr_12 [16] ;
unsigned long long int arr_13 [16] ;
signed char arr_15 [16] ;
short arr_16 [16] [16] ;
unsigned short arr_18 [16] ;
int arr_19 [16] ;
signed char arr_20 [16] ;
unsigned int arr_21 [16] ;
unsigned int arr_23 [16] ;
unsigned short arr_25 [16] [16] [16] ;
short arr_27 [16] ;
unsigned char arr_29 [16] [16] [16] ;
unsigned char arr_30 [16] [16] ;
unsigned short arr_31 [16] ;
unsigned long long int arr_32 [16] [16] ;
unsigned char arr_33 [16] [16] [16] [16] ;
unsigned int arr_34 [16] [16] [16] ;
_Bool arr_39 [16] [16] [16] ;
signed char arr_40 [16] [16] [16] [16] ;
unsigned short arr_41 [16] [16] [16] [16] ;
int arr_45 [16] [16] [16] ;
unsigned char arr_50 [16] [16] [16] [16] [16] [16] ;
_Bool arr_54 [16] [16] [16] [16] [16] [16] ;
unsigned short arr_59 [16] [16] [16] [16] [16] [16] [16] ;
short arr_63 [16] [16] [16] [16] ;
unsigned int arr_64 [16] ;
unsigned int arr_65 [16] [16] [16] [16] ;
int arr_73 [16] [16] ;
unsigned int arr_76 [16] [16] [16] ;
short arr_77 [16] ;
unsigned short arr_89 [16] [16] [16] [16] ;
_Bool arr_91 [16] [16] [16] [16] ;
short arr_98 [16] [16] [16] [16] [16] [16] ;
short arr_102 [16] [16] ;
unsigned short arr_5 [16] [16] ;
long long int arr_26 [16] [16] ;
unsigned int arr_43 [16] ;
signed char arr_66 [16] [16] [16] [16] ;
_Bool arr_99 [16] [16] [16] [16] [16] ;
unsigned char arr_104 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 5967067995121779245ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = -1247881309;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)59185;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 8467061782303930129ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)-29009;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = -6236546194598274672LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = 16655735166309489795ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = (short)8808;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = (unsigned short)7231;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = 688508646;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = 4152486130U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = 4270148569U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned short)1957;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = (short)-27620;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_31 [i_0] = (unsigned short)26182;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_32 [i_0] [i_1] = 10721829816288341148ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 4229659966U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)16760 : (unsigned short)22601;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = -428390338;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned char)194 : (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)20576;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_63 [i_0] [i_1] [i_2] [i_3] = (short)-582;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_64 [i_0] = (i_0 % 2 == 0) ? 1090522738U : 2563729184U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_65 [i_0] [i_1] [i_2] [i_3] = 3714894921U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_73 [i_0] [i_1] = -1541106153;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_76 [i_0] [i_1] [i_2] = 2121339547U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_77 [i_0] = (short)-2209;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_89 [i_0] [i_1] [i_2] [i_3] = (unsigned short)24229;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_91 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_98 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-21795;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_102 [i_0] [i_1] = (short)-10416;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)52113;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_26 [i_0] [i_1] = 6562800947153928754LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? 2075121745U : 2850188507U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_66 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-76 : (signed char)-13;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_99 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_104 [i_0] [i_1] [i_2] [i_3] = (unsigned char)150;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_66 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_99 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_104 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
