/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (((max((max(-437622368, 560728010)), var_4))) ? (~3828620801) : 0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (arr_2 [i_1]);
                var_19 *= (437622352 >= -var_12);
                var_20 = -437622368;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_8 [i_3] [i_3] = (arr_4 [8]);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_21 &= ((25918 ? var_13 : (arr_5 [i_6 + 2])));
                            var_22 = (min(var_22, var_15));
                            arr_17 [i_2] [i_3] [i_5] [i_3] = var_9;
                            arr_18 [14] [i_3] [i_3] [i_3] [i_3] [i_2] = (~(arr_4 [i_5 - 2]));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            arr_21 [i_7] [i_7] [i_2] = ((!(((var_11 ? (arr_20 [i_7 + 1]) : (arr_10 [4] [8] [2] [i_2]))))));
            arr_22 [i_2] [i_7] [i_2] = (((arr_15 [i_7] [i_7 + 1]) || 221));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            var_23 = (max(var_23, (437622352 && 3458764513820540928)));
                            arr_31 [i_2] [i_2] [2] [9] [i_2] = (!var_4);
                            var_24 = (min(var_24, ((((arr_23 [i_7 + 1] [i_7]) ? (arr_23 [i_7 + 1] [i_2]) : 437622391)))));
                            arr_32 [i_10] = ((var_2 ? ((var_5 ? -13 : 3828620801)) : 3372803731));
                            arr_33 [3] [i_7] [i_8] [20] [i_10] [i_9] [6] = (((3828620805 ? var_15 : var_3)));
                        }
                        arr_34 [i_7 + 1] = (((arr_11 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_9 - 1] [i_9 - 1] [i_9 - 1]) ? (arr_29 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_8] [i_9 - 1] [i_9 - 1]) : (arr_11 [21] [i_7 + 1] [i_7 + 1] [1] [i_9 - 1] [i_9 - 1])));
                    }
                }
            }
        }
        var_25 = ((~((~(arr_25 [i_2])))));
        var_26 = -9273907813808448733;
        arr_35 [i_2] = 0;
    }
    var_27 = var_5;
    #pragma endscop
}
