/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((((min(((var_13 ? var_7 : var_5)), ((max(var_5, var_2)))))) ? var_7 : (min((((var_2 ? var_4 : var_4))), (max(var_7, var_3))))));
        var_16 = (min(var_16, (((((min(126, 0))) ? (max(var_11, var_10)) : var_11)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((var_2 ? var_12 : var_9));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        arr_18 [i_1] [i_1] [i_2] [i_1] [2] = var_0;
                        arr_19 [i_4] [i_1] [i_1] [i_1] [i_1] &= var_5;
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        var_17 = (max(((min(var_2, var_2))), (min(var_11, var_2))));
        var_18 = ((var_2 ? ((min(var_5, var_9))) : ((var_11 ? var_0 : var_12))));
        arr_22 [i_5] [i_5] = (min((((var_7 ? var_4 : var_10))), (max(var_3, var_4))));
    }
    var_19 = (min(var_19, (((var_5 ? ((var_11 ? var_10 : var_11)) : var_2)))));
    var_20 -= var_3;
    #pragma endscop
}
