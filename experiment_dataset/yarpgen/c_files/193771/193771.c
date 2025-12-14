/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_0 ? ((var_12 ? var_15 : 1)) : var_11))) ? ((96 ? (1 + 1) : var_5)) : (!-105)));
    var_17 = (max(var_17, (((var_0 ? (((90 < var_8) ? ((-59 ? var_12 : var_2)) : (!0))) : var_8)))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [1] &= -75;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 *= ((!(((var_7 ? (((var_8 + 2147483647) >> (-118 + 131))) : (var_1 | var_14))))));
                    arr_10 [i_0] [i_2] = (!-var_10);
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        arr_13 [i_3] = (((~var_9) < (((var_6 * var_9) / var_4))));
        var_19 += (((var_3 % var_14) ? (((((247 ? 1 : var_15)) < var_10))) : (var_13 >= var_3)));
        arr_14 [i_3] = (((~var_6) * (min((~1), (var_8 | var_3)))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = ((((~var_1) >> (1 < var_11))) <= ((var_12 ? var_14 : var_1)));
        arr_20 [i_4] = (min(((-(~-96))), (112 * var_2)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_20 = ((1 ? (var_2 > var_11) : var_11));
        var_21 -= (var_2 != var_11);
        var_22 = (min(var_22, var_5));
    }
    var_23 = ((!(!-var_8)));
    #pragma endscop
}
