#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7021452531839072192LL;
unsigned int var_1 = 3396300698U;
long long int var_2 = -8097033309062229790LL;
unsigned short var_3 = (unsigned short)3329;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)7441;
unsigned char var_6 = (unsigned char)94;
short var_7 = (short)28048;
unsigned long long int var_8 = 9789235344573605057ULL;
unsigned long long int var_9 = 17357219597523975377ULL;
int zero = 0;
short var_11 = (short)-16348;
short var_12 = (short)-23395;
short var_13 = (short)4860;
unsigned long long int var_14 = 4893030194018005442ULL;
unsigned long long int var_15 = 6783393690835666651ULL;
unsigned long long int var_16 = 4826652353534040994ULL;
long long int var_17 = -2598262571408070458LL;
signed char var_18 = (signed char)72;
short var_19 = (short)9389;
long long int var_20 = -4808926635235929752LL;
unsigned int var_21 = 4076476307U;
signed char var_22 = (signed char)-80;
unsigned long long int var_23 = 17752284355281414298ULL;
unsigned long long int var_24 = 4106036066186451676ULL;
long long int var_25 = -1991630978977624603LL;
unsigned long long int var_26 = 8299551293728612984ULL;
unsigned short var_27 = (unsigned short)47666;
int var_28 = -2123971086;
long long int var_29 = -8001165894577137094LL;
long long int var_30 = -5364180470126812000LL;
long long int var_31 = -7600872663672832029LL;
unsigned long long int var_32 = 3037931152247133483ULL;
unsigned short var_33 = (unsigned short)287;
long long int var_34 = -7269728498974437878LL;
_Bool var_35 = (_Bool)1;
unsigned long long int var_36 = 12876367654739379331ULL;
long long int var_37 = -6374362514343140954LL;
signed char var_38 = (signed char)-83;
long long int var_39 = 7285305396560642702LL;
short var_40 = (short)-23232;
short var_41 = (short)-26112;
unsigned char var_42 = (unsigned char)192;
short var_43 = (short)14932;
short var_44 = (short)8397;
unsigned char var_45 = (unsigned char)71;
unsigned long long int var_46 = 5690425475117144563ULL;
long long int var_47 = 6036639617207230984LL;
unsigned char var_48 = (unsigned char)147;
unsigned long long int var_49 = 6155750091813099678ULL;
short var_50 = (short)-32111;
unsigned int var_51 = 2422178556U;
signed char var_52 = (signed char)-29;
_Bool var_53 = (_Bool)0;
signed char var_54 = (signed char)57;
unsigned int var_55 = 874289234U;
long long int var_56 = -7469627118570400930LL;
_Bool var_57 = (_Bool)0;
short var_58 = (short)24135;
short arr_0 [23] ;
unsigned long long int arr_2 [23] [23] ;
unsigned char arr_4 [23] [23] ;
short arr_5 [23] [23] [23] ;
unsigned int arr_6 [23] [23] ;
unsigned long long int arr_7 [23] ;
unsigned long long int arr_10 [23] [23] ;
unsigned int arr_11 [23] [23] [23] ;
short arr_14 [23] ;
_Bool arr_15 [23] ;
int arr_16 [23] [23] ;
long long int arr_20 [23] [23] [23] [23] ;
int arr_21 [23] ;
long long int arr_22 [23] [23] [23] [23] ;
long long int arr_23 [23] [23] [23] [23] ;
unsigned short arr_24 [23] [23] [23] [23] ;
unsigned short arr_25 [23] [23] [23] [23] ;
unsigned long long int arr_31 [23] ;
unsigned int arr_32 [23] [23] ;
unsigned int arr_35 [23] ;
unsigned char arr_36 [23] [23] ;
short arr_40 [23] [23] ;
int arr_41 [23] [23] [23] ;
short arr_44 [23] [23] [23] [23] ;
long long int arr_48 [23] ;
_Bool arr_50 [23] [23] ;
int arr_51 [23] [23] [23] ;
signed char arr_52 [23] [23] [23] [23] [23] [23] ;
signed char arr_55 [23] [23] [23] [23] [23] ;
unsigned char arr_58 [23] ;
long long int arr_67 [23] ;
_Bool arr_68 [23] [23] [23] ;
unsigned int arr_78 [24] [24] [24] ;
int arr_80 [24] [24] [24] [24] ;
long long int arr_84 [24] [24] [24] [24] [24] [24] ;
short arr_94 [18] [18] ;
unsigned long long int arr_95 [18] ;
unsigned int arr_117 [18] ;
int arr_3 [23] ;
int arr_12 [23] [23] [23] [23] ;
_Bool arr_13 [23] [23] [23] ;
signed char arr_17 [23] [23] ;
unsigned short arr_18 [23] [23] [23] ;
unsigned int arr_26 [23] [23] [23] [23] [23] ;
long long int arr_27 [23] [23] [23] [23] [23] [23] ;
int arr_28 [23] [23] [23] ;
short arr_29 [23] [23] [23] [23] [23] ;
unsigned short arr_33 [23] ;
unsigned long long int arr_34 [23] ;
int arr_42 [23] ;
unsigned char arr_47 [23] [23] ;
unsigned char arr_57 [23] ;
unsigned int arr_60 [23] [23] [23] [23] ;
unsigned long long int arr_61 [23] [23] [23] [23] ;
int arr_62 [23] [23] ;
unsigned char arr_66 [23] [23] ;
unsigned long long int arr_72 [23] [23] ;
short arr_73 [23] [23] [23] [23] [23] ;
signed char arr_86 [24] [24] [24] [24] [24] ;
_Bool arr_91 [24] [24] [24] [24] ;
int arr_92 [24] [24] [24] ;
int arr_93 [24] ;
unsigned short arr_100 [18] ;
unsigned int arr_107 [18] [18] ;
_Bool arr_111 [18] ;
short arr_112 [18] ;
unsigned char arr_113 [18] ;
unsigned int arr_118 [18] [18] [18] [18] ;
unsigned long long int arr_121 [24] ;
unsigned int arr_124 [18] ;
_Bool arr_128 [18] [18] ;
unsigned long long int arr_132 [18] ;
unsigned int arr_133 [18] ;
short arr_134 [18] [18] ;
unsigned int arr_137 [24] ;
long long int arr_147 [12] [12] ;
int arr_148 [12] [12] ;
long long int arr_149 [12] [12] [12] [12] ;
short arr_150 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-29002 : (short)-26863;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 8526592144214584056ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-8798;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 3615732892U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 8181710254911690753ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = 18146370150811300084ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2070331186U : 2082543917U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (short)-2458;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? -1417637253 : -544118920;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1467997570676938568LL : -2843870220964801894LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = -112688512;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = -19437495862375392LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 3401570138252321936LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)9885 : (unsigned short)10438;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)29404 : (unsigned short)32014;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_31 [i_0] = 17540803184353943049ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_32 [i_0] [i_1] = 3836801898U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_35 [i_0] = 2241005618U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_36 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)82 : (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_40 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)12178 : (short)19741;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 195693582 : 2017694041;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)25400 : (short)-11495;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_48 [i_0] = -8222920162019410213LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_50 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = -475884913;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_58 [i_0] = (i_0 % 2 == 0) ? (unsigned char)162 : (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_67 [i_0] = 5909498450487283928LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_68 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_78 [i_0] [i_1] [i_2] = 3344485500U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_80 [i_0] [i_1] [i_2] [i_3] = -840218490;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_84 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -2687727852012955166LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_94 [i_0] [i_1] = (short)-17511;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_95 [i_0] = 16779048744330429947ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_117 [i_0] = 727017737U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -830587526 : -1075871346;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1679645031 : 726771029;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-30 : (signed char)90;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)35115 : (unsigned short)39337;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 3737797341U : 155923448U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? -5069109055070077448LL : -6329952869702629593LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1770496235 : -94605567;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)19163 : (short)-30435;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_33 [i_0] = (unsigned short)22390;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_34 [i_0] = 1924098354578832063ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? 1946390951 : 1076332657;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_47 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)223 : (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_57 [i_0] = (i_0 % 2 == 0) ? (unsigned char)118 : (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_60 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3180198080U : 2808338480U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_61 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2195621427459578593ULL : 9357213055627947023ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_62 [i_0] [i_1] = (i_0 % 2 == 0) ? 20902298 : -945953764;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_66 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)34 : (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_72 [i_0] [i_1] = (i_0 % 2 == 0) ? 3029965168872979687ULL : 15442435894106916377ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_73 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)29525 : (short)-28777;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_86 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)-71 : (signed char)10;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_91 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_92 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1823513873 : 2027679018;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_93 [i_0] = -742507111;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_100 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60835 : (unsigned short)45679;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_107 [i_0] [i_1] = (i_1 % 2 == 0) ? 3520768964U : 3339844016U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_111 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_112 [i_0] = (i_0 % 2 == 0) ? (short)-22548 : (short)-23007;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_113 [i_0] = (i_0 % 2 == 0) ? (unsigned char)202 : (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_118 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3219199008U : 2903471042U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_121 [i_0] = 11563202646665785700ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_124 [i_0] = 3721013074U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_128 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_132 [i_0] = 17249227257285728691ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_133 [i_0] = 2705620618U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_134 [i_0] [i_1] = (short)-29999;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_137 [i_0] = (i_0 % 2 == 0) ? 417736002U : 1476959275U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_147 [i_0] [i_1] = -6529800688450534132LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_148 [i_0] [i_1] = 1003710965;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_149 [i_0] [i_1] [i_2] [i_3] = -5250697911006910937LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_150 [i_0] [i_1] [i_2] [i_3] = (short)5453;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_57 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_60 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_61 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_62 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_66 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_72 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_73 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_86 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_91 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_92 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_93 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_100 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_107 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_111 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_112 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_113 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_118 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_121 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_124 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_128 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_132 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_133 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_134 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_137 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_147 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_148 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_149 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_150 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
