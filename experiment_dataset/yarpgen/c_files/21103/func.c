/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21103
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (min((var_2), (((((/* implicit */_Bool) ((var_1) - (var_19)))) ? (3U) : (26U)))))));
    var_21 = var_14;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        arr_2 [0U] [i_0 + 2] |= 4294967257U;
        var_22 *= (-(((((((/* implicit */_Bool) 1244951943U)) ? (38U) : (0U))) ^ (((unsigned int) arr_0 [i_0 + 2] [i_0 + 2])))));
    }
    for (unsigned int i_1 = 4; i_1 < 16; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((unsigned int) ((((/* implicit */_Bool) min((var_13), (arr_0 [i_1 - 4] [i_1 - 4])))) ? (var_1) : ((+(1221430868U)))));
        arr_7 [i_1] [i_1] = arr_4 [i_1];
        arr_8 [i_1] [i_1] = ((unsigned int) arr_5 [i_1]);
    }
    for (unsigned int i_2 = 1; i_2 < 16; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    arr_17 [i_2] [i_3 + 1] [i_2] = ((((/* implicit */_Bool) max((38U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5)))))))) ? (((arr_11 [i_3 + 1] [i_2 + 1]) - (arr_0 [i_3 - 1] [i_2 + 3]))) : (min((((((/* implicit */_Bool) arr_13 [i_4] [i_2] [i_2 + 2])) ? (1038830336U) : (3924196635U))), (((((/* implicit */_Bool) arr_14 [i_2] [i_3 - 1] [i_3 - 1] [8U])) ? (var_0) : (arr_0 [i_2] [i_2]))))));
                    arr_18 [i_2] [i_2] [i_4] = arr_15 [i_2] [i_3 + 1];
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 4; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) min((var_23), ((~(max((arr_14 [2U] [10U] [i_6 - 1] [2U]), (arr_14 [16U] [i_6] [i_6 - 2] [16U])))))));
                                arr_25 [i_2] [11U] [8U] [4U] [4U] [i_2] = ((((/* implicit */_Bool) ((1244951934U) & (24U)))) ? (((((/* implicit */_Bool) arr_20 [i_2] [i_6 + 1] [i_6 - 1] [i_2])) ? (arr_20 [i_2] [i_3 - 1] [7U] [i_6]) : (arr_20 [i_2] [4U] [i_4] [i_2]))) : (arr_20 [i_2] [7U] [i_4] [i_4]));
                            }
                        } 
                    } 
                    var_24 *= min(((+(((((/* implicit */_Bool) 67108863U)) ? (arr_12 [i_3]) : (arr_9 [6U] [6U]))))), ((((!(((/* implicit */_Bool) 4294967295U)))) ? (arr_21 [i_2 + 1] [i_2 + 2] [i_2 + 2] [6U]) : (((var_3) >> (29U))))));
                    arr_26 [i_2] = 358082049U;
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_7 = 1; i_7 < 18; i_7 += 1) 
        {
            for (unsigned int i_8 = 4; i_8 < 16; i_8 += 3) 
            {
                for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    {
                        var_25 -= min((var_3), (var_6));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((((/* implicit */_Bool) max((arr_21 [13U] [13U] [i_8 + 1] [i_9]), (max((0U), (arr_30 [13U] [i_8 - 1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 370770655U)) ? (4294967286U) : (arr_14 [i_9] [i_8] [i_7 + 1] [i_9])))) ? (3531685935U) : (max((arr_16 [i_2] [i_7 - 1] [i_2] [i_9]), (arr_9 [i_9] [10U]))))) : (min((2529129613U), (4294967295U)))))));
                    }
                } 
            } 
        } 
        arr_34 [i_2] = 298307905U;
    }
}
