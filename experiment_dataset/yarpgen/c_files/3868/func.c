/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3868
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) max(((unsigned short)8036), (arr_9 [3U] [i_0 - 2] [i_0 - 2] [i_0] [5U] [i_1]))))));
                                var_12 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775790LL))));
                                arr_15 [i_4] [(unsigned short)8] [i_2] [i_0] [i_0 - 4] [i_0] = (+(var_3));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (long long int i_5 = 3; i_5 < 11; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_6 = 1; i_6 < 11; i_6 += 1) 
                        {
                            arr_21 [2U] [i_5] [(unsigned short)6] [i_5] [i_0 - 2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_11 [0LL] [6LL] [4LL] [(unsigned short)3] [i_6 + 1])) ? (((/* implicit */long long int) arr_8 [0LL] [0LL] [i_6 - 1])) : (9007199254740991LL))) >> (((((/* implicit */int) var_1)) - (10970)))));
                            var_13 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) arr_16 [i_0] [i_0] [i_0] [i_5 - 3] [(unsigned short)1])))));
                            var_14 *= var_9;
                        }
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_0] [(unsigned short)4] [i_0])))))));
                            var_16 += ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_20 [i_0] [i_5 - 1] [4U])))), (((/* implicit */int) arr_16 [i_0] [5LL] [i_2] [i_5] [5LL]))));
                        }
                        for (unsigned short i_8 = 3; i_8 < 11; i_8 += 1) 
                        {
                            var_17 = ((/* implicit */long long int) max((var_17), (min((((((/* implicit */_Bool) ((long long int) arr_24 [i_0] [i_1] [7LL] [i_5 - 3] [10LL] [i_5 - 3]))) ? (((((/* implicit */_Bool) arr_23 [i_2] [i_5 - 3] [i_2] [i_0] [i_2])) ? (var_8) : (arr_13 [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2]))) : (((/* implicit */long long int) (~(var_6)))))), (max(((-(arr_24 [i_2] [i_1] [i_2] [i_5] [i_2] [i_1]))), (((/* implicit */long long int) ((arr_3 [i_0]) >> (0U))))))))));
                            arr_27 [i_5] [i_5] [(unsigned short)1] [11U] [i_2] = ((/* implicit */long long int) ((unsigned int) var_11));
                            var_18 = ((/* implicit */long long int) var_6);
                            var_19 = ((/* implicit */unsigned short) 705407542U);
                        }
                        /* LoopSeq 3 */
                        for (long long int i_9 = 1; i_9 < 9; i_9 += 3) 
                        {
                            arr_31 [i_5] [i_1] [8LL] [i_5 - 2] [i_5 - 2] = ((/* implicit */unsigned int) 2096640LL);
                            var_20 = ((max((((/* implicit */long long int) var_4)), (arr_13 [i_9] [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9 + 2]))) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_26 [i_1] [i_5 - 2] [i_1] [i_0 - 1] [i_9 + 3] [i_9] [i_5])) : (((/* implicit */int) (unsigned short)355)))) - (35332))));
                            var_21 ^= ((/* implicit */unsigned short) arr_11 [i_9] [i_2] [i_2] [i_1] [i_0 - 1]);
                        }
                        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            arr_36 [i_10] [i_5] [i_2] [i_5] [2U] = ((/* implicit */long long int) (~(((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_7))))) << ((((~(var_9))) - (1013741559U)))))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), ((~(min((arr_28 [i_1] [10LL]), (10U)))))));
                            var_23 = ((3659181664U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64122))));
                        }
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned int) arr_10 [i_0 - 4] [i_1] [i_5 - 3] [i_11]);
                            var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6122662576684327137LL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((1729843362U) == (var_0)))))));
                            arr_39 [i_0] [i_1] [i_5] [i_5] [i_11] = ((/* implicit */unsigned short) var_7);
                        }
                        /* LoopSeq 2 */
                        for (long long int i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
                        {
                            var_26 -= ((unsigned int) ((unsigned short) var_5));
                            var_27 = ((arr_34 [i_12]) * (((arr_25 [i_5 - 2] [i_5] [i_5 - 2] [3LL] [i_0 + 1]) ^ (arr_25 [i_5 - 3] [i_5] [i_2] [i_5 - 2] [i_0 - 4]))));
                            arr_43 [i_12] [i_5] [i_5] [i_2] [i_1] [i_5] [i_0 - 3] = ((/* implicit */long long int) arr_2 [i_0 - 3]);
                            var_28 ^= min((min((min((arr_0 [i_0]), (-1LL))), ((~(-1005068852832350590LL))))), ((+(((((/* implicit */long long int) ((/* implicit */int) var_4))) + (var_7))))));
                        }
                        for (long long int i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
                        {
                            var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (1508804819U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((unsigned int) 4248721384U))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [10U] [i_13]))) + (arr_40 [i_0] [i_0 - 2])))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [10U] [i_13]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) 1479568828U))))) ? (min((3854833846U), (1508804819U))) : (4294967286U))))));
                            arr_46 [i_5] [i_1] [i_1] [i_2] [i_5] [i_5] [i_13] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5]))) : (9U))) != (4248721384U))))));
                            var_30 = ((/* implicit */unsigned int) max(((unsigned short)0), ((unsigned short)64122)));
                        }
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65522)) << (((((long long int) ((long long int) var_1))) - (10990LL))))))));
                    }
                    for (long long int i_14 = 2; i_14 < 9; i_14 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned int) 541165879296LL);
                        arr_49 [i_0] [3U] = ((/* implicit */unsigned int) arr_16 [10U] [3U] [i_1] [i_1] [i_1]);
                        /* LoopSeq 2 */
                        for (long long int i_15 = 0; i_15 < 12; i_15 += 3) 
                        {
                            arr_53 [0LL] [0LL] [i_2] = ((/* implicit */unsigned int) min((1970324836974592LL), (((long long int) arr_48 [11LL] [(unsigned short)5] [(unsigned short)5] [i_14] [i_15]))));
                            var_33 = ((/* implicit */long long int) min((var_33), ((~(min((min((930316258671745389LL), (137371844608LL))), (((/* implicit */long long int) ((arr_47 [i_14] [i_14] [i_14 + 2] [i_14 - 1] [i_14 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64122))))))))))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 12; i_16 += 1) 
                        {
                            var_34 += ((/* implicit */unsigned short) ((unsigned int) (-(arr_19 [i_0 - 3] [i_0] [i_0 - 3] [i_14 + 2] [i_16]))));
                            var_35 = ((/* implicit */unsigned int) (+(arr_52 [i_0 + 1] [i_14 - 2])));
                        }
                        var_36 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)15708))));
                    }
                    for (unsigned short i_17 = 3; i_17 < 11; i_17 += 2) /* same iter space */
                    {
                        var_37 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned short)32697)))) && (((/* implicit */_Bool) ((unsigned short) 18U)))))), (((unsigned short) var_6))));
                        arr_58 [i_2] |= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1] [i_17 - 1])) ? (arr_8 [9LL] [i_0 - 4] [i_17 - 2]) : (arr_8 [i_0 - 2] [i_0 - 4] [i_17 - 2]))));
                        arr_59 [i_0] [i_1] [i_2] [i_17 - 1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_35 [i_0] [9LL] [(unsigned short)2] [i_0 - 2] [i_17] [i_17 - 3] [i_17 - 2])) ? (4248721390U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0 - 3] [i_0] [10U] [i_17 - 1])))))));
                        arr_60 [i_0] [8LL] [i_0] [i_17] [2U] [i_1] = 3914923865U;
                    }
                    for (unsigned short i_18 = 3; i_18 < 11; i_18 += 2) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_0 - 2] [i_18 + 1] [i_18 - 2] [i_18 - 3] [i_18]))))), (((/* implicit */long long int) (unsigned short)64141)))))));
                        var_39 = ((/* implicit */long long int) min((var_39), (9223372036854775790LL)));
                        var_40 = 2213806042U;
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 573472540U)) ? (-8957586901242985666LL) : (((/* implicit */long long int) 67108864U))));
                    }
                }
                for (unsigned int i_19 = 1; i_19 < 9; i_19 += 1) 
                {
                    var_42 = ((/* implicit */unsigned int) (~(min((arr_61 [i_0 - 1] [i_19 - 1]), (arr_61 [i_0 - 2] [i_19 + 2])))));
                    arr_65 [11LL] = ((/* implicit */unsigned int) (~(max(((~(var_5))), (((/* implicit */long long int) arr_29 [i_0] [i_0 + 1] [i_0 - 2] [i_0] [6U] [i_0]))))));
                }
                /* LoopNest 3 */
                for (unsigned short i_20 = 0; i_20 < 12; i_20 += 1) 
                {
                    for (unsigned short i_21 = 0; i_21 < 12; i_21 += 1) 
                    {
                        for (long long int i_22 = 0; i_22 < 12; i_22 += 3) 
                        {
                            {
                                arr_74 [i_0] [i_0] [i_22] [3U] [3U] [i_0] [i_21] = (~((~(3046642832U))));
                                var_43 |= ((/* implicit */unsigned short) min((min((((/* implicit */long long int) (~(1794920559U)))), (arr_37 [i_0 - 3] [i_1] [i_1] [i_21] [i_22] [i_1] [i_22]))), ((~(arr_33 [i_1] [i_1] [i_1])))));
                                var_44 = ((/* implicit */long long int) ((805306368U) == (((((unsigned int) (unsigned short)1394)) ^ (((((/* implicit */_Bool) 1278373508U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3)))))));
                                var_45 = ((/* implicit */long long int) 391818992U);
                                var_46 = ((/* implicit */unsigned int) min((var_46), (arr_69 [2LL] [i_22])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_47 = ((/* implicit */unsigned int) (~(-8070590583017123669LL)));
    /* LoopNest 2 */
    for (long long int i_23 = 0; i_23 < 19; i_23 += 4) 
    {
        for (long long int i_24 = 0; i_24 < 19; i_24 += 2) 
        {
            {
                var_48 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44004)) ? (((/* implicit */long long int) var_3)) : (2069339875878047234LL)))) ? (arr_76 [i_23]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)1394))))))));
                /* LoopSeq 1 */
                for (long long int i_25 = 2; i_25 < 18; i_25 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_26 = 4; i_26 < 17; i_26 += 1) 
                    {
                        for (unsigned int i_27 = 2; i_27 < 16; i_27 += 4) 
                        {
                            {
                                var_49 = min((((/* implicit */long long int) 3903148288U)), (-6307004024968911121LL));
                                var_50 += ((/* implicit */unsigned int) ((unsigned short) arr_77 [i_23] [i_24]));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_28 = 0; i_28 < 19; i_28 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_29 = 3; i_29 < 16; i_29 += 1) /* same iter space */
                        {
                            var_51 = ((/* implicit */long long int) 0U);
                            var_52 ^= min((((/* implicit */long long int) (~(arr_76 [i_25 - 1])))), (((long long int) ((unsigned short) arr_79 [i_25] [i_23]))));
                            var_53 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_2)) ? (-6LL) : (((/* implicit */long long int) (~(arr_85 [i_23] [15U] [15U] [i_25] [i_28] [i_28]))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_30 = 3; i_30 < 16; i_30 += 1) /* same iter space */
                        {
                            arr_93 [i_30] [i_28] [i_25] [17LL] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) var_10)))))) & (arr_76 [i_23])));
                            var_54 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (arr_82 [i_23] [i_24] [i_23] [18LL] [i_30 + 1])));
                        }
                        var_55 = -6804763416051076830LL;
                    }
                    for (unsigned int i_31 = 2; i_31 < 16; i_31 += 1) 
                    {
                        arr_96 [i_31] [i_25] [i_25] [i_23] = ((/* implicit */unsigned int) min((((arr_94 [i_23] [i_25] [i_31 + 2]) | (1001414306529191473LL))), (((/* implicit */long long int) max(((unsigned short)26066), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 332298722U))))))))));
                        var_56 = ((/* implicit */long long int) ((unsigned int) min((-6992859117178774306LL), (560993134040359929LL))));
                        var_57 ^= ((/* implicit */unsigned int) ((min((arr_88 [i_25 - 1] [i_25 - 1] [i_24] [i_25] [i_25 - 1]), (arr_88 [i_25 + 1] [(unsigned short)18] [i_23] [i_25] [i_23]))) / (((8133938231572755951LL) | (-6616064630431538272LL)))));
                        var_58 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_83 [i_25 - 1] [i_25 - 1] [i_25 - 1] [i_25 - 1] [i_25 + 1] [i_25 - 1])) ? (((/* implicit */long long int) arr_76 [(unsigned short)8])) : (min((((/* implicit */long long int) arr_80 [i_23] [i_23] [i_23] [i_31])), (arr_90 [i_23] [i_24] [i_25] [i_31] [i_25])))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)32512)), (1942660960U))))));
                    }
                }
            }
        } 
    } 
}
