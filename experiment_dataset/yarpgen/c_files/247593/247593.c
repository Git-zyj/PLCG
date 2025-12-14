/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = var_0;
        arr_2 [i_0] = (!var_4);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (((-127 - 1) ? var_2 : (arr_6 [i_2 - 1] [i_1] [i_2 + 1])));
                    arr_7 [i_0] [i_2] = ((var_0 ? (arr_6 [i_2 + 1] [i_2] [i_2 + 1]) : var_10));
                    var_18 = 1;
                    var_19 *= (((1 | 30938) >= 34590));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_20 = ((var_9 * (((((var_12 ? var_7 : var_13))) ? ((var_2 ? var_9 : 30938)) : ((max(34598, var_15)))))));
        arr_11 [i_3] [14] &= ((0 ? ((-(max(4043540755, var_0)))) : (((var_5 ? 47 : var_10)))));
    }
    for (int i_4 = 3; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_21 = (min((34597 / var_12), (((max(1, var_1)) * ((((!(arr_8 [i_4] [i_4])))))))));
        var_22 = (min(var_22, ((((((16382 ? var_14 : var_3))) ? 115 : ((-1 ? var_7 : 0)))))));
        var_23 = ((((max(63127, 1))) ? (((arr_8 [i_4 - 3] [i_4]) ? 36947 : var_12)) : (min(((max(1, 1))), ((var_11 ? (arr_14 [i_4] [12]) : 16403))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_24 = var_6;
        arr_17 [6] = (~-1832275532308918970);
        var_25 = ((var_14 ? (((34598 ? var_12 : var_12))) : var_2));
        arr_18 [i_5] = (~144115188075855870);
        var_26 = (((arr_8 [i_5] [i_5]) ? 41 : 1));
    }
    var_27 = (min(var_9, (~-1085971681)));
    #pragma endscop
}
