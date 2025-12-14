/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_12 = (-1 ? (arr_1 [i_0 - 2]) : (var_6 + 247));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = var_7;
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_12 [1] [i_1] [8] [i_3] = var_5;
                        arr_13 [i_1] [i_1] [i_1] [i_1] [i_3] [i_1] = var_8;
                    }
                }
            }
            var_13 = (max(var_13, (((var_11 ? 65535 : var_4)))));
        }
        arr_14 [8] = ((var_1 ? (arr_10 [i_0 - 2] [i_0 + 3]) : (arr_0 [i_0 - 2])));
        var_14 = (max(var_14, 401721758));
        arr_15 [15] [15] = (401721758 / var_7);
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_20 [i_4] = ((23 ? (~12) : ((1 * (-9223372036854775807 - 1)))));
        arr_21 [i_4] = -7461934244354858136;
        arr_22 [i_4] = var_8;
        var_15 = 1;
        var_16 *= (max((arr_2 [i_4]), 8589934591));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        arr_26 [i_5] = ((!(arr_11 [i_5 - 3] [i_5 - 1] [0] [i_5])));
        arr_27 [i_5] = (!65525);
        arr_28 [i_5 - 2] [i_5] = (~var_2);
    }
    var_17 = (~var_11);
    var_18 = ((~((401721758 ? -18171 : 1))));
    var_19 = (-1 == var_9);
    #pragma endscop
}
