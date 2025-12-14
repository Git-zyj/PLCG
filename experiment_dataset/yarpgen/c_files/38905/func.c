/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38905
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
    var_16 = ((/* implicit */short) var_9);
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_4))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (((unsigned short) arr_3 [i_0 - 1] [i_1]))));
                var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2798684838U)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_1 + 2]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)118))) + (1496282465U)))));
                var_20 = ((/* implicit */unsigned char) (+(min((((/* implicit */int) arr_2 [i_0 - 4] [i_0 - 4] [i_0 - 4])), (((((/* implicit */int) arr_0 [i_0] [i_1 + 2])) * (((/* implicit */int) (short)0))))))));
            }
        } 
    } 
}
