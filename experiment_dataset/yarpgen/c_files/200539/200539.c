/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = (((var_6 && var_1) / (((((var_0 ? var_8 : var_2))) & (max(var_9, var_1))))));
                var_11 = -var_9;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_7 [i_0] = (~var_7);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = var_0;
                                var_13 = (min(var_13, var_9));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_14 = ((var_0 != var_4) ? ((var_0 ? var_4 : var_1)) : (((var_3 << (var_4 - 1001833856)))));
                                var_15 = (var_0 | var_3);
                                var_16 = (4294967295 & 7156224054593028556);
                                var_17 = (min(var_17, (!var_8)));
                                arr_18 [i_6] [i_6] [i_5 - 2] [i_0] [i_2] [i_1] [12] = (var_0 >= var_3);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_18 = var_8;
                                var_19 = ((-((70 ? 116 : -32751))));
                                var_20 = (min(var_20, (~var_7)));
                                var_21 |= var_0;
                                arr_25 [i_0] [6] [i_0] = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_22, var_6));
    #pragma endscop
}
