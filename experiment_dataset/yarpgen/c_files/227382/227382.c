/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_6 ? var_4 : var_14)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [10] [11] = (((-127 - 1) ? (-127 - 1) : ((253 ? (-127 - 1) : 34359721984))));
        arr_4 [6] = ((((((((var_5 ? var_13 : (arr_0 [1])))) ? var_6 : 248))) ? ((-34359721982 ? (((arr_2 [i_0]) ? var_10 : (arr_0 [i_0]))) : ((-17 ? 1 : var_7)))) : ((var_1 ? 1 : (-127 - 1)))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    var_17 = (((((1 ? (arr_8 [i_1 + 2] [i_1]) : var_5))) ? 8 : var_11));
                    var_18 += (((arr_11 [i_1] [i_3 - 1] [i_3 - 1] [20]) ? ((((var_11 ? (arr_5 [i_1] [i_3]) : (arr_11 [i_3] [i_3 - 1] [i_3] [i_3 - 1]))))) : (((((250 ? (arr_11 [i_3 - 1] [i_3] [4] [4]) : var_7))) ? 183 : var_9))));
                    arr_13 [i_2] = ((((((1 ? -36 : 1))) ? var_15 : (-127 - 1))));
                }
            }
        }
        var_19 = (min(var_19, 10087854131034658290));
    }
    var_20 = var_5;
    #pragma endscop
}
