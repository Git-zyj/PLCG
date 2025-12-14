/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 = (var_6 >= var_8);
                    arr_8 [10] = (((var_8 ? var_1 : var_9)));
                    arr_9 [i_0 - 2] [i_1] [i_1] = ((var_4 ? var_8 : var_0));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_12 = (max(var_12, (var_5 == var_7)));
                        arr_12 [i_0] [i_0 + 1] [7] [i_0 + 1] [1] = var_2;
                        var_13 |= ((var_0 ? (var_10 / var_2) : 149));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_14 *= (((((var_4 ? var_4 : var_6))) && var_0));

                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            var_15 = (max(var_15, ((((var_9 != var_3) ? var_1 : var_6)))));
                            var_16 = (((var_3 | var_4) << ((((var_9 ? var_9 : ((var_1 ? var_7 : var_2)))) - 22181))));
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_17 = (min(var_17, ((((((var_2 ? var_4 : var_5))) ? ((((var_4 >= var_6) && (var_2 < var_10)))) : var_1)))));
                            arr_21 [i_4] = ((var_3 ? var_5 : ((var_10 ? var_6 : var_3))));
                            var_18 = (var_1 ^ var_2);
                        }
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        arr_24 [i_0 - 1] = var_4;

                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            var_19 = (max(var_19, var_3));
                            var_20 = (min(var_20, (var_5 >= var_0)));
                        }
                    }
                    var_21 = (((var_5 ? var_1 : var_3)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 21;i_10 += 1)
        {
            {
                arr_31 [i_9] [i_9] = ((var_7 >= ((((var_8 - var_9) <= ((var_10 ? var_4 : var_5)))))));
                var_22 += var_6;
            }
        }
    }
    #pragma endscop
}
