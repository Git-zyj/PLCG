/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((~63816) && var_11)))) >= ((var_13 ? (min(var_16, var_13)) : (min(var_15, var_10))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = ((~-1984590866) ? var_13 : (((~var_2) ? ((min((arr_1 [i_0] [i_0]), var_0))) : (arr_0 [i_0]))));
        arr_2 [5] = (arr_1 [i_0] [i_0]);

        /* vectorizable */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_22 += var_4;
            arr_5 [i_1] = (~((var_2 ? (arr_1 [6] [6]) : var_6)));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_2] [i_2] [i_2] = (arr_0 [0]);
            var_23 = (arr_7 [i_0]);
            var_24 = (((!((max(var_0, var_2))))));
            arr_9 [i_2] [i_2] = (arr_3 [i_0] [i_2]);
        }
        arr_10 [18] = (((~(arr_7 [i_0]))));
        var_25 = ((!((min(var_3, (arr_7 [i_0]))))));
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_26 = var_11;
        var_27 = (~var_12);
    }
    var_28 = (max((((!(((var_5 ? var_3 : var_19)))))), var_3));
    #pragma endscop
}
