/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (121 ^ 116);
                                var_18 = 137608441;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_19 = ((var_1 ? (arr_4 [i_2 - 3]) : (arr_4 [i_2 - 1])));
                        var_20 = var_14;
                        var_21 = (~var_3);
                    }
                    for (int i_6 = 3; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_22 = var_13;
                        var_23 |= var_8;
                        var_24 = (arr_6 [i_0] [i_0] [i_2]);
                        var_25 = (min(var_25, (min((arr_8 [i_0] [i_0] [i_0] [i_1] [i_2 - 1] [i_6 + 1]), ((((-118 / -137608449) ? ((min(-137608442, var_4))) : (((arr_1 [11]) ? var_4 : var_0)))))))));
                    }
                    for (int i_7 = 3; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_7] [i_7] [i_7] [i_7] |= (arr_3 [i_0] [i_0] [i_0]);
                        var_26 = (arr_18 [i_0] [i_2] [i_7]);
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_27 = (min(((var_11 ? var_3 : (arr_8 [i_2 + 1] [i_8] [17] [15] [i_8 - 1] [i_2 + 1]))), var_4));
                                arr_31 [i_1] [i_2] [i_8] = ((var_8 ? ((var_2 ? (arr_18 [i_0] [i_0] [i_8 + 1]) : (min(var_13, (arr_15 [i_1] [i_8] [i_1] [i_0]))))) : ((((arr_18 [i_2 - 3] [i_8 - 1] [i_8 - 1]) ? (arr_18 [i_2 - 2] [i_8 - 1] [i_8 - 1]) : (arr_18 [i_2 + 1] [i_8 - 1] [i_8 - 1]))))));
                                var_28 = (min((((arr_26 [i_9] [i_1] [i_2] [i_2 - 2]) ? (arr_29 [i_2] [i_2 - 3] [i_2] [i_2] [i_8 - 1] [i_8] [i_8]) : (arr_26 [i_0] [i_0] [i_1] [i_2 - 2]))), (((((~(arr_9 [7] [i_8] [i_8] [i_0]))) != var_1)))));
                                var_29 = (min((~var_4), (min((arr_9 [i_2 + 1] [i_8] [i_8] [i_0]), (arr_9 [i_2 - 3] [i_8] [i_8] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = var_1;
    #pragma endscop
}
