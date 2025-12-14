/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (arr_1 [i_1])));
                var_20 = (max(5852463056027501833, 15139059206729901680));
            }
        }
    }
    var_21 = (max(var_21, (max(var_7, (max(5480290419859187949, 12966453653850363665))))));
    var_22 = ((var_10 ? var_9 : ((max((var_3 > var_10), var_7)))));
    var_23 *= ((~(max(var_3, (~var_18)))));
    #pragma endscop
}
