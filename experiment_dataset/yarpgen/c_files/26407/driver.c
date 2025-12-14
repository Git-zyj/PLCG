#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)214;
unsigned char var_2 = (unsigned char)191;
int var_3 = 953882829;
unsigned char var_4 = (unsigned char)37;
unsigned int var_5 = 4057953306U;
unsigned long long int var_6 = 14000909191605647592ULL;
int var_7 = -741943224;
unsigned char var_8 = (unsigned char)151;
int var_9 = 312561973;
unsigned char var_10 = (unsigned char)89;
unsigned long long int var_11 = 4717447944847184539ULL;
signed char var_12 = (signed char)33;
int zero = 0;
signed char var_13 = (signed char)69;
short var_14 = (short)-15656;
short var_15 = (short)-2745;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)247;
signed char var_18 = (signed char)-122;
unsigned int var_19 = 693779721U;
unsigned int var_20 = 3096451603U;
int var_21 = 1819330541;
unsigned int var_22 = 2915993515U;
unsigned long long int var_23 = 13590097648795960387ULL;
signed char var_24 = (signed char)80;
int var_25 = 719380651;
long long int var_26 = 365503172157483359LL;
int var_27 = -1168341164;
signed char var_28 = (signed char)-46;
signed char var_29 = (signed char)38;
long long int var_30 = 7831846255282008136LL;
_Bool var_31 = (_Bool)0;
int var_32 = 1993543754;
int var_33 = -192697910;
unsigned long long int var_34 = 455391200784642310ULL;
_Bool var_35 = (_Bool)1;
_Bool var_36 = (_Bool)1;
unsigned char var_37 = (unsigned char)231;
unsigned short var_38 = (unsigned short)31020;
long long int var_39 = 632317944976783299LL;
unsigned char var_40 = (unsigned char)241;
unsigned long long int var_41 = 11544600872882032905ULL;
int var_42 = 711843720;
unsigned long long int var_43 = 3482467145400930180ULL;
unsigned short var_44 = (unsigned short)7114;
short var_45 = (short)-26717;
unsigned short var_46 = (unsigned short)48933;
long long int var_47 = 717977991705443225LL;
short var_48 = (short)22716;
signed char var_49 = (signed char)-13;
signed char var_50 = (signed char)-71;
int var_51 = 1558077341;
_Bool var_52 = (_Bool)0;
long long int var_53 = -6690235284441230095LL;
signed char var_54 = (signed char)44;
_Bool var_55 = (_Bool)0;
long long int var_56 = -526034963420080025LL;
unsigned int var_57 = 3817572511U;
unsigned long long int var_58 = 15928038323266537395ULL;
unsigned long long int var_59 = 3782570418512404447ULL;
long long int var_60 = -7859427595830764126LL;
long long int var_61 = 3288707164863499199LL;
unsigned long long int var_62 = 8059128449137643836ULL;
unsigned char var_63 = (unsigned char)55;
_Bool var_64 = (_Bool)1;
unsigned int var_65 = 315766908U;
short var_66 = (short)3273;
long long int var_67 = -8672437350785890285LL;
unsigned int var_68 = 3755875626U;
unsigned long long int var_69 = 2656793774034718978ULL;
unsigned long long int var_70 = 8964467453625582000ULL;
unsigned long long int var_71 = 12344707393894121470ULL;
int var_72 = 1453086697;
int var_73 = -518421767;
unsigned char var_74 = (unsigned char)74;
short var_75 = (short)-8028;
long long int var_76 = -6391122397805573668LL;
long long int var_77 = -8186404683455973327LL;
short var_78 = (short)18004;
unsigned char var_79 = (unsigned char)17;
unsigned char var_80 = (unsigned char)159;
int var_81 = 286884990;
unsigned long long int var_82 = 6970665271754486742ULL;
unsigned char var_83 = (unsigned char)123;
int var_84 = 842136951;
signed char var_85 = (signed char)82;
signed char var_86 = (signed char)-42;
unsigned int var_87 = 4193409540U;
unsigned long long int var_88 = 9048941382316891528ULL;
_Bool var_89 = (_Bool)0;
long long int arr_0 [16] [16] ;
unsigned long long int arr_1 [16] ;
long long int arr_2 [16] ;
unsigned short arr_3 [16] [16] ;
int arr_4 [16] ;
signed char arr_5 [16] [16] [16] ;
unsigned int arr_6 [16] [16] [16] [16] ;
unsigned long long int arr_7 [16] [16] [16] [16] ;
unsigned short arr_8 [16] [16] [16] ;
_Bool arr_9 [16] [16] [16] [16] [16] [16] [16] ;
unsigned long long int arr_10 [16] [16] [16] [16] [16] [16] ;
unsigned long long int arr_12 [16] [16] [16] [16] [16] ;
int arr_13 [16] [16] ;
int arr_14 [16] [16] [16] [16] [16] [16] ;
short arr_15 [16] [16] [16] ;
int arr_25 [16] [16] [16] [16] [16] ;
unsigned char arr_26 [16] ;
int arr_28 [16] [16] [16] ;
short arr_32 [16] [16] ;
unsigned long long int arr_33 [16] ;
unsigned long long int arr_36 [16] ;
int arr_37 [16] [16] [16] ;
unsigned long long int arr_38 [16] [16] [16] [16] ;
long long int arr_40 [16] ;
int arr_41 [16] [16] [16] ;
long long int arr_48 [16] ;
unsigned char arr_49 [16] [16] [16] [16] [16] ;
signed char arr_52 [16] [16] ;
unsigned short arr_55 [16] [16] [16] [16] ;
short arr_58 [16] [16] [16] [16] [16] ;
unsigned int arr_66 [10] [10] [10] ;
signed char arr_67 [10] [10] [10] ;
int arr_70 [24] ;
int arr_71 [24] [24] ;
long long int arr_72 [24] ;
long long int arr_73 [24] [24] ;
unsigned short arr_74 [24] [24] ;
unsigned long long int arr_75 [24] ;
unsigned int arr_76 [24] ;
unsigned long long int arr_79 [24] [24] [24] ;
long long int arr_80 [24] ;
int arr_81 [24] ;
unsigned char arr_82 [24] [24] [24] [24] [24] [24] ;
_Bool arr_83 [24] [24] ;
signed char arr_84 [24] [24] [24] ;
int arr_85 [24] [24] [24] [24] [24] [24] ;
unsigned long long int arr_86 [24] [24] [24] [24] [24] ;
int arr_88 [24] [24] [24] [24] ;
unsigned long long int arr_89 [24] [24] ;
int arr_90 [24] [24] [24] [24] [24] ;
unsigned short arr_92 [24] [24] [24] [24] ;
signed char arr_94 [24] [24] [24] [24] ;
int arr_95 [24] [24] [24] ;
unsigned short arr_99 [24] [24] ;
unsigned long long int arr_101 [24] [24] [24] ;
long long int arr_102 [24] [24] [24] ;
unsigned long long int arr_104 [24] [24] [24] [24] [24] [24] ;
unsigned int arr_106 [24] [24] [24] [24] [24] [24] ;
long long int arr_114 [13] [13] [13] ;
unsigned int arr_118 [13] [13] [13] ;
_Bool arr_123 [13] [13] ;
long long int arr_127 [13] [13] [13] [13] [13] [13] ;
short arr_147 [10] [10] [10] ;
short arr_151 [10] [10] [10] ;
unsigned short arr_172 [10] [10] [10] [10] [10] [10] [10] ;
unsigned int arr_11 [16] [16] [16] [16] [16] ;
int arr_16 [16] [16] ;
int arr_17 [16] ;
unsigned int arr_18 [16] [16] [16] [16] [16] [16] ;
int arr_27 [16] ;
signed char arr_30 [16] [16] ;
unsigned int arr_42 [16] [16] [16] ;
unsigned long long int arr_43 [16] [16] [16] ;
_Bool arr_46 [16] ;
unsigned short arr_59 [16] [16] [16] [16] [16] ;
unsigned long long int arr_60 [16] ;
unsigned long long int arr_65 [10] ;
signed char arr_69 [10] [10] ;
unsigned int arr_77 [24] ;
unsigned long long int arr_87 [24] [24] ;
int arr_93 [24] [24] [24] ;
short arr_97 [24] [24] [24] ;
_Bool arr_109 [24] [24] [24] [24] ;
unsigned short arr_115 [13] ;
signed char arr_119 [13] [13] [13] [13] ;
long long int arr_130 [13] [13] [13] [13] [13] ;
_Bool arr_131 [13] [13] [13] [13] [13] ;
unsigned long long int arr_132 [13] [13] [13] ;
unsigned char arr_133 [13] [13] [13] [13] ;
unsigned char arr_136 [13] [13] [13] ;
signed char arr_137 [13] [13] ;
long long int arr_156 [10] ;
short arr_167 [10] ;
short arr_173 [10] [10] [10] [10] [10] ;
unsigned char arr_174 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 5714276275262543633LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3606356416770138379ULL : 6522514006983403504ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -4076895757779342549LL : 923196998536421651LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)57306 : (unsigned short)44835;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1895286044 : 1586471791;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1562401803U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 14130314031784790411ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)55887;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 12778906168028584486ULL : 3155378760413030736ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 14839056668528879092ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = 1987551304;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 1456514999 : 1867852821;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)8889;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 1697141088 : 1997472068;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_26 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 473238245;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_32 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-11318 : (short)-11270;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_33 [i_0] = 7800953815667884203ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_36 [i_0] = 5279362167140259699ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = -1636783581;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = 18263868945736747315ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? 7963325589449450625LL : 1637557660682683262LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1355380749 : 675004438;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_48 [i_0] = -2049557368270242559LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_52 [i_0] [i_1] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_55 [i_0] [i_1] [i_2] [i_3] = (unsigned short)7146;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_58 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-688;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_66 [i_0] [i_1] [i_2] = 2022232952U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_67 [i_0] [i_1] [i_2] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_70 [i_0] = 36256634;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_71 [i_0] [i_1] = -104895148;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_72 [i_0] = 5795720362644586180LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_73 [i_0] [i_1] = 1831177090021367932LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_74 [i_0] [i_1] = (unsigned short)8718;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_75 [i_0] = (i_0 % 2 == 0) ? 17657848945359537265ULL : 844648713872765324ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_76 [i_0] = 4221277298U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_79 [i_0] [i_1] [i_2] = 4019244742124346433ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_80 [i_0] = 3182419170426466417LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_81 [i_0] = 1271086134;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_82 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_83 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_84 [i_0] [i_1] [i_2] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_85 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1672604883;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_86 [i_0] [i_1] [i_2] [i_3] [i_4] = 5253517217067430369ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_88 [i_0] [i_1] [i_2] [i_3] = 1194384357;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_89 [i_0] [i_1] = 1380516991095175439ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_90 [i_0] [i_1] [i_2] [i_3] [i_4] = -533211017;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_92 [i_0] [i_1] [i_2] [i_3] = (unsigned short)4448;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_94 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-117 : (signed char)85;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_95 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2078260182 : -773002572;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_99 [i_0] [i_1] = (unsigned short)46449;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_101 [i_0] [i_1] [i_2] = 5811306130235766290ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_102 [i_0] [i_1] [i_2] = -4751648754573406309LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_104 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1652648633264713882ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_106 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 2834858156U : 3845516713U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_114 [i_0] [i_1] [i_2] = 5617382991861611173LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_118 [i_0] [i_1] [i_2] = 3505368023U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_123 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_127 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4619711831242183777LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_147 [i_0] [i_1] [i_2] = (short)3477;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_151 [i_0] [i_1] [i_2] = (short)-13666;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_172 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)17243;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 1718955955U : 204362629U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? 309226236 : -453654341;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 1803463435 : 376883558;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 2160658487U : 877569040U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? -944415177 : 629966964;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)123 : (signed char)-11;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3057764894U : 1163194689U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1592500769945896087ULL : 15521213922431988467ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_46 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)51098 : (unsigned short)32582;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_60 [i_0] = (i_0 % 2 == 0) ? 5995964837588345870ULL : 11770901916143316842ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_65 [i_0] = (i_0 % 2 == 0) ? 10206577232174101153ULL : 1777822876089127117ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_69 [i_0] [i_1] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_77 [i_0] = (i_0 % 2 == 0) ? 827247688U : 1780278662U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_87 [i_0] [i_1] = (i_1 % 2 == 0) ? 6670994074152443224ULL : 8922745723332009874ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_93 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2065746958 : -703900298;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_97 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)30721 : (short)-11577;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_109 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_115 [i_0] = (unsigned short)61955;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_119 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-49 : (signed char)92;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_130 [i_0] [i_1] [i_2] [i_3] [i_4] = 5645922259471419246LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_131 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_132 [i_0] [i_1] [i_2] = 13279538625581898441ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_133 [i_0] [i_1] [i_2] [i_3] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_136 [i_0] [i_1] [i_2] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_137 [i_0] [i_1] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_156 [i_0] = -6450543705852633915LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_167 [i_0] = (i_0 % 2 == 0) ? (short)32648 : (short)28255;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_173 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)-12135 : (short)6853;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_174 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)185 : (unsigned char)188;
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
    hash(&seed, var_89);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_43 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_60 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_65 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_69 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_77 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_87 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_93 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_97 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_109 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_115 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_119 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_130 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_131 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_132 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_133 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_136 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_137 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_156 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_167 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_173 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_174 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
