/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49114
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
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */int) arr_4 [i_0]);
                arr_5 [i_0] [(short)9] [6LL] = ((/* implicit */short) ((((/* implicit */_Bool) 1704664177)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) var_7))));
            }
        } 
    } 
    var_13 *= ((/* implicit */short) max((((/* implicit */int) (signed char)0)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (var_2)))));
}
