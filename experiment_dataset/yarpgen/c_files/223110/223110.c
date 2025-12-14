/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (arr_2 [i_0]);
        var_18 = (min(var_18, var_5));
        var_19 = (((-(arr_0 [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_20 = (arr_3 [i_1 + 1] [i_1 + 1]);
                        var_21 = ((0 == (((arr_4 [i_0] [i_1]) ? ((~(arr_2 [i_0]))) : (((var_3 ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : var_1)))))));
                    }
                }
            }
        }
    }
    var_22 = (!-var_4);
    var_23 = (max(var_23, (((var_2 ? (var_14 / var_5) : var_6)))));
    var_24 = (min(var_12, var_5));
    #pragma endscop
}
