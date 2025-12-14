/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_19 = ((!(((var_18 ? (arr_2 [i_0]) : (arr_1 [i_0]))))));
        var_20 = (!6);
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = (min(2147483618, 79));
        arr_7 [i_1 - 2] = (arr_5 [i_1]);
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_21 = (min(var_21, (((((arr_9 [i_2]) ? (arr_9 [i_2]) : (arr_9 [i_2])))))));
        arr_11 [i_2] [i_2] = (min((((~18446743936270598144) ? (arr_10 [i_2]) : ((var_17 ? (arr_9 [1]) : var_0)))), ((((arr_8 [i_2] [i_2]) ? (arr_10 [i_2]) : var_11)))));
        arr_12 [i_2] = (max(((((max(-24, (arr_10 [i_2]))) / ((min((arr_8 [i_2] [i_2]), -110)))))), ((-2147483624 ? (((arr_8 [i_2] [21]) | 18446743936270598144)) : ((min(-589190030, var_12)))))));
        var_22 = ((!((((var_13 - (arr_8 [i_2] [i_2])))))));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_27 [i_3] [i_6] [i_5] = max((((!(arr_8 [17] [i_6])))), ((var_5 ? ((max(var_11, (arr_15 [i_3])))) : (arr_10 [i_4]))));
                        var_23 = (((arr_23 [16]) != ((((arr_22 [17] [i_4] [i_5] [i_6]) || 503316480)))));
                    }
                }
            }
        }
        var_24 = (((((((var_16 ? (arr_8 [i_3] [i_3]) : (arr_8 [i_3] [7]))) - (((var_5 > (arr_20 [i_3] [i_3] [i_3]))))))) ? (min(((min(589190029, 6))), (min(17073331936383214614, (arr_24 [i_3] [i_3]))))) : ((max(1, -589190034)))));
        var_25 = 18446743936270598140;
        arr_28 [i_3] [i_3] = ((min(((503316480 & (arr_22 [i_3] [i_3] [i_3] [i_3]))), (503316480 ^ -595792458))));
    }
    var_26 = 78;
    #pragma endscop
}
