#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7329;
short var_1 = (short)7603;
short var_2 = (short)16885;
long long int var_7 = 5576577450126432656LL;
short var_11 = (short)-26825;
short var_12 = (short)-12670;
short var_14 = (short)5566;
int zero = 0;
unsigned char var_16 = (unsigned char)97;
short var_17 = (short)6978;
short var_18 = (short)31888;
short var_19 = (short)23786;
unsigned int var_20 = 227657091U;
short var_21 = (short)29550;
unsigned int var_22 = 3824871599U;
long long int var_23 = 8502582891416905135LL;
short var_24 = (short)23563;
unsigned char var_25 = (unsigned char)162;
short var_26 = (short)-8906;
unsigned int var_27 = 4010000636U;
short var_28 = (short)6502;
short var_29 = (short)16249;
short var_30 = (short)-22167;
signed char var_31 = (signed char)-106;
unsigned int var_32 = 619610328U;
long long int var_33 = 7016875729367184556LL;
short var_34 = (short)12529;
short var_35 = (short)-32323;
signed char var_36 = (signed char)-10;
signed char var_37 = (signed char)-37;
short var_38 = (short)-29449;
short var_39 = (short)-16313;
long long int var_40 = -6758776989621660984LL;
short var_41 = (short)-14797;
unsigned char var_42 = (unsigned char)3;
short var_43 = (short)-21773;
long long int var_44 = 8358833734599630146LL;
unsigned char var_45 = (unsigned char)103;
short var_46 = (short)30032;
unsigned char var_47 = (unsigned char)220;
signed char var_48 = (signed char)90;
short var_49 = (short)-10116;
unsigned int var_50 = 2393032893U;
short var_51 = (short)31567;
short var_52 = (short)-16434;
short var_53 = (short)-6494;
signed char var_54 = (signed char)13;
unsigned char var_55 = (unsigned char)110;
unsigned int var_56 = 1026456815U;
unsigned char var_57 = (unsigned char)38;
short var_58 = (short)-27680;
short var_59 = (short)21305;
short var_60 = (short)-1173;
short var_61 = (short)-12044;
unsigned char var_62 = (unsigned char)209;
signed char var_63 = (signed char)126;
short var_64 = (short)25965;
long long int var_65 = 4147699330567657229LL;
signed char var_66 = (signed char)-30;
short var_67 = (short)19354;
short var_68 = (short)-24615;
short var_69 = (short)-31934;
unsigned char var_70 = (unsigned char)53;
long long int var_71 = 8985946516635107127LL;
short var_72 = (short)23791;
short var_73 = (short)7543;
long long int var_74 = 5508443740193805930LL;
short var_75 = (short)-21557;
long long int var_76 = -3909887282374062156LL;
unsigned int var_77 = 3547836834U;
unsigned char var_78 = (unsigned char)45;
unsigned int var_79 = 2620802854U;
unsigned char var_80 = (unsigned char)103;
short var_81 = (short)-29087;
unsigned char var_82 = (unsigned char)221;
short var_83 = (short)2083;
unsigned int var_84 = 2619966796U;
unsigned int arr_0 [24] ;
long long int arr_1 [24] ;
short arr_2 [24] ;
unsigned int arr_3 [24] [24] ;
short arr_4 [24] ;
short arr_5 [24] [24] [24] ;
unsigned int arr_6 [24] [24] ;
unsigned int arr_7 [24] ;
short arr_8 [24] [24] ;
short arr_9 [24] [24] ;
short arr_10 [24] [24] [24] [24] ;
short arr_11 [24] [24] [24] [24] ;
unsigned char arr_12 [24] [24] [24] ;
unsigned int arr_13 [24] [24] [24] ;
long long int arr_14 [24] [24] [24] [24] ;
unsigned int arr_16 [24] [24] [24] ;
short arr_17 [24] [24] [24] [24] ;
signed char arr_19 [24] [24] [24] [24] ;
signed char arr_20 [24] [24] [24] [24] ;
short arr_22 [24] [24] [24] [24] [24] [24] ;
short arr_23 [24] [24] [24] [24] [24] ;
short arr_24 [24] [24] ;
long long int arr_25 [24] ;
short arr_26 [24] [24] [24] [24] ;
short arr_27 [24] [24] [24] ;
short arr_28 [24] [24] [24] [24] ;
unsigned int arr_29 [24] [24] [24] [24] ;
signed char arr_30 [24] [24] [24] [24] ;
unsigned char arr_31 [24] [24] [24] [24] [24] ;
signed char arr_34 [24] [24] ;
long long int arr_35 [24] [24] [24] [24] [24] ;
short arr_37 [24] [24] [24] ;
short arr_38 [24] [24] [24] ;
short arr_39 [24] ;
unsigned char arr_41 [24] [24] [24] [24] ;
unsigned int arr_44 [24] [24] [24] ;
short arr_45 [24] [24] [24] [24] ;
signed char arr_46 [24] [24] [24] [24] ;
short arr_47 [24] [24] ;
signed char arr_48 [24] [24] [24] [24] ;
short arr_49 [24] ;
long long int arr_50 [24] [24] [24] [24] ;
unsigned char arr_51 [24] [24] [24] [24] [24] [24] [24] ;
long long int arr_52 [24] [24] [24] [24] [24] [24] ;
unsigned int arr_55 [24] [24] [24] [24] ;
long long int arr_56 [24] [24] ;
short arr_62 [15] [15] ;
unsigned int arr_63 [15] [15] ;
unsigned int arr_64 [15] ;
unsigned char arr_65 [15] ;
long long int arr_66 [15] [15] [15] ;
short arr_71 [15] [15] ;
long long int arr_72 [15] ;
short arr_73 [15] [15] ;
long long int arr_74 [15] ;
short arr_76 [15] [15] ;
signed char arr_77 [15] [15] [15] ;
signed char arr_78 [15] [15] ;
signed char arr_79 [15] ;
short arr_81 [15] [15] [15] ;
unsigned char arr_84 [15] [15] [15] [15] ;
short arr_85 [15] [15] [15] [15] [15] ;
short arr_86 [15] [15] [15] [15] [15] ;
unsigned char arr_87 [15] [15] [15] [15] ;
short arr_91 [15] ;
short arr_92 [15] [15] [15] [15] [15] [15] ;
signed char arr_94 [15] [15] ;
long long int arr_95 [15] [15] [15] [15] [15] [15] [15] ;
short arr_97 [15] [15] [15] [15] [15] [15] [15] ;
unsigned char arr_99 [15] ;
unsigned int arr_102 [14] [14] ;
short arr_103 [14] ;
unsigned char arr_105 [14] [14] [14] ;
short arr_106 [14] [14] ;
unsigned int arr_108 [14] [14] [14] ;
short arr_109 [14] ;
long long int arr_113 [25] ;
long long int arr_114 [25] ;
signed char arr_15 [24] [24] [24] [24] ;
unsigned char arr_18 [24] [24] ;
long long int arr_21 [24] ;
short arr_32 [24] [24] [24] [24] ;
unsigned int arr_33 [24] [24] [24] [24] [24] [24] ;
unsigned char arr_42 [24] [24] [24] [24] ;
short arr_54 [24] [24] [24] [24] ;
short arr_58 [24] ;
short arr_67 [15] [15] [15] ;
unsigned int arr_68 [15] [15] [15] [15] ;
short arr_69 [15] ;
unsigned char arr_70 [15] [15] [15] ;
signed char arr_93 [15] [15] [15] [15] [15] [15] [15] ;
short arr_100 [15] [15] [15] [15] [15] [15] ;
short arr_101 [15] [15] [15] [15] [15] [15] [15] ;
short arr_111 [14] [14] [14] ;
short arr_112 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 936894416U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -6739546807472503628LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-4200;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 4195767517U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-5477;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-30634;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 2998336892U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 2395983057U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (short)31991;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-642;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)-1455;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)-16143;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 2604961856U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -2433530237491804134LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 3716484437U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (short)18603;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)6611;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)3483;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = (short)24046;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = -1394652544345639818LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (short)13187;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (short)-16006;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (short)-21374;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 2306497501U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-76 : (signed char)-104;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_34 [i_0] [i_1] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = 8710883961124789764LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (short)-3596;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (short)3818;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_39 [i_0] = (short)8291;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = 296702826U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (short)25850;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_47 [i_0] [i_1] = (short)-8979;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_49 [i_0] = (short)-14192;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = -225026969324266913LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4788025518832791066LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_55 [i_0] [i_1] [i_2] [i_3] = 2357643790U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_56 [i_0] [i_1] = -5325382712128083291LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_62 [i_0] [i_1] = (short)-22884;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_63 [i_0] [i_1] = 2400626745U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_64 [i_0] = 63961807U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_65 [i_0] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_66 [i_0] [i_1] [i_2] = 4135079659595408615LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_71 [i_0] [i_1] = (short)-17760;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_72 [i_0] = 3813824972200029339LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_73 [i_0] [i_1] = (short)-22065;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_74 [i_0] = 6404817527481690567LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_76 [i_0] [i_1] = (short)-16715;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_77 [i_0] [i_1] [i_2] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_78 [i_0] [i_1] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_79 [i_0] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_81 [i_0] [i_1] [i_2] = (short)-31226;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_84 [i_0] [i_1] [i_2] [i_3] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_85 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)10641;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_86 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-12391;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_87 [i_0] [i_1] [i_2] [i_3] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_91 [i_0] = (short)-19895;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_92 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-17223;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_94 [i_0] [i_1] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_95 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -1758446873050461764LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_97 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)4220;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_99 [i_0] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_102 [i_0] [i_1] = 770210596U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_103 [i_0] = (short)14306;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_105 [i_0] [i_1] [i_2] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_106 [i_0] [i_1] = (short)-22354;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_108 [i_0] [i_1] [i_2] = 419279358U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_109 [i_0] = (short)-29469;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_113 [i_0] = 2386035672191539571LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_114 [i_0] = -2494529823072196947LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)107 : (signed char)-60;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)209 : (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? -7920552858160369619LL : 8451238845652185381LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-25245 : (short)6363;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 1344246503U : 2673085247U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = (short)10977;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_58 [i_0] = (short)-793;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_67 [i_0] [i_1] [i_2] = (short)-14733;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_68 [i_0] [i_1] [i_2] [i_3] = 1449809997U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_69 [i_0] = (short)-14177;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_70 [i_0] [i_1] [i_2] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_93 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_100 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)24285;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_101 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-15250;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_111 [i_0] [i_1] [i_2] = (short)-4999;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_112 [i_0] [i_1] [i_2] [i_3] = (short)-24329;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_54 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_58 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_67 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_68 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_69 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_70 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                hash(&seed, arr_93 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            hash(&seed, arr_100 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                hash(&seed, arr_101 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_111 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_112 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
