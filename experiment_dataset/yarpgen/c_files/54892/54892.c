/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_8 ? var_5 : 441439137651451995))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (arr_4 [0] [0] [i_0]);
                var_18 -= ((!(((((max((arr_5 [3]), 116))) ? (((-1733043218 ? var_1 : 1733043187))) : var_8)))));

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    arr_10 [13] [13] [i_0] = var_5;
                    var_19 = (min(var_19, var_0));
                }
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    arr_13 [i_0] [8] [i_1] [i_1] = ((~((((max(var_5, var_9))) ? var_3 : 1860573602000803520))));
                    arr_14 [7] [i_0] [i_1] [i_3] = ((((((var_1 | (arr_0 [i_0]))))) ? (min(var_4, (var_4 & var_13))) : (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (((1733043202 ? var_1 : 24926))) : var_15))));
                    arr_15 [i_0] [i_0] [i_0] = (1733043194 | -74);
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_20 = ((-87 % (((((max(9220868762772239082, (arr_7 [i_0] [3] [i_1] [i_0])))) || ((max(31758, (arr_2 [i_1])))))))));
                    var_21 -= ((!((((arr_4 [i_0] [i_1] [i_0]) ? (arr_7 [i_1] [i_1] [11] [i_1]) : (arr_6 [i_0] [i_0] [i_0]))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_21 [2] = 3659479215;

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_22 = 0;
                        var_23 = 49;
                        var_24 = ((45285 < (-14473 || var_4)));
                        arr_24 [i_6] [0] [i_0] [i_0] [10] [0] &= (arr_0 [i_6]);
                        arr_25 [i_6] [4] [4] [i_6] = var_15;
                    }
                    arr_26 [2] [2] [2] [2] = ((((16 ? var_11 : 3077282853935016923)) != (((((arr_20 [i_0] [i_0] [i_0]) && var_14))))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_25 = 17326;
                                var_26 = 18446744073709551615;
                            }
                        }
                    }
                }
                arr_33 [i_0] = (max(-18442240474082181120, (~27091)));
            }
        }
    }
    #pragma endscop
}
