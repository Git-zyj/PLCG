/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196679
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((((((((/* implicit */_Bool) 1286494553U)) ? (4294967292U) : (var_19))) <= (var_7))) ? (((((/* implicit */_Bool) ((2317459013U) / (3U)))) ? ((-(var_7))) : (max((2394289382U), (4294967270U))))) : (((unsigned int) ((((/* implicit */_Bool) var_0)) ? (1013023125U) : (var_4))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_21 = var_19;
        arr_2 [i_0] = ((unsigned int) 0U);
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_22 = 2044633221U;
                                arr_15 [i_0] [11U] [i_2] [i_3] [i_3] = max((((unsigned int) max((var_8), (1432294431U)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (743862457U))))))));
                                arr_16 [i_0] &= ((((/* implicit */_Bool) min(((+(arr_3 [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) 3129148710U)) ? (var_6) : (arr_14 [i_4] [i_0] [i_0] [i_0])))))) ? ((((+(4294967287U))) >> (((((((/* implicit */_Bool) 4190208U)) ? (2188069627U) : (4164963232U))) - (2188069617U))))) : (4290777087U));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        var_23 = ((((/* implicit */_Bool) var_14)) ? (((unsigned int) min((var_3), (arr_7 [i_5] [i_2] [i_0] [i_0])))) : (max((arr_5 [i_1 - 1] [i_1 - 1]), (arr_11 [i_1 + 3] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1] [i_2]))));
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 4) 
                        {
                            var_24 += ((((unsigned int) (~(arr_0 [i_0])))) & ((~(4294967295U))));
                            var_25 -= arr_3 [i_0] [i_1] [i_5];
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((((/* implicit */_Bool) 717323920U)) ? ((+(arr_20 [i_0] [i_1] [i_1] [i_5] [i_7] [i_5]))) : ((+(var_11)))))));
                            var_27 = ((((/* implicit */_Bool) 3698549441U)) ? ((~(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [12U] [12U] [i_2]) <= (var_17))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            arr_27 [i_0] [i_1 + 3] [i_2] [i_1 + 3] [i_1 + 3] [i_8] = ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_9))))), (max((arr_17 [i_1] [i_1] [i_0]), (3577643351U))))) >> (((797651149U) - (797651119U))));
                            arr_28 [i_1] [i_2] [i_5] [i_8] = (~(((((/* implicit */_Bool) arr_7 [i_5] [i_0] [i_1] [i_0])) ? ((+(arr_23 [i_8] [i_1] [i_2] [i_1]))) : (((unsigned int) 2309081267U)))));
                            var_28 = var_10;
                        }
                        var_29 = ((((/* implicit */_Bool) max((arr_1 [i_1 + 4] [i_1 + 3]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))) ? ((~(arr_25 [i_5] [i_0] [i_2] [i_5] [i_1 + 1]))) : ((-(arr_11 [i_0] [i_0] [i_1] [i_2] [i_1] [i_5]))));
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1160699719U)) ? (((unsigned int) arr_7 [i_0] [i_1] [i_0] [i_5])) : (((unsigned int) arr_24 [i_0] [i_2]))))) ? ((-(max((var_5), (arr_9 [i_2] [i_1] [i_2] [i_2] [i_0] [i_0]))))) : (max((((((/* implicit */_Bool) 1985886028U)) ? (var_13) : (arr_5 [i_5] [i_5]))), (((((/* implicit */_Bool) 275366817U)) ? (67108863U) : (2305323558U)))))))));
                        arr_29 [i_5] [i_0] [i_0] = 584267949U;
                    }
                    var_31 = arr_8 [i_0] [i_1] [i_0];
                }
            } 
        } 
    }
    var_32 *= var_8;
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_9 = 2; i_9 < 19; i_9 += 3) 
    {
        arr_32 [i_9 - 2] = ((((/* implicit */_Bool) 876679802U)) ? ((-(arr_31 [i_9]))) : (var_0));
        var_33 = ((2150739683U) ^ (2144227606U));
        arr_33 [i_9 - 1] = (+((-(2233524443U))));
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            for (unsigned int i_11 = 2; i_11 < 16; i_11 += 3) 
            {
                {
                    var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2269789049U))));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        var_35 = (+(arr_38 [i_11 - 2] [i_11 + 1] [i_11 - 2]));
                        arr_41 [i_12] = (+(2269789050U));
                    }
                    arr_42 [i_9] [i_10] = (~(3944763390U));
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        arr_45 [i_9] [i_10] [i_10] [i_13] = var_17;
                        arr_46 [8U] [7U] [i_9] |= (-(4153437837U));
                        arr_47 [i_10] [i_10] [i_10] = 2803334057U;
                    }
                }
            } 
        } 
    }
    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 4) /* same iter space */
    {
        arr_50 [i_14] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(169593244U)))) ? (max((arr_40 [15U]), (var_9))) : (max((var_17), (584267944U)))))) ? (var_3) : (((((((/* implicit */_Bool) 3460459317U)) ? (arr_44 [i_14] [i_14] [18U] [i_14] [i_14]) : (arr_39 [i_14] [i_14] [i_14] [16U]))) | (max((3789965712U), (834507971U))))));
        arr_51 [i_14] [i_14] = max((((max((var_6), (3710699351U))) - (var_6))), (((unsigned int) var_17)));
    }
    /* vectorizable */
    for (unsigned int i_15 = 0; i_15 < 17; i_15 += 4) /* same iter space */
    {
        var_36 = ((((((/* implicit */_Bool) var_0)) ? (var_17) : (4194303U))) % (arr_38 [i_15] [i_15] [i_15]));
        var_37 *= ((unsigned int) (~(3121071026U)));
        arr_54 [i_15] [i_15] = ((((/* implicit */_Bool) 2993052655U)) ? (arr_39 [i_15] [i_15] [i_15] [i_15]) : (((((/* implicit */_Bool) arr_37 [i_15] [i_15] [10U] [i_15])) ? (var_3) : (var_8))));
    }
    for (unsigned int i_16 = 0; i_16 < 17; i_16 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_17 = 0; i_17 < 17; i_17 += 2) 
        {
            for (unsigned int i_18 = 1; i_18 < 13; i_18 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 0; i_19 < 17; i_19 += 1) 
                    {
                        for (unsigned int i_20 = 0; i_20 < 17; i_20 += 2) 
                        {
                            {
                                arr_69 [i_16] [i_18] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_18 + 4])) ? (arr_58 [i_18 + 3]) : (arr_58 [i_18 + 4])))) ? (((((/* implicit */_Bool) arr_58 [i_18 + 2])) ? (arr_58 [i_18 + 2]) : (arr_58 [i_18 + 4]))) : (((arr_58 [i_18 + 4]) & (arr_58 [i_18 + 4]))));
                                var_38 |= (+(3971984171U));
                            }
                        } 
                    } 
                    arr_70 [i_18] [6U] [6U] [i_18] = ((((/* implicit */_Bool) arr_39 [i_16] [19U] [i_17] [i_18])) ? (((unsigned int) var_3)) : (((((/* implicit */_Bool) min((arr_39 [8U] [8U] [12U] [i_17]), (var_9)))) ? (3463992302U) : ((-(var_16))))));
                }
            } 
        } 
        var_39 ^= max((max((arr_34 [i_16]), (min((834507977U), (arr_64 [i_16] [i_16] [i_16] [i_16]))))), (((((/* implicit */_Bool) 2893363000U)) ? (arr_30 [i_16]) : (arr_62 [i_16] [i_16] [i_16]))));
        arr_71 [i_16] = arr_48 [i_16];
    }
}
