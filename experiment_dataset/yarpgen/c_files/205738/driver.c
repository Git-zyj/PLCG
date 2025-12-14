#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11507;
unsigned int var_1 = 3492693044U;
short var_2 = (short)7484;
int var_3 = -481254886;
unsigned short var_4 = (unsigned short)23536;
unsigned long long int var_5 = 14779784356725790439ULL;
unsigned long long int var_6 = 4919862873549664941ULL;
unsigned short var_7 = (unsigned short)35218;
unsigned int var_8 = 877817233U;
short var_9 = (short)29778;
unsigned short var_10 = (unsigned short)39144;
unsigned long long int var_11 = 1558589166429066708ULL;
int var_12 = -1953530773;
unsigned int var_13 = 1264565031U;
unsigned int var_14 = 3242947058U;
int zero = 0;
unsigned short var_15 = (unsigned short)43656;
int var_16 = -1985243646;
unsigned short var_17 = (unsigned short)3870;
unsigned short var_18 = (unsigned short)12722;
int var_19 = 1162586023;
unsigned short var_20 = (unsigned short)64914;
int var_21 = 1974530717;
unsigned short var_22 = (unsigned short)3139;
unsigned int var_23 = 3567862919U;
unsigned long long int var_24 = 6076737116729196113ULL;
unsigned long long int var_25 = 6447908672796694569ULL;
int var_26 = -520050040;
int var_27 = -1602747698;
int var_28 = -976577;
unsigned short var_29 = (unsigned short)47398;
int var_30 = 1251135281;
signed char var_31 = (signed char)5;
int var_32 = 1039405273;
short var_33 = (short)31168;
signed char var_34 = (signed char)-7;
unsigned int var_35 = 3702404662U;
unsigned char var_36 = (unsigned char)159;
long long int var_37 = -9209654168966221047LL;
int var_38 = -1556182508;
signed char var_39 = (signed char)-23;
unsigned long long int var_40 = 2863539814535171342ULL;
unsigned long long int var_41 = 4418485245474788920ULL;
short var_42 = (short)-28348;
unsigned int var_43 = 3583250493U;
unsigned short var_44 = (unsigned short)31369;
int var_45 = 465681870;
int var_46 = 1299025089;
unsigned short var_47 = (unsigned short)57694;
short var_48 = (short)5864;
long long int var_49 = 2988879402482923815LL;
unsigned short var_50 = (unsigned short)65418;
unsigned short var_51 = (unsigned short)50219;
unsigned short var_52 = (unsigned short)34370;
unsigned short var_53 = (unsigned short)54981;
int var_54 = 2005275504;
short var_55 = (short)-8131;
short var_56 = (short)27093;
unsigned short var_57 = (unsigned short)43314;
unsigned short var_58 = (unsigned short)241;
unsigned long long int var_59 = 5117402137149334192ULL;
int var_60 = -622061690;
unsigned long long int var_61 = 6848179594729141803ULL;
unsigned int var_62 = 1145560624U;
unsigned int var_63 = 34784232U;
unsigned short var_64 = (unsigned short)6654;
int var_65 = -311872885;
unsigned int var_66 = 2335635078U;
unsigned int var_67 = 1807786299U;
unsigned int var_68 = 3260885810U;
unsigned short var_69 = (unsigned short)62083;
int var_70 = -1234689625;
unsigned int var_71 = 2549339967U;
unsigned int var_72 = 900616349U;
long long int var_73 = 1739760334044639740LL;
int var_74 = 1873000994;
unsigned short var_75 = (unsigned short)25183;
short var_76 = (short)-16557;
int var_77 = 682834644;
unsigned int var_78 = 2110494308U;
int arr_0 [25] [25] ;
unsigned short arr_1 [25] ;
int arr_2 [25] [25] ;
unsigned short arr_3 [25] ;
unsigned short arr_4 [25] [25] ;
unsigned short arr_5 [25] ;
unsigned long long int arr_7 [25] ;
int arr_9 [25] [25] [25] [25] ;
unsigned int arr_10 [25] [25] ;
unsigned int arr_11 [25] [25] [25] [25] [25] ;
unsigned short arr_13 [25] [25] [25] ;
unsigned short arr_14 [25] [25] [25] [25] [25] ;
unsigned short arr_16 [25] ;
unsigned long long int arr_18 [25] ;
short arr_20 [25] [25] [25] [25] ;
unsigned short arr_23 [25] [25] [25] [25] [25] [25] ;
unsigned short arr_25 [25] [25] [25] [25] [25] ;
unsigned short arr_26 [25] [25] [25] [25] [25] [25] [25] ;
int arr_28 [25] [25] [25] [25] [25] [25] [25] ;
unsigned short arr_29 [25] [25] [25] [25] [25] ;
unsigned int arr_33 [25] ;
unsigned char arr_36 [25] [25] [25] ;
unsigned short arr_37 [25] [25] [25] ;
unsigned long long int arr_38 [25] [25] ;
unsigned short arr_40 [25] [25] [25] [25] [25] ;
unsigned int arr_42 [25] [25] [25] [25] ;
unsigned int arr_45 [25] ;
int arr_48 [25] ;
int arr_50 [25] [25] [25] ;
short arr_51 [25] [25] [25] [25] [25] ;
short arr_54 [25] [25] [25] ;
int arr_56 [25] [25] [25] ;
long long int arr_57 [25] [25] [25] [25] ;
unsigned int arr_58 [25] [25] [25] [25] ;
unsigned short arr_59 [25] [25] [25] [25] ;
long long int arr_60 [25] ;
short arr_63 [25] [25] [25] ;
unsigned short arr_71 [25] ;
unsigned short arr_78 [25] [25] [25] [25] ;
signed char arr_79 [25] [25] [25] [25] [25] ;
int arr_86 [25] [25] [25] ;
int arr_98 [25] ;
unsigned int arr_119 [11] [11] [11] [11] [11] [11] ;
unsigned int arr_6 [25] [25] [25] ;
long long int arr_12 [25] [25] [25] [25] [25] ;
int arr_19 [25] [25] ;
unsigned long long int arr_30 [25] [25] [25] [25] ;
unsigned int arr_31 [25] [25] ;
short arr_43 [25] [25] [25] [25] [25] ;
unsigned short arr_44 [25] [25] [25] ;
signed char arr_52 [25] [25] [25] [25] [25] ;
int arr_62 [25] [25] [25] ;
int arr_65 [25] [25] [25] ;
unsigned int arr_66 [25] ;
unsigned short arr_82 [25] [25] [25] [25] ;
int arr_91 [25] [25] [25] [25] ;
unsigned char arr_92 [25] [25] [25] [25] [25] ;
unsigned short arr_93 [25] ;
int arr_105 [25] [25] [25] [25] [25] [25] ;
unsigned char arr_106 [25] [25] ;
unsigned long long int arr_117 [11] [11] [11] ;
unsigned short arr_118 [11] [11] [11] [11] ;
signed char arr_123 [11] [11] [11] ;
unsigned short arr_126 [11] ;
unsigned long long int arr_136 [11] [11] ;
int arr_137 [11] [11] [11] ;
short arr_150 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -1527244332;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)37294;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -545579630;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)41641;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)20511;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)45107;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 17628740121663904039ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -1125220021;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = 123193288U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 543824520U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)58726;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)56649;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (unsigned short)34995;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = 17442001487722640071ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (short)29354;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)42168;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)58158;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)55232;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1434290923;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)31423;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_33 [i_0] = 2184004691U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (unsigned short)2352;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_38 [i_0] [i_1] = 6120902272632347596ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)40516;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = 569736955U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_45 [i_0] = 3232068366U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_48 [i_0] = 56969260;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1618837313 : 1013711367;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)19603;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = (short)-10080;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = -1345663513;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_57 [i_0] [i_1] [i_2] [i_3] = 7501992312949357853LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3047483418U : 3511242894U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_59 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)53333 : (unsigned short)32243;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_60 [i_0] = (i_0 % 2 == 0) ? 4870365428753515505LL : 3733765549339418950LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_63 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-23340 : (short)5720;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_71 [i_0] = (i_0 % 2 == 0) ? (unsigned short)35143 : (unsigned short)41259;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_78 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)63217 : (unsigned short)63201;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_79 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_86 [i_0] [i_1] [i_2] = -431959692;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_98 [i_0] = 1380951486;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_119 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1329450067U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 747303951U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 5941111796316689100LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = 83844380;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 10700339878924615596ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_31 [i_0] [i_1] = 3266016378U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)23211;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (unsigned short)63134;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)-91 : (signed char)113;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_62 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1834249445 : 1443449208;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_65 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -486953649 : 801573918;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_66 [i_0] = (i_0 % 2 == 0) ? 54973647U : 121058834U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_82 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)60699 : (unsigned short)28611;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_91 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -2036280486 : 303709009;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_92 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)27 : (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_93 [i_0] = (unsigned short)48695;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_105 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 559860279;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_106 [i_0] [i_1] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_117 [i_0] [i_1] [i_2] = 15934709727727975545ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_118 [i_0] [i_1] [i_2] [i_3] = (unsigned short)33107;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_123 [i_0] [i_1] [i_2] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_126 [i_0] = (unsigned short)59641;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_136 [i_0] [i_1] = 5156158817007966116ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_137 [i_0] [i_1] [i_2] = -170340230;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_150 [i_0] = (short)-32348;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_44 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_62 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_65 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_66 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_82 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_91 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_92 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_93 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_105 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_106 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_117 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_118 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_123 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_126 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_136 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_137 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_150 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
