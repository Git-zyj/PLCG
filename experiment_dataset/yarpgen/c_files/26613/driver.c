#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3873023267U;
unsigned char var_1 = (unsigned char)98;
unsigned long long int var_2 = 5134796418884552435ULL;
long long int var_3 = 3865445472581163524LL;
unsigned long long int var_4 = 6159870944778423250ULL;
unsigned long long int var_5 = 11813936093600107585ULL;
signed char var_6 = (signed char)-93;
unsigned long long int var_7 = 7989130832147931662ULL;
unsigned char var_8 = (unsigned char)62;
unsigned long long int var_9 = 13300987545488302371ULL;
int zero = 0;
int var_10 = -636190741;
_Bool var_11 = (_Bool)1;
long long int var_12 = -6906538629555672266LL;
unsigned long long int var_13 = 18275954027891677162ULL;
unsigned int var_14 = 2181728450U;
long long int var_15 = 6984931741174060930LL;
signed char var_16 = (signed char)-97;
signed char var_17 = (signed char)34;
unsigned int var_18 = 1105401587U;
unsigned int var_19 = 2637517887U;
unsigned short var_20 = (unsigned short)56377;
long long int var_21 = 2289114903012905854LL;
short var_22 = (short)17539;
short var_23 = (short)9615;
unsigned long long int var_24 = 996253508589204454ULL;
signed char var_25 = (signed char)15;
unsigned short var_26 = (unsigned short)46056;
long long int var_27 = -319540178307514568LL;
int var_28 = -1603551369;
long long int var_29 = 3918365225280505417LL;
short var_30 = (short)-1315;
short var_31 = (short)-28553;
short var_32 = (short)5834;
unsigned char var_33 = (unsigned char)218;
signed char var_34 = (signed char)-60;
unsigned short var_35 = (unsigned short)9463;
unsigned long long int var_36 = 16505683935673344936ULL;
unsigned char var_37 = (unsigned char)4;
short var_38 = (short)-8061;
long long int var_39 = -4692444762129516653LL;
unsigned long long int var_40 = 1759517681916882830ULL;
long long int var_41 = 2178924253520066019LL;
signed char arr_0 [21] [21] ;
unsigned int arr_2 [21] ;
int arr_3 [21] ;
unsigned char arr_5 [21] [21] ;
unsigned int arr_6 [21] [21] ;
signed char arr_7 [21] [21] [21] ;
long long int arr_8 [21] [21] [21] ;
unsigned int arr_9 [21] [21] [21] ;
unsigned int arr_10 [21] ;
short arr_13 [21] ;
unsigned long long int arr_14 [21] ;
long long int arr_15 [21] [21] ;
signed char arr_16 [21] [21] [21] ;
short arr_17 [21] [21] [21] ;
signed char arr_18 [21] [21] [21] ;
signed char arr_20 [21] [21] [21] [21] ;
long long int arr_28 [21] ;
signed char arr_29 [21] ;
unsigned int arr_32 [23] [23] ;
unsigned char arr_33 [23] ;
unsigned int arr_34 [23] ;
unsigned long long int arr_35 [23] ;
long long int arr_36 [23] [23] ;
short arr_39 [23] [23] [23] ;
short arr_40 [23] [23] [23] ;
unsigned int arr_41 [23] [23] [23] ;
signed char arr_42 [23] ;
short arr_43 [23] [23] [23] [23] [23] ;
unsigned int arr_44 [23] [23] [23] [23] [23] [23] ;
unsigned short arr_45 [23] [23] [23] [23] [23] ;
unsigned long long int arr_51 [14] ;
unsigned int arr_64 [17] [17] ;
signed char arr_81 [17] [17] [17] [17] [17] ;
unsigned int arr_83 [17] [17] [17] [17] [17] ;
unsigned long long int arr_103 [17] ;
signed char arr_4 [21] ;
long long int arr_11 [21] [21] [21] ;
unsigned short arr_12 [21] ;
unsigned long long int arr_22 [21] ;
unsigned char arr_23 [21] ;
unsigned short arr_26 [21] ;
unsigned char arr_27 [21] [21] ;
signed char arr_30 [21] ;
short arr_31 [21] ;
unsigned char arr_37 [23] [23] ;
_Bool arr_38 [23] ;
unsigned int arr_49 [15] ;
unsigned char arr_53 [14] ;
unsigned long long int arr_54 [14] ;
long long int arr_55 [14] ;
_Bool arr_56 [14] ;
_Bool arr_59 [16] [16] ;
unsigned char arr_62 [16] ;
unsigned long long int arr_68 [17] ;
short arr_69 [17] [17] [17] ;
int arr_73 [17] [17] [17] ;
int arr_85 [17] [17] [17] [17] [17] ;
long long int arr_86 [17] [17] [17] [17] ;
unsigned long long int arr_87 [17] [17] [17] ;
signed char arr_90 [17] ;
unsigned long long int arr_91 [17] ;
unsigned long long int arr_98 [17] [17] [17] [17] ;
short arr_99 [17] [17] [17] [17] ;
long long int arr_100 [17] ;
unsigned long long int arr_105 [17] [17] ;
unsigned char arr_106 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)112 : (signed char)21;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 3910471203U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1103597345 : 1946167299;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)55 : (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 142708738U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 378138101143755887LL : -5981889719759943129LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3207287056U : 1714546883U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 2499505980U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (short)-8179;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 13837194515987927619ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = -7947702849281118607LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)69 : (signed char)32;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (short)-12326;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = -3256962507585549115LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_32 [i_0] [i_1] = 3173810054U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_33 [i_0] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_34 [i_0] = 3830273245U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? 13005062305922811344ULL : 9951255130791617154ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_36 [i_0] [i_1] = (i_1 % 2 == 0) ? -841636332881546283LL : 6720262594599089383LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (short)30419;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (short)12051;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = 972801515U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_42 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (short)11121 : (short)30140;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1468646057U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)6074;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_51 [i_0] = 10007871876498313194ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_64 [i_0] [i_1] = (i_0 % 2 == 0) ? 2920421087U : 2752741421U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_81 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_83 [i_0] [i_1] [i_2] [i_3] [i_4] = 794717980U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_103 [i_0] = 1433031970226361795ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-73 : (signed char)88;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 256041573403851977LL : -7426261111307068957LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29302 : (unsigned short)33846;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = 4766097792042771939ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = (unsigned short)24544;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_30 [i_0] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_31 [i_0] = (short)7968;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_37 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)9 : (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_49 [i_0] = 13882513U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_53 [i_0] = (i_0 % 2 == 0) ? (unsigned char)148 : (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_54 [i_0] = (i_0 % 2 == 0) ? 5879868799202017157ULL : 2290563924495697754ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_55 [i_0] = (i_0 % 2 == 0) ? 8283480869483776872LL : -8279860278483114338LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_56 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_59 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_62 [i_0] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_68 [i_0] = (i_0 % 2 == 0) ? 18077316207126524313ULL : 12718544389876429303ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_69 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)23200 : (short)18609;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_73 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 341073460 : 1811362115;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_85 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -168871364 : -97116676;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_86 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -1345424370854479623LL : -3999769361206777412LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_87 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8565255666990277576ULL : 4373746823649068006ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_90 [i_0] = (i_0 % 2 == 0) ? (signed char)-105 : (signed char)88;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_91 [i_0] = (i_0 % 2 == 0) ? 13501304639207127644ULL : 14279325469006504591ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_98 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 4973289152350325199ULL : 13858358016002538069ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_99 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-26996 : (short)4438;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_100 [i_0] = (i_0 % 2 == 0) ? -3477170330051654413LL : 3588222423747835315LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_105 [i_0] [i_1] = (i_0 % 2 == 0) ? 12945100681643883650ULL : 9704631210078807574ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_106 [i_0] = (i_0 % 2 == 0) ? (unsigned char)74 : (unsigned char)55;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_49 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_53 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_54 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_55 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_56 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_59 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_62 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_68 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_69 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_73 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_85 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_86 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_87 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_90 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_91 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_98 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_99 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_100 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_105 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_106 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
