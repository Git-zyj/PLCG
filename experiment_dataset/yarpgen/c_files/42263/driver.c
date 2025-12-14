#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7513821905388873298LL;
unsigned short var_1 = (unsigned short)49510;
unsigned long long int var_2 = 3971222836110061523ULL;
long long int var_3 = 3406558060703067350LL;
short var_4 = (short)17278;
unsigned int var_5 = 1791608354U;
unsigned short var_6 = (unsigned short)8672;
int var_7 = -177793385;
unsigned short var_8 = (unsigned short)62269;
unsigned long long int var_10 = 15987886950767682445ULL;
short var_11 = (short)32215;
int zero = 0;
unsigned short var_12 = (unsigned short)64260;
signed char var_13 = (signed char)-15;
int var_14 = 806772082;
unsigned char var_15 = (unsigned char)78;
signed char var_16 = (signed char)66;
unsigned short var_17 = (unsigned short)3514;
unsigned short var_18 = (unsigned short)31416;
unsigned int var_19 = 4250586769U;
long long int var_20 = -8684457655297951685LL;
int var_21 = 238016419;
short var_22 = (short)25043;
unsigned long long int var_23 = 12053636763199849617ULL;
long long int var_24 = 3866624959737931230LL;
_Bool var_25 = (_Bool)0;
int var_26 = 1863862547;
int var_27 = -149657701;
unsigned char var_28 = (unsigned char)236;
unsigned long long int var_29 = 13395338412070637002ULL;
unsigned int var_30 = 179785512U;
unsigned int var_31 = 4003854439U;
unsigned short var_32 = (unsigned short)41024;
unsigned char var_33 = (unsigned char)169;
signed char var_34 = (signed char)117;
long long int var_35 = -8275509859663984188LL;
unsigned long long int var_36 = 2480843071601335523ULL;
int var_37 = 2029548461;
int var_38 = -1567314488;
long long int var_39 = 4195499864900957044LL;
unsigned short var_40 = (unsigned short)34667;
unsigned char var_41 = (unsigned char)247;
unsigned long long int var_42 = 2705779070769629324ULL;
signed char var_43 = (signed char)120;
unsigned long long int var_44 = 918534172786270160ULL;
short var_45 = (short)-15224;
int var_46 = -1099015323;
unsigned short var_47 = (unsigned short)18531;
unsigned int var_48 = 3247725807U;
unsigned short var_49 = (unsigned short)29217;
unsigned int var_50 = 2680724707U;
_Bool var_51 = (_Bool)1;
unsigned short var_52 = (unsigned short)18588;
_Bool var_53 = (_Bool)1;
int var_54 = 48945468;
long long int var_55 = -2496541797558710334LL;
unsigned int var_56 = 1910151433U;
int var_57 = -300877451;
int var_58 = -588988343;
_Bool var_59 = (_Bool)0;
long long int var_60 = -4761534050531464881LL;
short var_61 = (short)-16935;
unsigned long long int var_62 = 16506848092282422650ULL;
long long int var_63 = -4851970146403832228LL;
long long int var_64 = -4402981800012434919LL;
int var_65 = -2101759046;
int var_66 = 271369445;
unsigned char var_67 = (unsigned char)221;
unsigned short var_68 = (unsigned short)10509;
int var_69 = 16018913;
unsigned short var_70 = (unsigned short)3300;
short var_71 = (short)25284;
unsigned short var_72 = (unsigned short)2982;
int var_73 = -205650491;
unsigned short var_74 = (unsigned short)8633;
unsigned short var_75 = (unsigned short)3726;
int var_76 = -981066980;
unsigned int var_77 = 792202724U;
int var_78 = 624969864;
unsigned int var_79 = 744692539U;
int var_80 = 307472391;
unsigned char var_81 = (unsigned char)198;
_Bool var_82 = (_Bool)0;
_Bool var_83 = (_Bool)1;
unsigned int var_84 = 2176864867U;
unsigned char var_85 = (unsigned char)99;
int var_86 = 166565390;
unsigned int var_87 = 1007838331U;
short var_88 = (short)21866;
int var_89 = -1441180968;
unsigned char var_90 = (unsigned char)122;
long long int var_91 = -8345415985623964459LL;
unsigned long long int var_92 = 1793977992486270465ULL;
unsigned short var_93 = (unsigned short)17956;
int var_94 = 1662380378;
short arr_0 [21] ;
long long int arr_1 [21] [21] ;
unsigned char arr_2 [20] ;
unsigned char arr_3 [20] [20] ;
_Bool arr_4 [20] [20] ;
unsigned short arr_6 [20] [20] [20] ;
unsigned long long int arr_7 [20] [20] ;
unsigned short arr_8 [20] [20] ;
unsigned int arr_9 [20] [20] [20] [20] ;
unsigned long long int arr_10 [20] [20] [20] ;
long long int arr_11 [14] [14] ;
short arr_14 [14] [14] ;
unsigned long long int arr_15 [14] [14] ;
long long int arr_16 [14] ;
int arr_18 [14] ;
unsigned short arr_23 [13] ;
long long int arr_24 [13] ;
short arr_25 [13] [13] ;
int arr_26 [13] ;
unsigned int arr_27 [13] [13] [13] ;
int arr_30 [13] [13] [13] [13] ;
unsigned char arr_31 [13] ;
unsigned short arr_32 [13] [13] [13] ;
int arr_36 [13] [13] [13] ;
short arr_43 [13] [13] ;
_Bool arr_45 [13] [13] [13] [13] ;
unsigned short arr_48 [13] [13] [13] [13] [13] [13] [13] ;
int arr_51 [13] [13] [13] ;
int arr_56 [13] [13] [13] [13] [13] [13] ;
unsigned int arr_61 [13] [13] ;
long long int arr_63 [13] [13] [13] ;
long long int arr_65 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-25399;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = -5027899314567182725LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)123 : (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)10102;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 7149329294327873492ULL : 154735313533469745ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)62800;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 704555779U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 2253138579334858804ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = 6763561429029550266LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (short)5573;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = 14878422882621166401ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = 53386615430179697LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = -1590934587;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = (unsigned short)39929;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = 1036795186435242876LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_25 [i_0] [i_1] = (short)976;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_26 [i_0] = 1967964232;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 2557401828U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = -1392257606;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_31 [i_0] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (unsigned short)10926;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1254370553 : -2136820935;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_43 [i_0] [i_1] = (short)-21144;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)35331;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = 870750962;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1088471599;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_61 [i_0] [i_1] = 3727071950U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_63 [i_0] [i_1] [i_2] = 45712261552020420LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_65 [i_0] [i_1] = -5665030033900977496LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
