#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)35;
unsigned short var_1 = (unsigned short)37682;
unsigned int var_2 = 4164225157U;
long long int var_3 = 622836793885041673LL;
unsigned int var_4 = 159587106U;
unsigned long long int var_5 = 5220794463021745214ULL;
signed char var_6 = (signed char)14;
unsigned int var_7 = 1285902668U;
unsigned long long int var_8 = 10656133341397925329ULL;
unsigned char var_9 = (unsigned char)187;
long long int var_10 = 1388170786110068663LL;
int zero = 0;
int var_11 = -1756566609;
long long int var_12 = -1951185200173593409LL;
unsigned int var_13 = 3945846936U;
int var_14 = 1354945096;
unsigned long long int var_15 = 3670488970674016747ULL;
unsigned short var_16 = (unsigned short)4509;
short var_17 = (short)10798;
long long int var_18 = 7423234050484957332LL;
short var_19 = (short)8337;
unsigned int var_20 = 1975532068U;
long long int var_21 = 5823438241799417241LL;
unsigned short var_22 = (unsigned short)11211;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 4190720990U;
unsigned char var_25 = (unsigned char)46;
short var_26 = (short)-10456;
int var_27 = -1973014185;
signed char var_28 = (signed char)55;
unsigned long long int var_29 = 2298882317402051664ULL;
short var_30 = (short)26067;
unsigned long long int var_31 = 16873082764048963307ULL;
short var_32 = (short)-24047;
unsigned int var_33 = 1640590169U;
int var_34 = -1351658229;
unsigned short var_35 = (unsigned short)1060;
long long int var_36 = 3274722668598825311LL;
unsigned long long int var_37 = 8320748816538677372ULL;
long long int var_38 = -2557914921125163780LL;
int var_39 = 1821014738;
unsigned short var_40 = (unsigned short)56258;
long long int var_41 = -3911638785960456194LL;
unsigned int var_42 = 1873598853U;
unsigned char var_43 = (unsigned char)190;
unsigned char var_44 = (unsigned char)134;
unsigned short var_45 = (unsigned short)46401;
unsigned int var_46 = 1546693115U;
unsigned int var_47 = 252114419U;
unsigned int var_48 = 583929160U;
long long int var_49 = -5707853199468078016LL;
unsigned long long int var_50 = 10934737485333932965ULL;
int var_51 = -792129321;
long long int var_52 = 1762822409928313455LL;
unsigned short var_53 = (unsigned short)24365;
unsigned char var_54 = (unsigned char)49;
unsigned long long int var_55 = 3034416835612119186ULL;
unsigned int var_56 = 3973117881U;
_Bool var_57 = (_Bool)0;
unsigned short var_58 = (unsigned short)28695;
int var_59 = 520870039;
unsigned short var_60 = (unsigned short)12977;
unsigned long long int var_61 = 8496377551622414350ULL;
_Bool var_62 = (_Bool)0;
unsigned int var_63 = 1566168517U;
unsigned short var_64 = (unsigned short)44228;
short var_65 = (short)-20805;
unsigned int var_66 = 3747398358U;
unsigned short var_67 = (unsigned short)5352;
unsigned long long int var_68 = 17452514984480837631ULL;
_Bool var_69 = (_Bool)0;
_Bool var_70 = (_Bool)1;
long long int var_71 = -615975063341501508LL;
long long int var_72 = 6754819118588793239LL;
signed char var_73 = (signed char)-92;
unsigned int var_74 = 46738521U;
unsigned int var_75 = 695686837U;
unsigned short var_76 = (unsigned short)40491;
unsigned int var_77 = 2702237540U;
unsigned int var_78 = 2093906884U;
unsigned int var_79 = 2271213839U;
_Bool var_80 = (_Bool)1;
long long int var_81 = 1089202554475375518LL;
short var_82 = (short)-25476;
unsigned int var_83 = 1818389335U;
unsigned int var_84 = 270267575U;
long long int var_85 = 2868190620012702616LL;
unsigned short var_86 = (unsigned short)58686;
unsigned short var_87 = (unsigned short)61753;
unsigned short var_88 = (unsigned short)9717;
unsigned short var_89 = (unsigned short)49240;
_Bool var_90 = (_Bool)0;
unsigned char var_91 = (unsigned char)21;
unsigned int var_92 = 2359629509U;
unsigned short arr_13 [21] ;
short arr_23 [21] ;
unsigned char arr_26 [21] [21] [21] ;
unsigned int arr_34 [21] [21] [21] [21] [21] [21] [21] ;
unsigned short arr_35 [21] [21] [21] [21] ;
int arr_38 [21] [21] [21] ;
_Bool arr_43 [21] ;
long long int arr_44 [21] [21] [21] [21] ;
long long int arr_49 [21] [21] ;
unsigned int arr_58 [21] [21] ;
unsigned int arr_63 [21] [21] [21] [21] [21] [21] ;
unsigned long long int arr_64 [21] ;
unsigned short arr_73 [21] [21] [21] [21] [21] [21] ;
unsigned int arr_77 [21] ;
short arr_85 [22] ;
signed char arr_86 [22] [22] [22] ;
long long int arr_92 [22] [22] ;
unsigned int arr_96 [22] [22] [22] [22] ;
int arr_97 [22] [22] [22] ;
short arr_106 [22] ;
long long int arr_119 [22] [22] ;
long long int arr_126 [22] [22] [22] [22] [22] [22] ;
long long int arr_127 [22] [22] [22] ;
unsigned short arr_130 [22] ;
unsigned char arr_131 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (unsigned short)27419;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (short)13854 : (short)-18937;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)211 : (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? 1485217793U : 2671753255U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)2179 : (unsigned short)64171;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -558618412 : 533421669;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_43 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = 1941450204284319925LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_49 [i_0] [i_1] = -6057788694879867677LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_58 [i_0] [i_1] = 2218082825U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2024201347U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_64 [i_0] = 974380050238698901ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_73 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)29168;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_77 [i_0] = 3571152229U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_85 [i_0] = (i_0 % 2 == 0) ? (short)-11808 : (short)-30653;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_86 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-121 : (signed char)-26;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_92 [i_0] [i_1] = (i_1 % 2 == 0) ? 1704102795750001827LL : -4385633932654334071LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_96 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2794674026U : 2764635073U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_97 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -218610327 : -776272946;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_106 [i_0] = (i_0 % 2 == 0) ? (short)-20973 : (short)-9479;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_119 [i_0] [i_1] = (i_1 % 2 == 0) ? 6871946691941699036LL : -9153568661881582662LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_126 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 2111996468871010062LL : -7049828540936804428LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_127 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1034567494858075379LL : 3257285117957153285LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_130 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14297 : (unsigned short)43313;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_131 [i_0] [i_1] = (unsigned char)39;
}

void checksum() {
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_44 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_49 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_58 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_64 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_73 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_77 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_85 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_86 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_92 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_96 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_97 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_106 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_119 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            hash(&seed, arr_126 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_127 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_130 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_131 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
