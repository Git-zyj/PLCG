/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_11 = ((var_10 ? var_8 : var_8));
                            var_12 = (((((var_8 ? var_4 : var_1))) ? ((var_9 ? var_9 : var_10)) : (~var_8)));
                            arr_14 [10] [10] [i_2] [12] [1] [10] [i_2] = var_0;
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (62362 >= 2140300025);
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_13 = ((var_1 ? var_5 : (var_7 - var_4)));
                            var_14 = (((var_7 <= var_9) ? ((var_6 ? var_10 : var_3)) : (!-2029786308154293102)));
                            arr_18 [i_5] [i_1] [i_2 - 1] [i_3] [11] [i_5] = ((var_0 ? (((var_6 ? var_4 : var_7))) : ((var_0 ? var_8 : var_7))));
                            var_15 = ((((var_4 ? var_6 : var_9)) == (((var_2 ? var_10 : var_3)))));
                            var_16 = ((var_6 ? (1 && 2858923652) : ((var_4 ? var_1 : var_5))));
                        }
                        arr_19 [5] [5] [i_2 + 2] [i_3] = (~var_1);
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_17 = (((4294967295 ? -5831652816555446853 : -603637191)));
                        var_18 = (((((var_0 && var_10) || (((var_0 ? var_5 : var_6))))) ? ((~((var_7 ? var_7 : var_1)))) : ((max(var_0, var_1)))));
                        arr_22 [0] [i_1] [10] [i_6] = var_1;
                        arr_23 [i_0] [i_1] [i_1] [i_2 + 2] [i_6] &= (max((((~((var_8 ? var_3 : var_2))))), ((-var_3 ? (var_8 != var_10) : (max(var_8, var_10))))));
                    }
                    arr_24 [i_0] [i_1] [i_1] [i_2] = (793991206 < -239287817);
                    arr_25 [5] [i_0] [0] = ((!(((var_7 ? var_5 : var_5)))));
                    var_19 = (min(var_19, (min(((2858923652 ? 18 : 0)), ((((1985944094 > -932641559) == (!var_1))))))));
                    var_20 -= (875330874 ? 65535 : 6144);
                }
            }
        }
    }
    var_21 = (min(var_21, var_7));
    var_22 &= (((((var_9 ? var_8 : var_4)) & var_5)));
    var_23 = ((((-((66846720 ? 875330874 : 93212848)))) < ((((var_6 ? var_6 : var_8)) * (var_3 % var_0)))));
    #pragma endscop
}
