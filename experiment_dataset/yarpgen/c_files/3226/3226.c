/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = 2046646618369598328;
                            var_18 = (min(var_18, (((-2046646618369598330 ? ((((min(2315810869, -2046646618369598353))) ? ((min(-22, (arr_7 [i_0] [i_0] [i_0] [i_3])))) : -1)) : (!1))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_19 |= (1 >= -2046646618369598330);
                    var_20 = ((-(((var_10 ? 725982271 : var_10)))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_21 = (arr_14 [i_5] [i_1]);

                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        arr_18 [i_6] [i_5] [i_1] [i_0] = 1;
                        arr_19 [i_0] [i_1] [i_1] [i_6] [i_0] &= (((((var_1 ? (arr_2 [i_0 - 2]) : 2046646618369598333))) ? (arr_10 [i_1] [i_0 - 2]) : var_2));
                        var_22 = (arr_7 [i_6 + 1] [i_6 + 2] [i_6 + 3] [13]);
                    }
                    for (int i_7 = 3; i_7 < 22;i_7 += 1)
                    {
                        arr_23 [21] [21] [i_5] = (!18);
                        arr_24 [i_0] [i_1] [i_1] [i_1] [i_7] = ((!(arr_14 [i_1] [i_5])));
                        var_23 -= 4294967295;
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_24 = 1;
                        var_25 = -2046646618369598329;
                    }
                    arr_29 [i_0] [i_0] [10] = ((-(arr_2 [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                var_26 = ((var_2 ? (3132358037957090650 ^ 1) : (arr_21 [i_0 - 2] [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 - 1])));
                                arr_34 [i_0] [i_1] [i_1] [7] [1] [i_10] = ((1048575 ? (arr_33 [i_0] [i_9] [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2]) : 1));
                            }
                        }
                    }
                    var_27 = (~var_1);
                }
                var_28 = (max((min(var_9, (-17208 - -2046646618369598329))), ((min((arr_7 [i_1] [i_1] [i_1] [i_0 - 1]), 16384)))));
                arr_35 [i_0 + 1] [i_0] [i_1] = (((!((var_9 == (arr_30 [i_0] [i_1] [i_1] [i_0]))))));
                var_29 = (max(var_29, ((((arr_25 [i_0 + 2]) ? var_16 : 16394)))));
            }
        }
    }
    var_30 = (((((max(var_3, var_3))) ? (((var_15 ? 1 : 1972170020))) : (max(3201221084, var_15)))));
    var_31 *= (max(((((max(var_10, 1))) ? 17514905505157209943 : 0)), var_10));
    #pragma endscop
}
