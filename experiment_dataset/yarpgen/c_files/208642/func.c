/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208642
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] &= ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_1 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1]))) : ((~(arr_5 [i_1]))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1 - 1])) ? (arr_2 [i_0]) : (min((arr_2 [i_0]), (((/* implicit */unsigned int) (short)11170))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1]))))) : (((/* implicit */int) (short)11170)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_18);
}
