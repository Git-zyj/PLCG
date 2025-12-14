/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19951
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
    var_12 = var_4;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = 1827310520U;
        arr_3 [i_0] = ((var_10) + (((var_6) + (arr_0 [i_0 - 1]))));
    }
    var_13 = var_7;
    /* LoopNest 3 */
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    var_14 |= ((((/* implicit */_Bool) max((arr_1 [i_1 - 1] [i_1 - 2]), (arr_1 [i_1 + 2] [i_1 + 2])))) ? ((~(arr_10 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 2]))) : (((unsigned int) (~(arr_11 [i_2] [i_2] [i_2])))));
                    /* LoopSeq 4 */
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_4] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1] [i_1 - 2]))));
                            arr_16 [i_5] [i_4] [i_4] [i_4] [i_4] [i_1] = ((((725363048U) & (var_1))) - (2467656791U));
                        }
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            arr_20 [8U] [i_2] [i_4] [i_6] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (var_1) : (3626050509U))) / (arr_1 [i_1 - 1] [i_2]))))));
                            arr_21 [i_4] [i_2] [i_2] = max((max(((~(var_6))), (var_5))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_10 [i_6] [i_4] [i_3] [i_2]) + (2467656775U))))))));
                            var_16 = 3987595564U;
                        }
                        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967273U))));
                    }
                    for (unsigned int i_7 = 2; i_7 < 13; i_7 += 2) 
                    {
                        var_18 = arr_14 [i_1] [i_2] [i_3] [i_7] [i_1];
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 2; i_8 < 14; i_8 += 4) 
                        {
                            var_19 = ((((/* implicit */_Bool) 1827310505U)) ? (8191U) : (1368541293U));
                            var_20 = (((!(((/* implicit */_Bool) max((4294967295U), (307371734U)))))) ? (var_4) : (4203639763U));
                        }
                    }
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        arr_29 [i_9] [i_3] [i_2] [8U] [i_2] [8U] = (~(var_7));
                        var_21 = ((((/* implicit */_Bool) 4294967293U)) ? ((-(((((/* implicit */_Bool) 131071U)) ? (2704342728U) : (1827310520U))))) : ((+(((unsigned int) arr_0 [i_1])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_10 = 3; i_10 < 16; i_10 += 3) 
                        {
                            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (1082767174U) : (var_7)))) ? (var_5) : (((((/* implicit */_Bool) 13U)) ? (var_10) : (var_7))));
                            var_23 = ((((/* implicit */_Bool) arr_5 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (arr_12 [i_10 + 1] [i_9] [5U] [i_1 + 1]));
                            arr_32 [4U] [i_9] [0U] [i_3] [10U] [4U] &= ((unsigned int) 1911107411U);
                            arr_33 [i_1] [i_1] [i_3] [i_9] [i_10] [9U] [i_10] = ((var_3) | (arr_17 [i_1] [i_10 - 2] [i_3] [i_1 - 2]));
                        }
                    }
                    for (unsigned int i_11 = 3; i_11 < 14; i_11 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 3) 
                        {
                            arr_41 [i_12] [14U] [i_11 + 3] [i_2] [i_2] [i_1] = max((((((/* implicit */_Bool) var_11)) ? (arr_12 [i_1] [i_1 - 1] [i_11 - 1] [i_1]) : (arr_12 [i_1] [i_1 - 1] [i_11 - 3] [i_1]))), (var_7));
                            arr_42 [11U] [0U] [i_3] [i_3] [i_3] [i_3] [i_3] = max(((+(((1983203161U) & (var_1))))), (arr_0 [16U]));
                            arr_43 [i_1] [i_1] [1U] [i_1] [i_11] [i_1] [i_12] = (-(var_4));
                            var_24 |= 2575543174U;
                            arr_44 [i_1 + 2] [5U] [i_2] [0U] [i_3] [i_11] [i_1 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_12] [12U] [i_3] [i_3] [i_2] [i_1 + 1])) && (((/* implicit */_Bool) 2132404115U))));
                        }
                        /* vectorizable */
                        for (unsigned int i_13 = 1; i_13 < 15; i_13 += 4) 
                        {
                            var_25 = ((((/* implicit */_Bool) arr_35 [i_13 + 1] [i_11 - 3] [i_3] [i_1 - 1])) ? ((~(738271779U))) : (1562399343U));
                            var_26 = (~(2132404115U));
                            arr_49 [i_13 + 1] [i_13] [i_3] [i_13] [i_1] = (~(arr_5 [i_13 + 2]));
                        }
                        var_27 = ((/* implicit */unsigned int) max((var_27), (var_8)));
                        var_28 = var_5;
                        var_29 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_1 + 2] [i_2] [i_3] [i_3])) ? (var_3) : (1827310529U)))) ? (((((/* implicit */_Bool) 1528716410U)) ? (var_8) : (3528720198U))) : (max((var_6), (var_5))))), (min((min((var_3), (6U))), (((((/* implicit */_Bool) arr_34 [i_11] [i_3] [i_2] [i_1 + 1])) ? (var_1) : (arr_19 [i_1] [i_1] [i_3] [i_3] [i_3] [i_11]))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 1) 
    {
        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_51 [i_14] [i_14]))));
        arr_52 [i_14] = (+(((((/* implicit */_Bool) arr_51 [3U] [i_14])) ? (arr_0 [i_14]) : (732857253U))));
        /* LoopNest 3 */
        for (unsigned int i_15 = 2; i_15 < 17; i_15 += 1) 
        {
            for (unsigned int i_16 = 0; i_16 < 18; i_16 += 3) 
            {
                for (unsigned int i_17 = 0; i_17 < 18; i_17 += 4) 
                {
                    {
                        var_31 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2766250885U)) ? (2766250885U) : (2216007180U)))))) ? (((((/* implicit */_Bool) var_2)) ? (arr_54 [7U] [5U]) : (var_1))) : (max((1227937523U), (1827310505U))));
                        arr_63 [i_17] [i_16] [i_15] [i_17] |= var_1;
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_18 = 0; i_18 < 18; i_18 += 4) 
        {
            var_32 = 4137032851U;
            arr_66 [2U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_8) : (arr_64 [i_14] [i_18])))) ? ((~(2311764135U))) : (((((/* implicit */_Bool) arr_64 [i_14] [i_14])) ? (21U) : (3861062915U))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_19 = 0; i_19 < 18; i_19 += 1) 
            {
                var_33 = ((/* implicit */unsigned int) min((var_33), (((unsigned int) 2398738767U))));
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 18; i_20 += 2) 
                {
                    for (unsigned int i_21 = 0; i_21 < 18; i_21 += 2) 
                    {
                        {
                            arr_75 [10U] [i_18] [4U] [i_20] [i_18] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_72 [7U] [1U] [1U] [i_20] [1U]))));
                            arr_76 [i_14] [i_18] [i_14] [i_20] [i_18] = var_7;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_22 = 0; i_22 < 18; i_22 += 1) 
                {
                    for (unsigned int i_23 = 0; i_23 < 18; i_23 += 4) 
                    {
                        {
                            arr_82 [i_14] [i_18] [i_19] [16U] [i_22] [i_18] [i_23] = ((/* implicit */unsigned int) ((var_1) >= (((((/* implicit */_Bool) var_9)) ? (2244852756U) : (150453422U)))));
                            var_34 = ((/* implicit */unsigned int) max((var_34), (((1669187415U) * (12U)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_24 = 0; i_24 < 18; i_24 += 4) 
                {
                    arr_87 [i_24] [5U] [3U] [i_18] [i_14] = ((unsigned int) arr_67 [i_19]);
                    arr_88 [i_18] [i_19] [i_24] = var_3;
                    var_35 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_78 [0U] [0U] [i_24])))))) : (arr_65 [i_24] [1U] [12U]));
                }
                /* LoopSeq 1 */
                for (unsigned int i_25 = 2; i_25 < 14; i_25 += 4) 
                {
                    arr_93 [1U] [i_19] [i_14] [i_14] [i_14] = arr_83 [i_14] [i_18] [i_25];
                    var_36 = arr_1 [i_25 + 1] [i_25 + 2];
                    var_37 += ((arr_55 [0U]) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1950901422U)) && (((/* implicit */_Bool) arr_73 [i_14] [9U] [12U])))))));
                }
            }
            /* vectorizable */
            for (unsigned int i_26 = 4; i_26 < 14; i_26 += 3) 
            {
                var_38 += var_5;
                /* LoopNest 2 */
                for (unsigned int i_27 = 0; i_27 < 18; i_27 += 1) 
                {
                    for (unsigned int i_28 = 2; i_28 < 16; i_28 += 2) 
                    {
                        {
                            var_39 = ((((/* implicit */_Bool) 2467656776U)) ? (3169443344U) : (1528716410U));
                            arr_102 [i_28 + 2] [i_26] [i_18] [i_26] [16U] = arr_97 [i_26] [i_26];
                            var_40 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_60 [i_26 + 1] [i_26 - 4] [i_26 - 3]))));
                            var_41 = var_11;
                        }
                    } 
                } 
                arr_103 [i_26] [4U] [6U] [i_18] = ((/* implicit */unsigned int) ((arr_92 [i_26 + 2] [9U] [i_26] [2U] [i_26 - 4] [2U]) <= (arr_96 [i_26 + 4] [i_18] [17U])));
            }
        }
        for (unsigned int i_29 = 0; i_29 < 18; i_29 += 2) 
        {
            var_42 -= max(((+(arr_80 [i_29] [3U] [i_29] [i_14] [i_14]))), (524287U));
            /* LoopSeq 2 */
            for (unsigned int i_30 = 0; i_30 < 18; i_30 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_31 = 3; i_31 < 16; i_31 += 3) 
                {
                    for (unsigned int i_32 = 0; i_32 < 18; i_32 += 4) 
                    {
                        {
                            var_43 = ((((/* implicit */_Bool) arr_111 [i_14] [3U] [6U])) ? ((~(var_2))) : (((((/* implicit */_Bool) 2766250894U)) ? ((~(3117427707U))) : (((1528716410U) & (var_2))))));
                            var_44 ^= ((unsigned int) arr_62 [i_31 - 2] [i_31 + 1] [i_32] [i_32]);
                        }
                    } 
                } 
                var_45 = max((4294967295U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_60 [i_29] [i_29] [i_14]))))));
                arr_115 [i_14] [i_14] = max((4U), (((4294967295U) << (((1528716404U) - (1528716380U))))));
            }
            for (unsigned int i_33 = 1; i_33 < 17; i_33 += 4) 
            {
                arr_119 [i_33 - 1] [i_29] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                var_46 = var_11;
                var_47 = ((0U) | (var_1));
            }
            arr_120 [i_14] [i_29] = arr_70 [i_14] [10U] [i_14];
            arr_121 [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4271636635U))));
        }
    }
    for (unsigned int i_34 = 0; i_34 < 17; i_34 += 2) 
    {
        arr_124 [13U] |= ((4294967273U) / (var_3));
        /* LoopNest 2 */
        for (unsigned int i_35 = 0; i_35 < 17; i_35 += 2) 
        {
            for (unsigned int i_36 = 0; i_36 < 17; i_36 += 1) 
            {
                {
                    arr_130 [i_35] [5U] = ((((((/* implicit */_Bool) 3383278536U)) ? (var_3) : (((unsigned int) arr_117 [2U])))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((2225081189U) * (4294967295U)))))))));
                    arr_131 [i_35] = ((((/* implicit */_Bool) var_11)) ? ((-(var_11))) : (var_3));
                }
            } 
        } 
        var_48 = ((((/* implicit */_Bool) var_11)) ? (min(((+(2467656782U))), (((unsigned int) arr_86 [12U])))) : (var_10));
    }
}
