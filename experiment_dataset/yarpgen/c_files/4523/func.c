/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4523
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
    var_17 = var_16;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (~(((((arr_3 [i_0] [i_0] [i_0]) + (2147483647))) << (((((/* implicit */int) var_15)) - (4407)))))));
                arr_7 [i_0] = arr_2 [i_0];
                var_19 = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3415352429U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (((/* implicit */int) var_15)) : ((~(((/* implicit */int) arr_2 [i_0]))))));
            }
        } 
    } 
}
