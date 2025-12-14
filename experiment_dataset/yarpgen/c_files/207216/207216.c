/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = ((!(((6006724694590562000 ? -122 : 4)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_17 = -1;
                        var_18 = ((16777215 ? ((1750 ? 19 : 0)) : var_3));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_4] = (((((var_1 ? (-127 - 1) : -120))) | ((var_8 ? 1 : 14783800909608417798))));
                        var_19 = ((!(arr_3 [i_2] [i_1] [i_4])));
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_20 += ((var_13 ? var_3 : ((-((var_3 ? var_9 : 4294967295))))));
                        arr_16 [i_0] [i_0] [i_2] [i_0] = (min(((((!236) ? (~1) : (!0)))), ((((max(-14421, var_8))) ? ((((arr_15 [i_0] [i_1] [i_2] [i_5]) ? (arr_13 [i_5] [i_0] [i_0] [i_0]) : var_0))) : ((var_8 ? (arr_4 [i_0]) : 15742912171490271753))))));
                        var_21 = (arr_6 [i_1] [i_2] [i_5]);
                        arr_17 [i_0] [i_1] [i_2] [i_1] = (~(min((var_9 / var_4), ((((arr_3 [i_0] [i_1] [9]) ? 154176326 : var_5))))));
                    }
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_2 - 1] [i_6] = var_6;
                        var_22 = (max(var_8, ((var_1 ? var_6 : (arr_15 [i_0] [i_2 + 2] [i_6 + 1] [i_6])))));
                        arr_22 [i_0] [i_2] = var_15;
                        var_23 = ((var_3 || (((var_7 / (arr_3 [i_6 - 2] [i_2 + 1] [i_0]))))));
                        arr_23 [i_0] [i_0] [i_2] [i_6 - 1] = (((~(arr_1 [i_0] [i_1]))));
                    }
                }
            }
        }
    }
    var_24 = var_14;
    var_25 = var_10;
    var_26 = var_3;
    #pragma endscop
}
