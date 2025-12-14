/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_2] = (arr_4 [i_2 - 1] [i_0 + 2] [i_1]);

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_16 = -var_11;
                        var_17 = (min(var_17, (arr_6 [i_0] [i_3] [i_2] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_18 = 0;
                        var_19 -= var_14;
                        arr_15 [i_1] = (((arr_4 [i_0] [i_0] [i_1]) | (arr_10 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                        arr_16 [i_0] [i_1] [i_1] [i_1] = var_15;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_1] = (arr_5 [i_1] [i_2 - 1]);
                        var_20 = var_0;
                        var_21 = (min(var_21, ((((arr_7 [i_0] [i_0] [i_0]) ? ((((arr_4 [i_0 - 1] [i_1] [i_5]) == var_6))) : var_6)))));
                        var_22 = (max(var_22, (arr_12 [i_1] [i_2 - 1] [i_1] [i_1] [i_1] [i_0])));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_23 [i_0 + 2] [i_0 + 2] [i_1] [i_0] [i_0] = (var_8 + var_6);
                            var_23 = (arr_2 [i_2 - 1] [i_6]);
                            var_24 = (((arr_4 [i_0 + 1] [i_2 - 1] [i_1]) ? (arr_4 [i_0 + 1] [i_2 - 1] [i_1]) : (arr_4 [i_0 + 1] [i_2 - 1] [i_1])));
                            var_25 |= var_13;
                            var_26 = (!var_10);
                        }
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            var_27 ^= ((var_8 ? (arr_20 [i_2 - 1] [i_2 - 1] [i_7 + 1] [i_7] [i_7 - 1] [i_7] [i_7 + 1]) : var_5));
                            var_28 = ((((4095 ? 0 : var_9)) * -10));
                            var_29 = (((var_4 == var_13) < (arr_8 [i_0 + 2] [i_1])));
                        }
                    }
                    var_30 = (var_12 != var_6);
                    var_31 = var_8;
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_32 = var_2;
                                arr_33 [i_1] [i_1] [i_2 - 1] [i_8 - 1] [i_8] [i_9] [i_9] = (((var_9 * (max(var_1, var_5)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_33 = var_3;
    var_34 = (max(var_34, var_13));
    #pragma endscop
}
