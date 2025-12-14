/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((var_7 ? var_9 : var_12))) ? var_13 : var_9))) ? var_3 : var_18));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (~20);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_21 = (min(var_21, var_4));
                        var_22 = (max(var_22, var_17));
                    }
                    arr_11 [1] [i_2] [i_1] [i_0] &= var_3;
                }
            }
        }
        var_23 = (arr_4 [i_0]);
        var_24 *= ((10567 < (arr_7 [i_0] [i_0] [i_0])));
    }

    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_25 = (((((var_10 + 2147483647) << (11300 < var_16))) << (((((((min(10560, (arr_14 [i_4]))))) + 13349)) - 22))));
        var_26 = (min(var_26, var_6));
    }
    var_27 = var_3;
    var_28 -= 103;
    #pragma endscop
}
