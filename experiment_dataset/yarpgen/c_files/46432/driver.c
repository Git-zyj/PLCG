#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-123;
unsigned int var_1 = 3953873008U;
unsigned char var_2 = (unsigned char)209;
unsigned int var_3 = 4273670404U;
unsigned long long int var_4 = 13005122056697816091ULL;
unsigned int var_5 = 1407373937U;
unsigned int var_6 = 3734267085U;
unsigned short var_7 = (unsigned short)38682;
signed char var_8 = (signed char)38;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)3217;
unsigned long long int var_12 = 2959306316334208443ULL;
int var_13 = -1567498746;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-5;
unsigned short var_16 = (unsigned short)27997;
unsigned int var_17 = 2382076448U;
unsigned char var_18 = (unsigned char)154;
long long int var_19 = 982466865322300404LL;
int zero = 0;
unsigned short var_20 = (unsigned short)40031;
unsigned char var_21 = (unsigned char)117;
unsigned int var_22 = 2890327505U;
unsigned short var_23 = (unsigned short)24639;
long long int var_24 = 6589407401311111313LL;
unsigned char var_25 = (unsigned char)210;
unsigned char var_26 = (unsigned char)56;
unsigned short var_27 = (unsigned short)7533;
unsigned int var_28 = 879358751U;
int var_29 = -320120174;
unsigned char var_30 = (unsigned char)105;
_Bool var_31 = (_Bool)1;
unsigned long long int var_32 = 15545423326569448441ULL;
unsigned char var_33 = (unsigned char)182;
short var_34 = (short)-11221;
unsigned int var_35 = 1409896246U;
int var_36 = -57210351;
unsigned short var_37 = (unsigned short)29138;
signed char var_38 = (signed char)-14;
_Bool var_39 = (_Bool)0;
unsigned int var_40 = 1110564955U;
int var_41 = -2134445887;
signed char var_42 = (signed char)-103;
_Bool var_43 = (_Bool)0;
unsigned short var_44 = (unsigned short)45492;
signed char var_45 = (signed char)92;
short var_46 = (short)25294;
_Bool var_47 = (_Bool)0;
_Bool var_48 = (_Bool)0;
unsigned char var_49 = (unsigned char)31;
long long int var_50 = 1173138803636315972LL;
signed char var_51 = (signed char)24;
unsigned int var_52 = 3273395294U;
unsigned short var_53 = (unsigned short)33040;
_Bool var_54 = (_Bool)1;
unsigned int var_55 = 2880502196U;
unsigned short var_56 = (unsigned short)45497;
int var_57 = -142178570;
unsigned int var_58 = 3113300049U;
long long int var_59 = 5215301201396195082LL;
unsigned int var_60 = 3224839026U;
unsigned short var_61 = (unsigned short)65433;
int var_62 = 1106178878;
signed char var_63 = (signed char)112;
short var_64 = (short)-32149;
unsigned int var_65 = 1460326035U;
short var_66 = (short)-28087;
_Bool var_67 = (_Bool)0;
long long int var_68 = 7595286303359724855LL;
unsigned int var_69 = 1600578256U;
signed char var_70 = (signed char)-38;
unsigned int var_71 = 1537233225U;
unsigned int var_72 = 3159459665U;
long long int var_73 = -9067186209866878658LL;
unsigned short var_74 = (unsigned short)29761;
unsigned short var_75 = (unsigned short)42670;
unsigned short var_76 = (unsigned short)7432;
unsigned char var_77 = (unsigned char)91;
unsigned int var_78 = 2746459990U;
long long int var_79 = -3409752654616130834LL;
unsigned short var_80 = (unsigned short)27632;
unsigned long long int var_81 = 13205693921755398935ULL;
unsigned int var_82 = 748579692U;
unsigned short var_83 = (unsigned short)12569;
unsigned int var_84 = 560751789U;
int var_85 = -1537561721;
long long int var_86 = -9103336146946254639LL;
unsigned short var_87 = (unsigned short)52755;
long long int var_88 = -81230250485077293LL;
unsigned short var_89 = (unsigned short)51257;
unsigned int var_90 = 851653161U;
unsigned int var_91 = 282554896U;
unsigned short var_92 = (unsigned short)35458;
_Bool var_93 = (_Bool)0;
int var_94 = -1747438104;
unsigned short var_95 = (unsigned short)32175;
signed char var_96 = (signed char)-68;
unsigned short var_97 = (unsigned short)55966;
signed char var_98 = (signed char)49;
int var_99 = 1096195721;
signed char var_100 = (signed char)-95;
short arr_7 [24] [24] [24] ;
unsigned short arr_26 [24] ;
signed char arr_31 [24] [24] ;
unsigned short arr_34 [24] ;
unsigned char arr_35 [24] [24] ;
int arr_58 [24] [24] [24] ;
short arr_65 [12] [12] ;
int arr_72 [12] [12] ;
unsigned int arr_82 [12] ;
_Bool arr_89 [12] ;
_Bool arr_90 [12] ;
short arr_96 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)4502 : (short)8209;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = (unsigned short)27357;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_31 [i_0] [i_1] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_34 [i_0] = (unsigned short)8298;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_35 [i_0] [i_1] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_58 [i_0] [i_1] [i_2] = -1136635559;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_65 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)26298 : (short)15399;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_72 [i_0] [i_1] = (i_1 % 2 == 0) ? -1446198351 : -892003078;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_82 [i_0] = 3487372116U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_89 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_90 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_96 [i_0] = (i_0 % 2 == 0) ? (short)32564 : (short)-11230;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_58 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_65 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_72 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_82 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_89 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_90 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_96 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
