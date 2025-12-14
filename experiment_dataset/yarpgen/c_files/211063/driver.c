#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)59;
signed char var_1 = (signed char)-29;
unsigned short var_2 = (unsigned short)29708;
long long int var_3 = -6139830549214276383LL;
signed char var_4 = (signed char)12;
long long int var_5 = -5262075274514225326LL;
signed char var_6 = (signed char)-32;
unsigned short var_7 = (unsigned short)5209;
unsigned short var_8 = (unsigned short)32551;
unsigned short var_9 = (unsigned short)2576;
unsigned short var_10 = (unsigned short)34723;
long long int var_11 = 2045431394672494030LL;
signed char var_12 = (signed char)80;
long long int var_13 = -7904065084369825233LL;
long long int var_14 = -7489508397874673966LL;
int zero = 0;
long long int var_15 = 83582635818211394LL;
long long int var_16 = 8915518745964270908LL;
signed char var_17 = (signed char)50;
signed char var_18 = (signed char)-105;
unsigned short var_19 = (unsigned short)45864;
signed char var_20 = (signed char)80;
long long int var_21 = 8966794806001732375LL;
unsigned short var_22 = (unsigned short)52888;
unsigned short var_23 = (unsigned short)25125;
signed char var_24 = (signed char)42;
signed char var_25 = (signed char)-29;
signed char var_26 = (signed char)-3;
long long int var_27 = 5712387025669933629LL;
signed char var_28 = (signed char)-58;
unsigned short var_29 = (unsigned short)61460;
long long int var_30 = 533746703405787057LL;
signed char var_31 = (signed char)47;
unsigned short var_32 = (unsigned short)44706;
long long int var_33 = 6605913274975774056LL;
signed char var_34 = (signed char)-110;
long long int var_35 = 331503812040188287LL;
signed char var_36 = (signed char)-21;
signed char var_37 = (signed char)30;
unsigned short var_38 = (unsigned short)30222;
long long int var_39 = 7054048861067604004LL;
long long int var_40 = -8201505075702043413LL;
signed char var_41 = (signed char)119;
unsigned short var_42 = (unsigned short)30809;
signed char var_43 = (signed char)13;
signed char var_44 = (signed char)42;
signed char var_45 = (signed char)-88;
long long int var_46 = -1687352561395882831LL;
signed char var_47 = (signed char)-15;
unsigned short var_48 = (unsigned short)44296;
signed char var_49 = (signed char)12;
signed char var_50 = (signed char)109;
signed char var_51 = (signed char)-26;
unsigned short var_52 = (unsigned short)21141;
unsigned short var_53 = (unsigned short)44260;
long long int var_54 = -2371861899107380169LL;
unsigned short var_55 = (unsigned short)1839;
long long int var_56 = -2555788642420710797LL;
unsigned short var_57 = (unsigned short)53582;
long long int var_58 = -1496152001670062209LL;
long long int var_59 = -5661346556660039593LL;
signed char var_60 = (signed char)74;
unsigned short var_61 = (unsigned short)25155;
signed char var_62 = (signed char)-93;
signed char var_63 = (signed char)103;
signed char var_64 = (signed char)49;
long long int var_65 = -7860042864669464091LL;
unsigned short var_66 = (unsigned short)8905;
unsigned short var_67 = (unsigned short)824;
unsigned short var_68 = (unsigned short)17801;
unsigned short var_69 = (unsigned short)36471;
signed char var_70 = (signed char)-65;
signed char var_71 = (signed char)106;
signed char var_72 = (signed char)51;
unsigned short var_73 = (unsigned short)32839;
unsigned short var_74 = (unsigned short)24435;
signed char var_75 = (signed char)-43;
signed char var_76 = (signed char)-14;
signed char var_77 = (signed char)-87;
long long int var_78 = 418556251497726487LL;
unsigned short var_79 = (unsigned short)31170;
signed char var_80 = (signed char)-52;
unsigned short arr_0 [10] [10] ;
signed char arr_1 [10] ;
long long int arr_3 [10] [10] ;
signed char arr_4 [22] [22] ;
unsigned short arr_5 [22] [22] ;
unsigned short arr_7 [10] ;
unsigned short arr_8 [10] ;
unsigned short arr_10 [10] ;
signed char arr_11 [10] [10] [10] [10] ;
signed char arr_12 [10] [10] [10] [10] ;
unsigned short arr_14 [10] ;
signed char arr_17 [10] [10] [10] ;
unsigned short arr_20 [10] [10] [10] [10] [10] ;
signed char arr_21 [10] [10] [10] [10] ;
long long int arr_22 [10] ;
signed char arr_23 [10] [10] [10] [10] [10] [10] ;
long long int arr_24 [10] [10] [10] [10] [10] ;
long long int arr_25 [10] [10] [10] [10] [10] ;
unsigned short arr_26 [10] ;
long long int arr_27 [10] [10] [10] ;
signed char arr_28 [10] ;
signed char arr_31 [10] [10] [10] ;
signed char arr_32 [10] [10] [10] ;
signed char arr_34 [10] [10] [10] [10] ;
signed char arr_35 [10] [10] [10] [10] [10] ;
long long int arr_37 [10] [10] [10] [10] [10] [10] [10] ;
signed char arr_42 [10] [10] [10] [10] [10] [10] ;
unsigned short arr_43 [10] [10] [10] ;
signed char arr_44 [10] [10] [10] [10] [10] [10] ;
long long int arr_46 [10] [10] [10] [10] [10] [10] [10] ;
unsigned short arr_47 [10] [10] [10] [10] ;
signed char arr_49 [10] [10] [10] [10] [10] ;
long long int arr_50 [10] [10] [10] [10] ;
signed char arr_51 [10] [10] [10] [10] [10] ;
signed char arr_53 [10] [10] [10] [10] ;
long long int arr_56 [10] [10] [10] [10] [10] [10] [10] ;
unsigned short arr_60 [10] [10] [10] ;
long long int arr_65 [10] [10] [10] [10] [10] [10] ;
signed char arr_73 [10] [10] [10] [10] ;
unsigned short arr_74 [10] [10] [10] [10] ;
unsigned short arr_82 [10] [10] [10] ;
long long int arr_84 [16] ;
signed char arr_85 [16] ;
unsigned short arr_88 [12] ;
signed char arr_89 [12] ;
signed char arr_91 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)19399;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 1044541762943239500LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)49733;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned short)11680;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned short)55643;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (unsigned short)31075;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (unsigned short)44686;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)19845;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = -1418583841541421291LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = 4844878365392857765LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 8549261117439399128LL : 5530697456489854136LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_26 [i_0] = (unsigned short)40887;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 5074193751849653216LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_28 [i_0] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)88 : (signed char)-114;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-2 : (signed char)-54;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (signed char)-24 : (signed char)93;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -4658037466104218509LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (signed char)92 : (signed char)-116;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (unsigned short)33296;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (signed char)-113 : (signed char)120;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -3241354967482388638LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)21855 : (unsigned short)64837;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (signed char)-39 : (signed char)46;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = 5158843079619855051LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)74 : (signed char)121;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -8788027962384161539LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_60 [i_0] [i_1] [i_2] = (unsigned short)6084;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_65 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 7256154700136447792LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_73 [i_0] [i_1] [i_2] [i_3] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_74 [i_0] [i_1] [i_2] [i_3] = (unsigned short)19604;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_82 [i_0] [i_1] [i_2] = (unsigned short)52702;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_84 [i_0] = 5538841370702286823LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_85 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_88 [i_0] = (unsigned short)59581;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_89 [i_0] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_91 [i_0] [i_1] = (signed char)-20;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
