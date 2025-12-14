/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219077
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */short) ((unsigned char) var_2));
            var_20 = ((/* implicit */short) var_4);
            /* LoopSeq 1 */
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                arr_9 [i_0] [(short)8] [i_2 - 1] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2] [(short)13]);
                /* LoopNest 2 */
                for (long long int i_3 = 2; i_3 < 15; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((long long int) ((237192319565794121ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                            var_22 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)211))));
                            var_23 = ((/* implicit */int) (unsigned char)145);
                            var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141))) / (((unsigned int) (unsigned char)93))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] = ((/* implicit */int) -9223372036854775803LL);
            }
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 3) 
            {
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_5 + 2] [i_1] [i_0])) ? (237192319565794129ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10502))))))));
                var_26 = ((/* implicit */long long int) (signed char)6);
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    arr_22 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_20 [i_0] [(unsigned short)11] [i_0] [i_5] [i_6]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60491)))))) ^ (7497055547116248839LL)));
                    /* LoopSeq 4 */
                    for (signed char i_7 = 1; i_7 < 16; i_7 += 2) 
                    {
                        arr_26 [i_0] [9] [9] [i_0] [i_6] [i_7] = ((/* implicit */unsigned long long int) (unsigned char)151);
                        var_27 = ((/* implicit */unsigned int) (unsigned char)0);
                    }
                    for (unsigned int i_8 = 3; i_8 < 15; i_8 += 3) 
                    {
                        arr_30 [i_8 + 3] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_2 [i_5 + 2] [i_0]) : (((unsigned int) (unsigned char)244))));
                        arr_31 [i_0] [i_0] [i_5] = ((/* implicit */short) ((_Bool) var_10));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_34 [i_0] [i_0] [i_5] [i_0] [i_9] [i_5] = ((/* implicit */_Bool) (short)-1891);
                        arr_35 [i_0] [13ULL] [13ULL] [i_0] [i_9] [i_6] [i_9] = ((((/* implicit */_Bool) (unsigned char)224)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39613))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_40 [i_0] [i_1] [i_5] [i_6] [i_10] = (!(((/* implicit */_Bool) var_12)));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_1))));
                        arr_41 [i_10] [3U] [3U] [i_6] [i_0] [(unsigned short)8] = ((/* implicit */unsigned char) (~(arr_10 [(_Bool)1] [i_5 - 1] [i_5 + 2] [i_5 + 1])));
                    }
                    arr_42 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)33644)) & (-203508729)))) - (((9223372036854775803LL) + (var_10)))));
                    var_29 = ((unsigned char) arr_11 [i_0] [i_5 - 1] [i_5] [i_0] [i_0] [i_5 - 1]);
                }
                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 2])) ? (arr_7 [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_5 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                arr_43 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113))) : (12669449938117414436ULL)));
            }
            for (long long int i_11 = 2; i_11 < 17; i_11 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_50 [i_0] [i_0] [7] [i_0] = ((/* implicit */unsigned char) ((arr_5 [i_11 + 1] [i_11 + 1]) ? (((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */unsigned long long int) 268433408LL)) : (237192319565794121ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_11 - 2] [i_1] [i_0] [2LL] [(unsigned char)13] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (var_12))))));
                    var_31 = ((/* implicit */short) ((unsigned int) (unsigned short)65535));
                    arr_51 [i_0] [i_0] [i_11] [i_12] [i_0] = (unsigned char)246;
                }
                for (unsigned int i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) 
                    {
                        arr_57 [i_0] [i_1] [i_11 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) == (7961926352432823805ULL)));
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */long long int) arr_32 [i_1] [i_1])) : (561850441793536LL)))) || (((/* implicit */_Bool) (unsigned char)112)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 4; i_15 < 16; i_15 += 1) /* same iter space */
                    {
                        var_33 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)43553))))) ? (((/* implicit */long long int) var_1)) : (((var_18) | (arr_47 [i_0] [i_0] [i_11 - 1] [i_0] [i_15])))));
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_15 + 1] [i_15 - 4] [i_13] [i_11 + 1] [i_11 - 2])) & (((/* implicit */int) (signed char)1))));
                        arr_62 [i_13] [i_0] [i_11] [9ULL] [15LL] [i_1] = ((/* implicit */_Bool) ((((2666769923U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62653)))));
                    }
                    for (unsigned char i_16 = 4; i_16 < 16; i_16 += 1) /* same iter space */
                    {
                        arr_67 [i_16] [i_0] [i_11] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */unsigned int) 716611229)) : (var_12)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [(_Bool)1] [i_1] [i_1] [(_Bool)1] [i_16] [i_16 - 1]))))));
                        arr_68 [i_0] [i_1] [i_0] = ((short) -2062546941);
                        var_35 = ((/* implicit */unsigned long long int) (unsigned char)135);
                    }
                    arr_69 [i_0] [i_1] [i_13] = ((/* implicit */unsigned short) 9164769164576630395LL);
                }
                var_36 = ((/* implicit */_Bool) ((unsigned char) var_17));
                arr_70 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
                var_37 |= ((/* implicit */short) (!(((/* implicit */_Bool) ((7497055547116248839LL) | (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
            }
            for (long long int i_17 = 2; i_17 < 17; i_17 += 1) /* same iter space */
            {
                arr_73 [i_0] [i_0] [i_17] = ((/* implicit */unsigned long long int) ((unsigned short) arr_39 [i_0] [i_1] [i_17 - 2] [i_17 + 1] [i_17 - 2]));
                /* LoopSeq 1 */
                for (long long int i_18 = 0; i_18 < 18; i_18 += 4) 
                {
                    arr_76 [i_18] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((var_1) + (966643811)));
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(716611229)))) ? (((unsigned long long int) 0U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59689)))));
                }
            }
            arr_77 [i_0] = ((/* implicit */signed char) ((unsigned char) arr_1 [i_0] [i_1]));
        }
        for (unsigned int i_19 = 0; i_19 < 18; i_19 += 3) /* same iter space */
        {
            arr_82 [i_0] [i_19] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)44110)) ? (-1140954946) : (((/* implicit */int) (short)-1891)))) == (((/* implicit */int) arr_17 [i_19] [i_19] [i_19] [i_0]))));
            var_39 = (-(((/* implicit */int) (!(((/* implicit */_Bool) 12LL))))));
            arr_83 [i_0] [i_0] = ((((/* implicit */_Bool) arr_71 [i_0])) ? (((/* implicit */int) (unsigned char)1)) : (((-498231023) & (arr_44 [i_0] [i_0] [i_19] [i_19]))));
        }
        for (unsigned int i_20 = 0; i_20 < 18; i_20 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_21 = 0; i_21 < 18; i_21 += 3) 
            {
                for (signed char i_22 = 0; i_22 < 18; i_22 += 4) 
                {
                    {
                        var_40 += ((7961926352432823805ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38248))));
                        arr_92 [i_0] [i_20] [i_0] [i_22] [i_0] = ((/* implicit */int) ((unsigned short) var_3));
                        var_41 = ((/* implicit */int) max((var_41), (1066936284)));
                    }
                } 
            } 
            arr_93 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4971941701413501963LL)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
        }
        for (long long int i_23 = 0; i_23 < 18; i_23 += 3) 
        {
            arr_96 [(unsigned short)0] [i_0] [(unsigned short)0] = ((/* implicit */_Bool) arr_79 [i_0] [i_0] [i_0]);
            arr_97 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1971761733U)) ? (8951546140674807403ULL) : (((/* implicit */unsigned long long int) var_14))));
            /* LoopSeq 1 */
            for (unsigned short i_24 = 1; i_24 < 14; i_24 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_25 = 0; i_25 < 18; i_25 += 3) 
                {
                    for (unsigned short i_26 = 0; i_26 < 18; i_26 += 2) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((short) -12LL)))));
                            arr_105 [i_0] [5] [i_23] [i_24] [i_0] [i_26] = (+(((/* implicit */int) (unsigned char)99)));
                        }
                    } 
                } 
                var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_24] [i_0] [i_24] [i_24 + 4])) ? (arr_2 [i_24 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14459)))));
                arr_106 [i_0] [i_0] [(unsigned short)12] [i_24] |= ((/* implicit */short) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (-172229763)))) / (arr_66 [i_0] [i_23] [i_24])));
            }
            /* LoopSeq 3 */
            for (unsigned short i_27 = 1; i_27 < 17; i_27 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_28 = 0; i_28 < 18; i_28 += 2) 
                {
                    var_44 &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_27 - 1] [i_27 + 1] [i_27 - 1] [i_27 - 1] [i_28] [i_28]))) < (var_10)));
                    var_45 = ((/* implicit */_Bool) var_16);
                }
                arr_113 [i_0] [i_23] [i_0] [i_0] = ((/* implicit */unsigned long long int) 3645022084U);
                arr_114 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)243);
                arr_115 [2LL] [i_0] [i_23] [i_27] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 713174649U)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) arr_16 [i_27 + 1] [i_27 + 1] [i_27 + 1]))));
            }
            for (unsigned char i_29 = 0; i_29 < 18; i_29 += 2) 
            {
                var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))));
                arr_118 [17LL] [i_23] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)109))));
            }
            for (unsigned char i_30 = 3; i_30 < 16; i_30 += 2) 
            {
                var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) 713174647U)) ? (530886122399791017ULL) : (((/* implicit */unsigned long long int) 3139861339U))));
                /* LoopSeq 2 */
                for (unsigned int i_31 = 0; i_31 < 18; i_31 += 1) /* same iter space */
                {
                    var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_78 [i_30 - 3] [i_30 - 2] [i_30 - 3])) : (var_1)));
                    arr_125 [i_0] [i_30] [i_23] [i_0] = ((/* implicit */_Bool) (unsigned char)131);
                }
                for (unsigned int i_32 = 0; i_32 < 18; i_32 += 1) /* same iter space */
                {
                    arr_130 [(short)15] [i_0] [(unsigned char)0] [(signed char)8] [i_0] [i_23] = ((/* implicit */unsigned short) ((unsigned int) (signed char)114));
                    arr_131 [i_0] [i_30] [(unsigned short)16] = ((/* implicit */short) ((unsigned long long int) arr_80 [i_32] [i_23]));
                    var_49 = ((((/* implicit */unsigned long long int) var_10)) - (13018189220463455813ULL));
                    var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) (~(var_3))))));
                }
                var_51 = ((/* implicit */unsigned int) var_9);
                arr_132 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned short) 3270062350U))) : (((arr_55 [i_0] [i_0] [i_30] [i_23]) ? (((/* implicit */int) (unsigned char)107)) : (var_1)))));
                arr_133 [i_30] [i_0] [17] = ((/* implicit */unsigned short) arr_64 [i_23] [i_23]);
            }
        }
        var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_101 [i_0] [i_0] [i_0] [i_0] [i_0])) ? ((-(518718125))) : (arr_59 [i_0] [(signed char)14] [i_0] [i_0] [(unsigned short)8] [2ULL] [i_0])));
        var_53 = ((/* implicit */_Bool) ((arr_13 [i_0] [i_0] [(short)11] [i_0] [i_0] [i_0] [i_0]) >> (((((/* implicit */int) (unsigned short)3704)) - (3693)))));
    }
    for (int i_33 = 0; i_33 < 13; i_33 += 2) 
    {
        var_54 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))) & (13018189220463455810ULL)));
        var_55 = ((/* implicit */long long int) min((var_55), (((/* implicit */long long int) (~(((7961926352432823828ULL) / (13018189220463455816ULL))))))));
        var_56 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_137 [i_33])) ? (arr_137 [i_33]) : (((/* implicit */int) (unsigned char)248)))));
        arr_138 [i_33] [i_33] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) arr_120 [(unsigned char)13] [i_33] [i_33] [i_33])))));
    }
    var_57 = ((/* implicit */unsigned char) 5384131705354105776LL);
    var_58 = ((/* implicit */unsigned long long int) var_18);
}
