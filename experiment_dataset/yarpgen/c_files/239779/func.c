/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239779
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_20 = ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42230))) : (((((/* implicit */_Bool) (unsigned short)65533)) ? (3909308589U) : (((/* implicit */unsigned int) arr_3 [11U] [i_0] [i_1])))))) % (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)908), (arr_2 [i_1]))))));
                var_21 = (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) : (((1611602051U) << (((2683365245U) - (2683365219U))))));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))))));
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) | (2683365245U))), (min((max((var_16), (((/* implicit */unsigned int) 1796313307)))), (max((1611602047U), (((/* implicit */unsigned int) var_15)))))))))));
            }
        } 
    } 
    var_24 = var_17;
}
