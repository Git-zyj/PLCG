/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((-(((((var_5 ? var_9 : var_9))) ? ((var_10 ? var_13 : 0)) : (!var_12)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (max(((((arr_6 [i_2] [i_1] [7]) ? (arr_3 [i_1] [i_2]) : 1))), (((arr_6 [i_0] [i_1] [i_1]) / (var_8 / var_11)))));
                    arr_7 [i_2] [i_2] = ((-((1 ? 2459693748568817396 : var_14))));
                    arr_8 [i_0] [i_0] [i_0] &= ((11672334692281020007 && (arr_2 [i_0])));

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_18 = (arr_10 [i_3 + 3]);
                        var_19 = (max(var_19, 56580));
                    }
                }
            }
        }
    }
    var_20 = 255;
    var_21 = (max(var_21, var_6));
    var_22 = var_0;
    #pragma endscop
}
