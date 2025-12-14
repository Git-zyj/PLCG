#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
signed char var_1 = (signed char)-90;
signed char var_2 = (signed char)87;
unsigned long long int var_3 = 16636517045102235077ULL;
_Bool var_4 = (_Bool)1;
long long int var_5 = -5679352767471467824LL;
signed char var_6 = (signed char)24;
unsigned short var_8 = (unsigned short)35598;
unsigned long long int var_9 = 13420283953276149405ULL;
unsigned char var_10 = (unsigned char)91;
int zero = 0;
int var_11 = 1799366611;
int var_12 = -144583515;
unsigned long long int var_13 = 12570451066845316880ULL;
unsigned char var_14 = (unsigned char)176;
int var_15 = 474773134;
unsigned short var_16 = (unsigned short)15223;
signed char var_17 = (signed char)2;
unsigned int var_18 = 560828112U;
unsigned long long int var_19 = 9003787458724374691ULL;
long long int var_20 = -7324094047761708707LL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)82;
int var_23 = 569930513;
int var_24 = -1842415804;
long long int var_25 = -703859572897573725LL;
signed char var_26 = (signed char)126;
unsigned int var_27 = 553441594U;
int var_28 = 679349801;
int var_29 = -627264944;
unsigned long long int var_30 = 17756251875281775265ULL;
long long int var_31 = -1692503378163023407LL;
signed char var_32 = (signed char)32;
unsigned char var_33 = (unsigned char)92;
long long int var_34 = 2564935240452608004LL;
unsigned long long int var_35 = 16946550000905084814ULL;
long long int var_36 = -7861987824047268135LL;
signed char var_37 = (signed char)-90;
_Bool var_38 = (_Bool)1;
unsigned short var_39 = (unsigned short)9732;
unsigned char var_40 = (unsigned char)160;
unsigned char var_41 = (unsigned char)90;
unsigned long long int var_42 = 15261591940299473964ULL;
unsigned long long int var_43 = 114890707193112262ULL;
long long int var_44 = 2326209361651224615LL;
signed char var_45 = (signed char)-58;
unsigned int var_46 = 2271584535U;
unsigned long long int var_47 = 9478473262866016818ULL;
short var_48 = (short)-1712;
long long int var_49 = 1066715908555826811LL;
signed char var_50 = (signed char)63;
int var_51 = -398309096;
_Bool var_52 = (_Bool)1;
int var_53 = 2114803459;
unsigned long long int var_54 = 4367153748350048747ULL;
long long int var_55 = -7659341367794153473LL;
long long int var_56 = 6761685561907504915LL;
unsigned int var_57 = 2267283642U;
int var_58 = -2142454498;
unsigned char var_59 = (unsigned char)96;
long long int var_60 = 5545646836342187428LL;
short var_61 = (short)-11566;
short var_62 = (short)10496;
_Bool var_63 = (_Bool)0;
signed char var_64 = (signed char)-58;
signed char var_65 = (signed char)19;
_Bool var_66 = (_Bool)1;
unsigned char var_67 = (unsigned char)148;
unsigned long long int var_68 = 10787669615874026451ULL;
signed char var_69 = (signed char)41;
unsigned short var_70 = (unsigned short)35366;
long long int var_71 = 4347263390086680285LL;
signed char var_72 = (signed char)-92;
unsigned short var_73 = (unsigned short)42653;
signed char var_74 = (signed char)-126;
unsigned int var_75 = 686525204U;
signed char var_76 = (signed char)103;
unsigned long long int var_77 = 17298543746068653180ULL;
unsigned char var_78 = (unsigned char)95;
long long int arr_0 [19] ;
int arr_3 [19] ;
_Bool arr_4 [11] ;
unsigned char arr_5 [11] ;
int arr_6 [11] ;
unsigned long long int arr_7 [11] ;
signed char arr_8 [11] [11] ;
_Bool arr_9 [11] [11] [11] ;
unsigned char arr_10 [11] [11] ;
signed char arr_11 [11] [11] ;
_Bool arr_12 [11] [11] ;
_Bool arr_13 [11] ;
unsigned long long int arr_15 [11] [11] [11] ;
signed char arr_17 [11] [11] ;
unsigned long long int arr_19 [11] [11] ;
unsigned char arr_20 [11] [11] [11] [11] [11] [11] ;
int arr_21 [11] [11] ;
unsigned long long int arr_23 [11] [11] [11] ;
unsigned int arr_24 [11] [11] [11] [11] [11] ;
unsigned char arr_25 [11] [11] [11] ;
signed char arr_29 [11] [11] [11] [11] [11] [11] ;
long long int arr_31 [11] [11] [11] [11] [11] [11] ;
unsigned long long int arr_32 [11] [11] [11] [11] [11] ;
_Bool arr_34 [11] [11] [11] [11] [11] [11] ;
long long int arr_36 [11] [11] [11] [11] ;
unsigned char arr_39 [11] ;
long long int arr_40 [11] [11] [11] [11] [11] ;
unsigned int arr_41 [11] [11] [11] [11] [11] [11] ;
long long int arr_44 [11] [11] [11] [11] [11] [11] [11] ;
unsigned short arr_51 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1405215046380257988LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -1728112384;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 1342632714;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 10828281117782018119ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 6955226132163783998ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_19 [i_0] [i_1] = 16175175337768419300ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_21 [i_0] [i_1] = 1294213078;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 2345995168720965983ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 354817828U : 212256935U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -3690026018927496429LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 13404634657702840797ULL : 16852254103479849609ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = -9191298576249253046LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_39 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = -2090022009630487807LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 799359257U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 6906840822508338349LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)45790 : (unsigned short)11732;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
