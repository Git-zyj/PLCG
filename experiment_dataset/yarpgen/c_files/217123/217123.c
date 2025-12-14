/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_11 = ((var_5 ? (((var_9 && (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) : (!var_8)));
                        arr_14 [i_0] [i_0] = (max(0, (1048575 & var_6)));
                    }
                    for (int i_4 = 3; i_4 < 24;i_4 += 1)
                    {
                        arr_17 [i_0] = 3;
                        arr_18 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] = 6081;
                    }
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        arr_21 [i_5] [i_5] [i_0] [i_0] [i_5] = (((18446744073708503040 / 3) ? ((min(var_9, (var_1 >> var_8)))) : ((var_10 ? (max(-4, 9223372036854775803)) : ((max(var_4, 224)))))));
                        var_12 = (min(var_12, (((9223372036854775805 ? (((-9223372036854775804 + (-13 <= -124)))) : var_6)))));
                        var_13 = (((var_0 ? (arr_20 [i_5] [i_0] [i_1] [i_0] [5] [5]) : var_8)));
                        arr_22 [i_0] = ((((min(var_10, 1))) ? (arr_0 [i_0]) : (((((arr_6 [i_2] [i_2] [i_2]) + 2147483647)) >> (((arr_12 [i_0] [i_5] [i_2 + 2] [i_0 - 1] [i_0]) - 167))))));
                        var_14 = (min(var_14, ((min((arr_11 [i_5] [i_1] [i_5 - 2] [i_5] [i_1] [i_1]), ((var_3 ? (arr_11 [i_5] [i_1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) : (arr_11 [i_5] [i_5] [i_5 + 2] [16] [16] [16]))))))));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_25 [i_0] [i_1] [i_2] [i_2] [i_0] [i_6] = ((((min(var_2, (arr_13 [i_1] [i_1] [i_2] [i_2] [i_0] [i_2])))) != (max((arr_2 [i_2 - 1] [i_0 - 1]), 255))));
                        var_15 = ((-(((arr_8 [i_0 - 1]) ? var_1 : (arr_4 [i_0 - 1] [i_0 - 1] [i_2 + 2])))));

                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            var_16 += ((((10 || (arr_8 [i_7])))));
                            var_17 = (min(var_17, var_8));
                            arr_29 [i_0] [i_1] [i_0] [i_0] = ((1048594 << ((((var_3 ? var_10 : var_5)) + 15))));
                        }
                        var_18 *= (min((max((arr_12 [i_0] [i_2 + 1] [i_6] [i_6] [12]), var_3)), (min(var_10, var_1))));
                    }
                    arr_30 [i_0] = (((((var_2 & var_8) || 12197667316452729389)) ? -101 : var_4));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_19 = (max(((((arr_20 [i_0 - 1] [i_0 - 1] [i_2 + 2] [i_0 - 1] [i_0 - 1] [i_9]) / var_5))), var_4));
                                arr_36 [i_0] [i_1] [i_1] [i_0] [i_8] [i_9] = (arr_11 [i_0] [i_1] [i_1] [i_0] [i_8] [i_0]);
                            }
                        }
                    }
                    arr_37 [i_2] [i_0] [i_0] = (((((((((arr_8 [17]) ? var_5 : var_9))) ? var_0 : var_2))) ? (!-3) : var_9));
                }
            }
        }
    }
    var_20 = (~var_9);
    #pragma endscop
}
