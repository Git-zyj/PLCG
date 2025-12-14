/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223466
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_17 = ((unsigned int) (-(arr_5 [i_1] [i_1] [i_1 + 1])));
                    var_18 = ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_5)) ? (arr_1 [i_1 + 1] [i_1 + 2]) : (var_6))) : (2711266403U));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            {
                var_19 *= ((((((/* implicit */_Bool) (+(3236408172U)))) ? ((~(var_4))) : (max((var_15), (var_0))))) % (((((/* implicit */_Bool) var_0)) ? ((~(3236408172U))) : (arr_11 [5U] [i_4]))));
                arr_13 [i_3] [i_3] [i_3] &= ((((/* implicit */_Bool) (~(((unsigned int) 257155793U))))) ? (min((arr_12 [i_4] [i_4] [i_3]), (arr_8 [i_4] [i_3]))) : (((((/* implicit */_Bool) var_16)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 257155794U)))))))));
                arr_14 [i_3] [19U] = var_5;
            }
        } 
    } 
}
