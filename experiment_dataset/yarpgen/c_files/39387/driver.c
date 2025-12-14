#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31545;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-126;
unsigned int var_3 = 3532665390U;
unsigned short var_4 = (unsigned short)32400;
int var_5 = 2045006638;
unsigned long long int var_6 = 5782030064886911305ULL;
short var_7 = (short)9889;
long long int var_9 = -6665010127592483011LL;
unsigned int var_10 = 509421504U;
long long int var_11 = 4492814187625359833LL;
unsigned short var_12 = (unsigned short)37419;
unsigned short var_13 = (unsigned short)3727;
unsigned int var_14 = 2976416945U;
short var_16 = (short)4208;
short var_17 = (short)-1041;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
long long int var_21 = -4250130060061408294LL;
int var_22 = -596814911;
short var_23 = (short)7355;
long long int var_24 = -267510954007575560LL;
short var_25 = (short)13526;
short var_26 = (short)23524;
short var_27 = (short)-31382;
unsigned short var_28 = (unsigned short)10535;
unsigned short var_29 = (unsigned short)26759;
unsigned long long int var_30 = 4953842176048509659ULL;
signed char var_31 = (signed char)-88;
unsigned int var_32 = 544681812U;
short var_33 = (short)-14601;
signed char var_34 = (signed char)29;
long long int var_35 = -8852336978129639235LL;
short var_36 = (short)24875;
long long int var_37 = 21232210369936251LL;
unsigned short var_38 = (unsigned short)55159;
unsigned char var_39 = (unsigned char)99;
short var_40 = (short)3041;
unsigned long long int var_41 = 17832971912793148079ULL;
short var_42 = (short)-29844;
unsigned long long int var_43 = 3336386586020059782ULL;
_Bool var_44 = (_Bool)0;
unsigned short var_45 = (unsigned short)21546;
unsigned long long int var_46 = 15799072354842831703ULL;
short var_47 = (short)29443;
short var_48 = (short)3892;
unsigned long long int var_49 = 17105586239526721509ULL;
_Bool var_50 = (_Bool)1;
_Bool var_51 = (_Bool)1;
unsigned short var_52 = (unsigned short)52218;
int var_53 = 2117702845;
short var_54 = (short)3971;
unsigned short var_55 = (unsigned short)9569;
short var_56 = (short)-26293;
signed char var_57 = (signed char)-106;
unsigned char var_58 = (unsigned char)26;
short var_59 = (short)16412;
long long int var_60 = -8911328933745288979LL;
short var_61 = (short)-29705;
_Bool var_62 = (_Bool)1;
unsigned short var_63 = (unsigned short)2481;
_Bool var_64 = (_Bool)0;
_Bool var_65 = (_Bool)0;
_Bool var_66 = (_Bool)1;
long long int var_67 = -7591023758230173878LL;
short var_68 = (short)9204;
short var_69 = (short)28289;
long long int var_70 = -5261183664363680730LL;
unsigned long long int var_71 = 7585006781670076403ULL;
int var_72 = 1060146332;
unsigned char var_73 = (unsigned char)190;
unsigned long long int var_74 = 4399825868431781647ULL;
short var_75 = (short)8751;
long long int var_76 = -382724619884590651LL;
long long int arr_0 [25] ;
short arr_1 [25] ;
long long int arr_2 [25] [25] ;
int arr_4 [25] [25] [25] [25] ;
short arr_5 [25] ;
_Bool arr_7 [25] [25] [25] [25] [25] [25] ;
signed char arr_8 [25] ;
short arr_9 [25] [25] [25] [25] ;
long long int arr_11 [25] [25] ;
long long int arr_13 [25] [25] [25] [25] ;
signed char arr_14 [25] ;
unsigned short arr_16 [25] [25] [25] [25] [25] ;
_Bool arr_18 [25] [25] [25] [25] [25] ;
long long int arr_19 [25] [25] [25] [25] ;
_Bool arr_20 [25] ;
_Bool arr_23 [25] ;
int arr_24 [25] ;
unsigned short arr_26 [25] [25] ;
unsigned long long int arr_34 [25] [25] [25] [25] ;
short arr_37 [25] [25] [25] ;
_Bool arr_48 [15] [15] ;
int arr_52 [15] [15] [15] [15] ;
unsigned long long int arr_57 [15] [15] [15] ;
unsigned int arr_58 [15] [15] [15] ;
long long int arr_60 [15] [15] ;
unsigned short arr_72 [15] [15] [15] [15] [15] [15] [15] ;
short arr_74 [15] ;
short arr_15 [25] [25] [25] [25] [25] [25] ;
_Bool arr_28 [25] ;
unsigned short arr_39 [25] ;
long long int arr_50 [15] ;
long long int arr_73 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -9169954701535832074LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)-13154;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -4913817508231262868LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = -1616701891;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)30722;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-2550;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = 7567887564812756393LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = -3820205409004686727LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)30463;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = -3067194282813911708LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = -349501797;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned short)2293;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = 18231584807858077106ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (short)-17626;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_48 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = -178073379;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = 876992762912842731ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_58 [i_0] [i_1] [i_2] = 2388867675U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_60 [i_0] [i_1] = 3103263554340267173LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_72 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)11764;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_74 [i_0] = (short)32600;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-358;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_39 [i_0] = (unsigned short)10275;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_50 [i_0] = (i_0 % 2 == 0) ? -1852280561470304745LL : -5464292994650915442LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_73 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4801865478818001880LL : -8933624553986269975LL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_73 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
