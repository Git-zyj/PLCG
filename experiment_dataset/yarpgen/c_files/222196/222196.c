/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 += (((max(var_10, var_10))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_13 = (min(var_13, ((((var_10 > var_4) > ((var_10 ? var_8 : var_0)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (var_7 / var_8)));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(min((((var_1 ? var_6 : var_1))), ((var_11 ? var_8 : var_5))))));
                                var_15 = (max(var_15, (~-var_3)));
                                var_16 = ((!((max((max(var_9, var_6)), var_5)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_18 [1] [i_1] [i_0] [i_5] [i_6] [i_6] [i_6] = var_11;
                                var_17 = ((((max(var_6, var_1))) ? (var_4 - var_9) : ((var_0 ? var_8 : var_8))));
                                var_18 = (max(var_18, (((((((((var_11 ? var_5 : var_9))) ? (var_9 * var_9) : ((var_1 ? var_2 : var_5))))) ? (!var_0) : (~var_7))))));
                                var_19 = ((((var_10 ? var_9 : var_6))) % ((var_7 ? var_3 : var_4)));
                                var_20 = (-7033859717704664400 % 1776877780);
                            }
                        }
                    }
                }
                var_21 = (-3519095213762277416 - 127);
            }
        }
    }
    var_22 = (((115 - var_4) + (((min(var_10, var_0))))));

    for (int i_7 = 2; i_7 < 13;i_7 += 1)
    {
        arr_22 [i_7] = (((((var_1 ? var_11 : var_7))) ? var_0 : (((var_5 ? var_8 : var_0)))));
        var_23 = (((((var_7 / var_11) ? (((var_3 ? var_2 : var_1))) : ((var_10 ? var_9 : var_5)))) + ((((var_4 >= var_7) ? ((max(var_10, var_8))) : (-112 != 212))))));
    }
    var_24 = (((((-13 - 678088434) - var_7)) != var_6));
    var_25 = ((var_11 ^ var_6) ? var_4 : (var_4 < var_10));
    #pragma endscop
}
