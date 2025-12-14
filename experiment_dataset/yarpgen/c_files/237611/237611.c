/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = (arr_2 [i_0] [i_0]);
                var_20 = (min(var_20, var_12));
                var_21 = (min(var_21, (((-(arr_2 [i_0] [i_1]))))));
            }
        }
    }
    var_22 -= (min(((((var_11 ? var_9 : var_14)))), var_15));
    var_23 = (max((((var_5 < ((min(160, 1)))))), var_18));
    #pragma endscop
}
