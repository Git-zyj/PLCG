/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((max(186, -526826703)) & -526826720);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = arr_4 [i_0];

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 = -17443768816943426973;
                                var_17 = (arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]);
                                var_18 = 750629662;
                                var_19 = (min(var_19, ((min((17443768816943426973 * var_12), -1)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_20 = 1;
                                arr_19 [i_6] [i_1] [12] [4] [i_6] = var_5;
                                var_21 = var_8;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_24 [i_8] [i_8] [i_7] [i_2] [i_1] [i_8] = ((var_0 << ((((max(var_11, 1))) - 7415640158449469645))));
                                var_22 = var_4;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    var_23 = 1;
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((1 ? 1 : 1002975256766124642));
                }
            }
        }
    }
    var_24 = (((12929757171512098567 & 229) | (min((1 || var_3), (var_2 / 13341095171229942238)))));
    #pragma endscop
}
