/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236044
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
    var_14 = var_9;
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_15 = arr_1 [i_0];
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_6 [i_0]))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_0] [i_0]))));
                    var_17 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) var_2)))))));
                    arr_7 [i_1] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)80))));
                }
            } 
        } 
        var_18 -= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 + 1])) / (((/* implicit */int) arr_3 [i_0] [i_0]))));
    }
    var_19 = ((/* implicit */signed char) max((var_19), (var_11)));
    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-38))));
}
