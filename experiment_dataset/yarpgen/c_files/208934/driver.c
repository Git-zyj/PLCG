#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 667283271U;
signed char var_2 = (signed char)-87;
unsigned short var_3 = (unsigned short)10846;
long long int var_4 = 819243425291517572LL;
unsigned int var_5 = 1768066260U;
long long int var_6 = -3377932688131079306LL;
unsigned int var_7 = 2073055697U;
unsigned short var_8 = (unsigned short)50471;
unsigned short var_9 = (unsigned short)49704;
unsigned char var_10 = (unsigned char)156;
long long int var_11 = 3360099298738840588LL;
int var_12 = -296448128;
int zero = 0;
int var_13 = -1993137975;
short var_14 = (short)-21747;
unsigned short var_15 = (unsigned short)46962;
unsigned int var_16 = 1856674629U;
signed char var_17 = (signed char)-29;
unsigned char var_18 = (unsigned char)241;
unsigned short var_19 = (unsigned short)9645;
unsigned int var_20 = 1447967958U;
unsigned long long int var_21 = 11528389274942947992ULL;
unsigned long long int var_22 = 16237046324248326132ULL;
unsigned long long int var_23 = 9157895347940743488ULL;
unsigned short var_24 = (unsigned short)14619;
short var_25 = (short)32519;
short var_26 = (short)-21532;
unsigned short var_27 = (unsigned short)21501;
int var_28 = -2056346739;
unsigned short var_29 = (unsigned short)12737;
unsigned int var_30 = 2735606320U;
unsigned short var_31 = (unsigned short)18851;
long long int var_32 = 1039746912072908991LL;
short var_33 = (short)446;
long long int var_34 = 7091542653048758707LL;
unsigned char var_35 = (unsigned char)74;
unsigned char var_36 = (unsigned char)165;
short var_37 = (short)6636;
int var_38 = -1281527805;
int var_39 = 822622589;
unsigned char var_40 = (unsigned char)9;
unsigned short var_41 = (unsigned short)17758;
short var_42 = (short)665;
int var_43 = -1179080615;
unsigned short var_44 = (unsigned short)7410;
unsigned long long int var_45 = 7125226766408236579ULL;
unsigned long long int var_46 = 12341452771848917996ULL;
unsigned long long int var_47 = 8976434068311783133ULL;
unsigned long long int var_48 = 12560743635636644028ULL;
_Bool var_49 = (_Bool)1;
signed char var_50 = (signed char)12;
unsigned int var_51 = 4014086726U;
unsigned long long int var_52 = 14451054192526583909ULL;
short var_53 = (short)6914;
unsigned char var_54 = (unsigned char)201;
unsigned short var_55 = (unsigned short)41724;
unsigned char var_56 = (unsigned char)99;
unsigned short var_57 = (unsigned short)16094;
short var_58 = (short)-25478;
int var_59 = 1285777583;
long long int var_60 = -8286169935142854260LL;
unsigned long long int var_61 = 2124588274050129365ULL;
unsigned short var_62 = (unsigned short)65341;
unsigned char var_63 = (unsigned char)190;
short var_64 = (short)-22322;
long long int var_65 = 4346425890616742920LL;
unsigned long long int var_66 = 12634554657284270084ULL;
unsigned char var_67 = (unsigned char)208;
long long int var_68 = -834738312395584660LL;
unsigned short var_69 = (unsigned short)36396;
long long int var_70 = -3462270950500629646LL;
short var_71 = (short)-23453;
short var_72 = (short)30015;
unsigned short var_73 = (unsigned short)1337;
unsigned short var_74 = (unsigned short)38189;
short var_75 = (short)-15493;
unsigned short var_76 = (unsigned short)42253;
short var_77 = (short)-23119;
unsigned short var_78 = (unsigned short)63964;
long long int var_79 = 4181015089791643115LL;
unsigned short var_80 = (unsigned short)34275;
unsigned short var_81 = (unsigned short)48382;
unsigned long long int var_82 = 6903359522236349379ULL;
long long int var_83 = -8471992629785522351LL;
long long int var_84 = 4588524255793637490LL;
unsigned int var_85 = 3768690476U;
short var_86 = (short)16539;
short var_87 = (short)647;
unsigned long long int var_88 = 18164912744525531757ULL;
long long int arr_0 [21] ;
unsigned int arr_1 [21] [21] ;
unsigned long long int arr_3 [21] ;
unsigned char arr_4 [21] ;
long long int arr_5 [21] ;
unsigned char arr_6 [21] ;
unsigned char arr_8 [21] [21] ;
_Bool arr_9 [21] [21] [21] [21] [21] [21] ;
unsigned char arr_10 [21] [21] [21] [21] [21] ;
unsigned short arr_11 [21] [21] [21] [21] [21] ;
long long int arr_12 [21] [21] [21] [21] ;
unsigned short arr_13 [21] [21] [21] [21] ;
unsigned char arr_14 [21] [21] [21] [21] [21] ;
unsigned int arr_15 [21] [21] [21] [21] [21] ;
unsigned int arr_17 [17] ;
unsigned short arr_18 [17] ;
short arr_19 [17] ;
int arr_21 [17] [17] ;
short arr_22 [17] [17] ;
_Bool arr_24 [17] [17] [17] ;
unsigned char arr_25 [17] ;
unsigned long long int arr_26 [17] [17] [17] [17] ;
long long int arr_28 [17] [17] [17] [17] [17] [17] [17] ;
long long int arr_30 [17] ;
unsigned long long int arr_31 [17] [17] ;
long long int arr_32 [17] [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_33 [17] [17] [17] [17] [17] ;
_Bool arr_34 [17] [17] ;
short arr_35 [17] [17] [17] [17] [17] [17] ;
unsigned short arr_37 [17] [17] [17] ;
unsigned short arr_46 [17] [17] [17] [17] [17] ;
unsigned int arr_47 [17] [17] [17] [17] ;
unsigned int arr_48 [17] [17] [17] [17] [17] [17] ;
short arr_51 [17] [17] [17] ;
unsigned short arr_62 [17] [17] [17] [17] [17] ;
unsigned long long int arr_64 [17] [17] [17] [17] [17] [17] ;
signed char arr_69 [17] [17] [17] [17] [17] ;
_Bool arr_77 [17] [17] [17] [17] [17] ;
long long int arr_81 [17] [17] [17] [17] ;
unsigned long long int arr_83 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 6230530245207361022LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 723038841U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 8439941857886692358ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -671588292992352862LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)30636;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -1222836573369807124LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)56580 : (unsigned short)61139;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned char)69 : (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 3943220201U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = 4079893570U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (unsigned short)31992;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (short)5628;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_21 [i_0] [i_1] = -6842728;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_22 [i_0] [i_1] = (short)16964;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_25 [i_0] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = 13832317373024042867ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -6866467460266639948LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_30 [i_0] = 4273432978241100417LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_31 [i_0] [i_1] = (i_0 % 2 == 0) ? 798573384376477190ULL : 1500303855713504116ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 6549615647400216802LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = 1389671135935211487ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_34 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)11610;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (unsigned short)7963;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)28895;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = 2087274800U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4049381804U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = (short)-4605;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_62 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)24587;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_64 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 10074919267662980395ULL : 10633572238664900292ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_69 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (signed char)53 : (signed char)83;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_77 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_81 [i_0] [i_1] [i_2] [i_3] = -5386621144712644077LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_83 [i_0] = (i_0 % 2 == 0) ? 16563022262899556313ULL : 3964759165295428438ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
