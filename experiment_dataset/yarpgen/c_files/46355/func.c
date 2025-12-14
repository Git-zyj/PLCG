/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46355
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
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        var_16 = min((arr_0 [i_0 + 1]), (min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 3]))));
        var_17 = min((((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0]) : (((unsigned int) arr_2 [2U])))), (max((arr_2 [i_0 - 2]), (((((/* implicit */_Bool) 928442966U)) ? (arr_2 [i_0 - 2]) : (929166317U))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((max((var_3), (min((arr_5 [i_0]), (var_12))))) < ((-(var_4)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_3 + 1]))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1])))))));
                        var_20 -= min((((((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_2]) > (var_13))))) / (max((var_10), (arr_1 [i_2]))))), (min((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_2]))))))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 16; i_4 += 2) 
                    {
                        var_21 = max((((unsigned int) 2822447347U)), (1642625091U));
                        arr_14 [10U] [i_0] [i_2] = ((((/* implicit */_Bool) max((arr_11 [i_0 - 2]), (2782525718U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3173017054U)))))) != (((var_9) - (319139921U))))))) : (var_13));
                        arr_15 [i_0 - 3] [i_2] [i_1] [4U] [i_4] [i_4] |= min((((var_5) - (arr_6 [i_2] [i_2]))), (min((arr_11 [14U]), (arr_6 [i_2] [i_1 - 1]))));
                        var_22 = var_14;
                    }
                    var_23 &= min((arr_12 [i_2] [i_0 + 1] [i_0 - 3] [i_2]), (arr_4 [i_2] [i_1 + 1]));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        arr_19 [i_5] = max((min((var_14), (arr_16 [i_5] [i_5]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_5])) && (((/* implicit */_Bool) arr_17 [i_5] [i_5]))))));
        var_24 = arr_17 [i_5] [i_5];
    }
    /* LoopNest 3 */
    for (unsigned int i_6 = 4; i_6 < 10; i_6 += 4) 
    {
        for (unsigned int i_7 = 1; i_7 < 10; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                {
                    var_25 |= ((unsigned int) ((arr_10 [i_7 + 2] [i_6 - 2] [i_8] [i_8]) < (var_9)));
                    var_26 = ((((((/* implicit */_Bool) arr_12 [i_8] [i_7 + 1] [i_6 - 1] [i_8])) ? (var_15) : (var_4))) ^ (((((/* implicit */_Bool) var_4)) ? (var_12) : (arr_12 [i_8] [i_7 + 2] [i_6 - 2] [i_8]))));
                    var_27 = ((((/* implicit */_Bool) arr_18 [i_7 + 1])) ? (min((arr_18 [i_7 + 2]), (arr_18 [i_7 - 1]))) : (arr_18 [i_7 + 2]));
                    var_28 = ((((((/* implicit */_Bool) arr_26 [i_8] [i_8] [i_7 + 1])) ? (((arr_8 [i_6] [i_6 - 1] [i_7] [i_8] [i_8]) * (var_13))) : (var_7))) / ((~(((var_9) & (arr_21 [0U]))))));
                }
            } 
        } 
    } 
}
