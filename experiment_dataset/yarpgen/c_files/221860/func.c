/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221860
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
    var_15 = min((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_14)) ? (var_1) : (var_9))) : (var_12))), (max((234881024U), (min((var_6), (4294967295U))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = 2545984794U;
                arr_8 [i_0] = 4294967295U;
                arr_9 [i_0] = var_11;
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_16 = min((min((((923689420U) | (3028879958U))), (max((2509879690U), (var_5))))), (min((min((arr_15 [i_4] [i_3] [i_3] [7U] [7U] [9U] [i_0]), (arr_11 [i_0] [i_2] [i_0] [i_0]))), (arr_5 [i_0] [i_0]))));
                                var_17 = ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_1] [i_0]))) ? (((((arr_5 [i_3] [i_4]) <= (1513610165U))) ? (var_11) : (((arr_2 [i_2]) & (var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (arr_12 [i_0] [i_0]) : (arr_4 [i_2] [i_0]))) < (2725981601U))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (var_1) : (min((var_13), (var_5)))));
}
