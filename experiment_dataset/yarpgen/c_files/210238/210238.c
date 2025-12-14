/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_2] = var_0;
                    arr_10 [i_1] = ((~(arr_3 [i_0] [i_1] [i_0])));
                }
            }
        }
    }
    var_21 = ((((var_9 / (866133912 > var_1)))) ? var_6 : (((var_1 == (var_7 > var_18)))));
    var_22 = ((var_12 ? (((var_14 ? var_5 : var_7))) : ((var_15 ? ((var_15 ? var_10 : var_12)) : 0))));
    var_23 = (max((var_19 - var_8), (min(var_5, var_3))));
    #pragma endscop
}
