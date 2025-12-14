/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211315
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
    var_10 = ((unsigned int) min((4294967295U), (max((17U), (var_1)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_11 |= ((((/* implicit */_Bool) 3666054874U)) ? (arr_0 [14U]) : (var_3));
        arr_3 [i_0] = ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (4294967295U) : (1017805580U)));
    }
    for (unsigned int i_1 = 1; i_1 < 24; i_1 += 4) 
    {
        arr_6 [i_1] = max((var_7), (max((var_0), (min((var_4), (var_0))))));
        var_12 = min((var_1), (1U));
    }
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                {
                    var_13 += min((((unsigned int) ((unsigned int) 1401505413U))), (((/* implicit */unsigned int) ((max((var_0), (var_8))) < (((((/* implicit */_Bool) var_1)) ? (var_8) : (var_4)))))));
                    arr_16 [i_2] [i_3] = ((min((var_1), (var_1))) & ((+(var_7))));
                }
            } 
        } 
        arr_17 [8U] = max((((((/* implicit */_Bool) var_1)) ? (383996838U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1212200597U)) && (((/* implicit */_Bool) 3572221145U)))))))), (((unsigned int) arr_15 [i_2] [i_2] [i_2])));
        arr_18 [i_2] [i_2] = var_4;
    }
    var_14 = ((unsigned int) 2485538284U);
}
