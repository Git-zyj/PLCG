/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (min((arr_1 [i_0]), ((1903944136 - (arr_0 [i_0])))));

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_21 = 77;
            var_22 &= min(1883677445, -21935);
        }
        arr_6 [i_0] = (((((arr_0 [i_0]) ? var_6 : (max((arr_0 [i_0]), 0)))) & 11130));
        var_23 = ((((var_12 ? (arr_1 [i_0]) : (arr_4 [i_0])))) ? ((((max(var_5, var_14))) ? (var_2 / 21934) : ((max(54414, 1))))) : var_9);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_24 = (((((-((54414 ? var_19 : (arr_9 [i_2])))))) ? (arr_5 [i_2] [i_2] [i_2]) : var_18));
        arr_10 [i_2] [i_2] = (max((max(-5286309256615449211, (arr_7 [i_2] [2]))), ((((min(var_4, var_4)) > var_10)))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_25 = var_1;
        var_26 = var_12;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_27 *= (0 >= 11122);
        var_28 = ((((arr_9 [i_4]) * 0)));
    }
    var_29 = (max(var_16, (127 * 1)));
    var_30 |= var_2;
    #pragma endscop
}
