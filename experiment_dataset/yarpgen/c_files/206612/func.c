/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206612
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((((/* implicit */_Bool) max((((unsigned int) var_1)), (((/* implicit */unsigned int) ((2147483644) / (((/* implicit */int) arr_3 [i_0] [i_1])))))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_1])));
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) arr_2 [i_1]));
                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (_Bool)1))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */signed char) 7LL);
            }
        } 
    } 
    var_12 = ((/* implicit */int) var_9);
}
