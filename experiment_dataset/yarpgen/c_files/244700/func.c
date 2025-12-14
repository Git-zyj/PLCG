/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244700
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_1] [i_3] = ((/* implicit */int) (((-(((var_5) / (var_5))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)65532), ((unsigned short)33041))))))))));
                        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_2] [i_3 + 1])) ? (arr_8 [i_0] [i_1] [i_2] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) arr_7 [i_3 - 1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (arr_8 [i_0] [i_0] [i_2] [i_2] [18LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2])))))) ? (((/* implicit */int) ((short) var_4))) : (((/* implicit */int) var_2))))))))));
                    }
                } 
            } 
        } 
        var_13 = ((unsigned char) arr_0 [i_0]);
        arr_10 [i_0] [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))));
    }
    for (unsigned short i_4 = 2; i_4 < 14; i_4 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_5 = 2; i_5 < 15; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_6 = 1; i_6 < 14; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    {
                        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_5 + 1]))));
                        var_16 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)120))));
                        var_17 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_21 [i_4 - 1] [i_5 - 2] [i_6 + 2] [(unsigned short)0]))));
                        arr_23 [(unsigned short)3] [5] [i_6] [i_7] [5] = ((/* implicit */long long int) ((short) 0ULL));
                    }
                } 
            } 
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -989839556)) - (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) : (0ULL)));
            var_19 = var_11;
            /* LoopSeq 3 */
            for (short i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_9 = 4; i_9 < 15; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) (((-(var_11))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_5] [i_5 + 1] [i_5 - 1])))));
                            var_21 = ((/* implicit */short) ((((long long int) var_9)) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-2)))));
                            arr_33 [14ULL] [i_5] [14ULL] [i_9] [i_10] [4ULL] = ((/* implicit */int) (+(arr_20 [i_4 - 2] [(signed char)15] [i_8] [i_9] [i_9] [(signed char)15])));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (-(arr_30 [i_4 + 1] [i_4 + 2] [i_4] [i_4 - 1]))))));
                    arr_38 [i_4] [i_5] [i_5] [13LL] |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) 1501605846)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_8)))));
                }
                for (signed char i_12 = 1; i_12 < 15; i_12 += 3) 
                {
                    arr_41 [i_12] [i_8] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((-4792403456434056816LL) / (((/* implicit */long long int) 1501605846))))) : (var_8)));
                    var_23 = ((/* implicit */unsigned char) ((long long int) (signed char)11));
                    var_24 = ((/* implicit */unsigned char) var_10);
                    var_25 += ((/* implicit */short) ((((/* implicit */_Bool) 1794885802)) ? (((/* implicit */int) (short)14890)) : (((/* implicit */int) (short)-32757))));
                }
            }
            for (short i_13 = 0; i_13 < 16; i_13 += 4) /* same iter space */
            {
                var_26 = ((((/* implicit */_Bool) arr_0 [i_5 + 1])) ? (var_0) : (((/* implicit */int) arr_11 [i_4 - 1])));
                /* LoopSeq 2 */
                for (long long int i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    arr_49 [i_4] [2LL] [i_13] [i_13] = ((/* implicit */signed char) (+(((/* implicit */int) arr_18 [i_4] [i_5 - 1] [i_13] [13]))));
                    var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_5 + 1] [i_4 - 2] [i_13])) && (((/* implicit */_Bool) arr_14 [i_5 - 1] [i_4 - 2] [i_4 + 2]))));
                    arr_50 [i_4] [i_5] [i_13] [i_14] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_5] [i_5] [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 2] [i_5 - 1])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_26 [i_4] [i_4 - 2] [i_5 - 2] [(signed char)0] [i_4 - 2])) : (((/* implicit */int) arr_47 [i_4] [(unsigned char)12] [i_4] [i_14])))) : (((/* implicit */int) ((unsigned char) var_3)))));
                }
                for (long long int i_15 = 1; i_15 < 15; i_15 += 1) 
                {
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_15 + 1]))) + (arr_6 [i_13] [i_13])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15] [i_15 + 1] [i_15 + 1] [i_15]))) : (((3452980269286318375LL) + (((/* implicit */long long int) arr_46 [i_4 + 2] [i_4] [i_13] [i_15]))))));
                    var_29 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14871))) : (18446744073709551613ULL)));
                }
                var_30 -= ((/* implicit */unsigned short) var_10);
            }
            for (short i_16 = 0; i_16 < 16; i_16 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_17 = 0; i_17 < 16; i_17 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
                    /* LoopSeq 3 */
                    for (unsigned int i_18 = 0; i_18 < 16; i_18 += 3) 
                    {
                        arr_59 [i_4] [i_5] [i_16] [i_17] [i_18] [i_18] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_28 [i_4 - 1] [i_5 - 2] [i_16] [6ULL]))));
                        var_32 += ((/* implicit */unsigned int) ((4128768) * (((/* implicit */int) (signed char)-11))));
                    }
                    for (short i_19 = 2; i_19 < 14; i_19 += 4) 
                    {
                        arr_63 [i_4] [i_4] [i_17] = ((/* implicit */short) var_4);
                        var_33 ^= ((unsigned long long int) arr_20 [i_19 - 2] [i_19 + 2] [i_19 - 2] [i_19 - 2] [i_19] [i_19]);
                        arr_64 [3U] [i_19 - 2] [i_17] [3U] [i_16] [i_5] [i_4] = ((/* implicit */int) var_11);
                        var_34 -= ((/* implicit */unsigned short) (short)14877);
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) var_3);
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_65 [i_4] [1LL] [i_20] [(_Bool)1] [i_4 - 1] [(short)9])) ? (arr_65 [i_4 - 1] [i_4 - 1] [i_20] [(unsigned short)15] [i_4 + 2] [i_4 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_4 + 2] [i_5 + 1] [i_5 - 1])))));
                        arr_67 [i_4 - 1] [i_4 - 1] [i_20] [i_4 + 2] [i_4] [i_4 + 2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (_Bool)1))))) ? ((~(-10LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_5 - 2] [i_4 + 1] [i_4 - 2] [i_4 + 2])))));
                    }
                }
                for (short i_21 = 0; i_21 < 16; i_21 += 2) /* same iter space */
                {
                    arr_71 [i_4] [i_4] [12ULL] [i_4 + 2] [i_4] = ((/* implicit */long long int) ((unsigned char) 261888U));
                    /* LoopSeq 1 */
                    for (short i_22 = 0; i_22 < 16; i_22 += 3) 
                    {
                        arr_75 [i_4 - 2] [i_5] [i_21] [i_21] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_51 [i_4] [i_4] [i_22] [i_21] [i_22])) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_4] [i_5 - 1] [i_4 + 2] [i_21] [i_5 + 1])))));
                        arr_76 [i_4] [i_5] [i_5 - 2] [i_16] [i_21] [i_21] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned char) (signed char)-11))) : (((/* implicit */int) var_1))));
                    }
                    var_37 = ((/* implicit */long long int) arr_57 [i_5] [i_5] [i_5] [(_Bool)1] [i_16]);
                    arr_77 [i_4] [i_4] [i_16] [i_4] [i_21] = ((/* implicit */unsigned short) var_5);
                    var_38 *= ((/* implicit */unsigned short) arr_68 [i_4] [i_4] [10ULL] [i_4]);
                }
                var_39 = ((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_4 - 2]))));
            }
        }
        for (int i_23 = 2; i_23 < 13; i_23 += 3) /* same iter space */
        {
            arr_81 [i_23] = ((/* implicit */long long int) arr_7 [i_4]);
            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) max((1353045410), (((/* implicit */int) (unsigned char)255)))))));
        }
        for (int i_24 = 2; i_24 < 13; i_24 += 3) /* same iter space */
        {
            arr_86 [i_4] = ((/* implicit */int) (short)-14891);
            var_41 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) ^ (4294705408U))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_4 + 2] [i_24] [i_24] [i_24])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14871))) : (var_5)))) ? (((/* implicit */int) ((unsigned char) arr_17 [(short)4] [i_4 - 2] [(short)4] [i_24 - 1]))) : (((/* implicit */int) var_4)))))));
            arr_87 [i_24] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) arr_27 [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4])))));
            arr_88 [i_4 - 1] [8U] = ((/* implicit */short) arr_12 [i_4]);
            var_42 = ((/* implicit */long long int) ((min((max((((/* implicit */unsigned long long int) (unsigned char)91)), (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (4361923359689432079LL)))))) <= ((~(arr_80 [(short)8])))));
        }
    }
    /* LoopNest 2 */
    for (short i_25 = 1; i_25 < 9; i_25 += 3) 
    {
        for (unsigned long long int i_26 = 0; i_26 < 13; i_26 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_27 = 3; i_27 < 11; i_27 += 4) 
                {
                    for (unsigned long long int i_28 = 3; i_28 < 12; i_28 += 2) 
                    {
                        {
                            arr_99 [i_28] [(signed char)4] [i_27] [i_28 - 3] [i_25] [(unsigned char)8] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((arr_47 [i_25] [i_25] [i_25 + 1] [i_25 + 4]), ((short)16382)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) / (-7405444274055811698LL)))));
                            arr_100 [5LL] [5LL] [2LL] [2LL] = ((/* implicit */unsigned int) (short)-32757);
                        }
                    } 
                } 
                arr_101 [i_25 + 2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (short)14891)), (-690354285310926369LL))))))) != ((+(((/* implicit */int) (_Bool)0))))));
                var_43 = ((/* implicit */long long int) (((~(((/* implicit */int) (short)-14871)))) >> (((((/* implicit */int) arr_21 [i_25 + 3] [i_26] [(unsigned char)10] [10ULL])) - (12331)))));
            }
        } 
    } 
    var_44 = ((((/* implicit */int) (!(((/* implicit */_Bool) (+(-4361923359689432080LL))))))) & (((/* implicit */int) ((signed char) (~(((/* implicit */int) (short)-32766)))))));
}
