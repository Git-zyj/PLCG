/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    var_20 |= 11505;
    var_21 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (((min(32256, var_18)) / 29196));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_3] [i_4 - 2] = (((arr_4 [i_0 - 1] [i_2 + 1] [i_3 - 1]) ? var_16 : (((((min(var_11, 279997749))) ? (((arr_7 [i_0] [i_0] [i_3]) ? 32270 : 32256)) : 28432)))));
                                var_22 += ((((min((((2147483647 ? 33278 : 1))), (arr_3 [i_0] [i_1] [i_2])))) ? (arr_1 [i_2]) : var_3));
                            }
                        }
                    }
                    var_23 += (arr_2 [i_2 + 2] [i_2]);
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_5] [i_7] [i_7] = -2147483647;
                                var_24 = (min((((arr_7 [i_0] [11] [i_6 - 2]) ? var_4 : var_15)), (arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_6 + 1])));
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_7] = (max((-1737693909 / -1737693897), (((15123 | -40) ? 1737693924 : 2637))));
                            }
                        }
                    }
                    var_25 &= (arr_4 [i_1] [12] [i_5]);

                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        var_26 = (var_4 / var_17);
                        var_27 = 50413;
                        var_28 = 7723208897549628153;
                    }
                    arr_25 [i_0 + 1] [i_1] [i_5] &= -21926;
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    arr_29 [2] [i_1] [i_9] [i_9] = var_7;
                    var_29 = 1;
                }
                arr_30 [i_0] [i_1] = ((((min(var_7, 11))) ? ((var_16 ? var_6 : var_4)) : -2147483627));
                var_30 = (((((var_14 ? var_11 : (arr_17 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1])))) ? var_8 : (arr_3 [11] [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
