/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 *= var_10;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (var_1 ? (((arr_2 [i_0 + 2]) ? (arr_2 [i_0 + 2]) : var_0)) : ((((max(2147483647, var_10))) ? var_3 : ((max(25374, var_7))))));
        var_15 = (arr_2 [i_0]);
        var_16 -= ((!((((((var_3 ? var_4 : var_9))) ? var_1 : (((var_6 ? 2147483638 : var_10))))))));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_17 *= (((-(arr_1 [i_0 + 2]))));
            arr_6 [i_0] [i_1] &= var_11;
            var_18 = (min(-27661, 0));
            var_19 = ((var_5 ? var_6 : (((!(!5559345941806148989))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_10 [9] [2] [i_2] = (((arr_8 [i_0 - 1]) ? (arr_8 [i_0 + 2]) : (arr_8 [i_0 + 2])));
            var_20 = var_2;
            arr_11 [i_0] [i_0] [i_0] = (((~(arr_4 [0] [i_2] [i_2]))));
            arr_12 [i_2] [i_0] [i_0] = ((var_3 ? var_12 : var_12));
        }
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_21 += var_0;
        var_22 *= (((arr_14 [11]) ? ((((arr_15 [i_3 + 1]) ? var_2 : 98))) : (((arr_13 [i_3 - 1]) ? var_5 : (((max(var_6, (arr_13 [1])))))))));
        var_23 = (max((max(var_11, (~-967831847))), (arr_13 [1])));
    }
    for (int i_4 = 3; i_4 < 10;i_4 += 1)
    {
        var_24 |= var_11;
        var_25 = var_12;
        arr_19 [i_4] = (min((~var_3), 2147483647));
    }
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        arr_22 [23] |= var_4;
        arr_23 [20] = var_6;
    }
    var_26 = (max(var_4, ((max((max(var_8, var_6)), var_0)))));
    #pragma endscop
}
