/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_11 |= ((-(arr_0 [i_0])));
        var_12 = ((var_3 ? ((((arr_0 [i_0]) ? (arr_1 [i_0] [5]) : (arr_0 [1])))) : var_3));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_4 [i_1] = ((((((arr_2 [i_1]) | (arr_3 [i_1])))) | ((var_10 ? 6568938881682710887 : (arr_3 [i_1])))));
        arr_5 [i_1] = -var_2;
        var_13 = (max(var_13, (max((((!(((var_6 ? var_1 : 6568938881682710887)))))), (min((min(41643, 5515577735111185537)), ((min(var_6, (arr_2 [i_1]))))))))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_2] [i_2] [i_3] [i_1] [i_1] = (-(min(var_10, var_6)));
                        var_14 = 30136;
                        var_15 = (min((arr_6 [i_1] [i_2]), (min(var_4, (arr_6 [i_2 - 1] [i_1])))));
                        arr_17 [i_3] [i_2] [i_3] [i_4] = ((-6568938881682710887 ? 73 : 4266));
                    }
                }
            }
        }
    }
    for (int i_5 = 4; i_5 < 23;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_16 = ((((max((min((arr_23 [i_5] [i_5] [i_5]), -52)), ((max(42, var_0)))))) ? (arr_23 [i_5 - 3] [i_5] [i_5]) : ((((!(((var_1 ? var_7 : (arr_18 [i_6]))))))))));
            arr_24 [i_5] = (arr_23 [1] [1] [i_5]);
            var_17 = (min(((var_0 ? (arr_21 [i_5]) : (arr_23 [i_5] [i_5 - 1] [i_5]))), ((((19708 + 384) ? -5269908653622049535 : 1238333140)))));
            var_18 = (min(var_18, (((((arr_21 [14]) + var_8))))));
            arr_25 [i_5] = (((((var_3 & (arr_20 [i_6])))) ? (arr_20 [i_5 + 2]) : (max((arr_18 [i_5]), (arr_18 [i_6])))));
        }
        for (int i_7 = 3; i_7 < 24;i_7 += 1)
        {
            var_19 = var_9;
            arr_30 [i_5] [i_5] = (((!(arr_19 [i_5 - 2] [i_5 - 2]))));
            arr_31 [i_5] = (arr_22 [i_5] [10] [i_5]);
        }
        arr_32 [i_5] [i_5] = (arr_27 [8] [i_5] [i_5]);
        var_20 = (((arr_20 [i_5 - 4]) ? 41643 : ((min(1, (arr_20 [i_5 + 1]))))));
        arr_33 [i_5] = ((~((min(23953, 139)))));
    }
    var_21 = (min(var_21, var_2));
    #pragma endscop
}
