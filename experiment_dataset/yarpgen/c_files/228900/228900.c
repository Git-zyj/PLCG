/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_0] [i_0] = (max(var_4, (var_1 || var_9)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 = var_9;
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_1] = ((~(~var_9)));
                                var_20 = (max(var_20, var_16));
                                var_21 = (min(var_21, (((((((var_11 ? var_14 : var_5)))) ? (var_3 + var_16) : (((var_14 ? var_11 : var_3))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_22 = var_9;
                                var_23 -= ((max(var_10, var_1)));
                                var_24 *= (((var_4 / var_5) ? (var_15 && var_7) : var_13));
                                arr_19 [i_6] [i_0] [i_0] [i_0] = ((-var_14 ? (min((var_17 * var_14), var_8)) : ((var_1 ? var_14 : (((var_10 ? var_16 : var_5)))))));
                            }
                        }
                    }
                    arr_20 [18] [i_0] [18] [i_0] = (((((var_10 | (max(var_3, var_14))))) ? ((~(var_15 | var_15))) : ((var_6 ? (var_1 & var_17) : var_1))));

                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        var_25 = (var_6 ? (((var_18 | var_0) ^ (var_1 & var_4))) : (min(var_2, var_0)));
                        var_26 &= var_1;
                        var_27 ^= ((((((var_8 | var_7) ? var_6 : ((var_17 ? var_15 : var_14))))) ? var_4 : ((var_11 ? var_14 : var_12))));
                        var_28 = ((var_0 * ((max(var_12, var_10)))));
                    }
                }
            }
        }
    }
    var_29 = var_5;
    var_30 = var_2;
    #pragma endscop
}
