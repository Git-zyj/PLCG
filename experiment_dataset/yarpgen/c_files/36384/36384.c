/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((1 ? ((max(1, 0))) : ((var_4 ? 1 : 1))))) ? 1 : var_7));
        arr_3 [i_0] [i_0] = 0;
        var_19 *= (max(0, (0 + 0)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((1 ? var_11 : var_12));
        var_20 = 1;
        var_21 += (((1 / var_0) * var_6));
        arr_7 [i_1] [i_1] = (var_18 != var_8);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_22 *= -0;
        var_23 = (max(var_23, (((~((0 ? var_10 : 1)))))));
        var_24 *= 1;

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_2] [i_3] = ((var_3 ? ((1 ? 0 : 1)) : (((arr_4 [i_2] [i_3]) ? var_8 : (arr_4 [i_3] [i_2])))));
            var_25 = (max(var_25, ((max(((var_18 ? var_8 : 0)), ((min(0, 1))))))));
            arr_14 [i_2] [i_3] = (((~var_5) ? (((((~1) + 2147483647)) << ((((var_7 ? 1 : var_15)) - 1)))) : ((min(var_11, 1)))));
            arr_15 [i_3] [i_3] [i_3] = 0;
        }
        arr_16 [i_2] = ((arr_10 [i_2]) || (((1 && var_10) && 1)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_26 = (max(var_26, ((((1 + var_6) ? (arr_17 [1]) : 1)))));
        var_27 *= ((1 ? 1 : 0));
        var_28 *= 1;
        var_29 = ((1 ? 1 : ((0 ? 0 : 0))));
    }
    var_30 = (max(var_30, ((((var_8 | 1) ? (((1 | 1) ? var_9 : 0)) : var_9)))));
    #pragma endscop
}
