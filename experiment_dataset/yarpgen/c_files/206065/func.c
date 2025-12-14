/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206065
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 += ((unsigned int) var_14);
                arr_6 [1U] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) < (((arr_7 [i_2]) & (var_0)))));
        arr_9 [i_2] = ((unsigned int) 1563593297U);
    }
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        arr_12 [i_3] [i_3] &= max((((((/* implicit */_Bool) arr_3 [i_3])) ? ((-(var_7))) : (((((/* implicit */_Bool) var_11)) ? (arr_5 [10U] [i_3] [i_3]) : (arr_10 [i_3]))))), ((~(((((/* implicit */_Bool) arr_3 [i_3])) ? (var_16) : (arr_10 [i_3]))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), ((~((-(arr_11 [i_3])))))));
    }
}
