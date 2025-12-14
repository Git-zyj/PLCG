/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 = ((3497752117 ? (~7498) : (arr_9 [i_0] [i_2 - 3] [i_2 + 1] [i_4] [i_4] [i_1] [i_4])));
                                arr_11 [i_0] [i_1] [i_2 - 3] [i_2 - 3] [i_4] = -3650630206796704655;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_16 = (arr_9 [i_1] [i_2 + 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6]);
                                arr_17 [i_2 - 2] [i_6] = ((arr_5 [8] [i_2 - 1] [i_2 - 1] [i_6]) ? (arr_7 [i_6 - 1] [i_5] [i_2 + 1] [i_1]) : var_13);
                                var_17 = 127;
                                var_18 = (((arr_1 [i_2 - 3] [i_6 + 1]) ? (arr_13 [i_2 + 1] [i_2 + 1] [i_6 - 2] [i_6] [5]) : (arr_2 [i_2] [i_2 + 1])));
                            }
                        }
                    }
                }
                var_19 = var_4;
            }
        }
    }
    var_20 = ((var_8 ^ ((((var_7 ? 740020322 : var_5))))));
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 24;i_8 += 1)
        {
            {

                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    arr_28 [i_9] [i_7] [i_7] = (min((((~(arr_7 [i_7] [i_7] [i_8] [i_9])))), var_8));

                    for (int i_10 = 4; i_10 < 23;i_10 += 1)
                    {
                        arr_32 [i_7] [i_8] [i_8] [i_8] = (((arr_6 [i_7] [i_8] [i_9] [i_10] [i_7] [i_10]) ? (arr_21 [i_7] [i_9] [i_10]) : (((arr_12 [i_7 - 1] [i_8 - 2] [i_10 - 3]) ^ ((var_4 ? var_7 : var_2))))));
                        arr_33 [24] [i_7] [i_9] [i_7] [i_7] = ((-1 ? (((~var_8) & 63620)) : (((~(arr_4 [i_8] [i_9]))))));
                        var_21 = (arr_2 [i_7] [i_8]);
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        var_22 = var_5;
                        var_23 = (min(((min((arr_12 [i_7] [i_7 + 1] [i_7 - 3]), ((min(-100, -50)))))), (max((arr_23 [i_9] [i_7]), (~var_9)))));
                        arr_36 [i_7] [i_7] [6] [i_7] [i_11] [i_7] = arr_30 [i_7] [i_7] [i_7 + 1] [i_7] [i_7] [i_11];
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        arr_39 [i_7] [i_8] [i_9] [i_12] = 162;
                        var_24 = ((var_14 ? var_1 : var_7));
                    }
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        var_25 = (0 ^ 4941875561193913716);
                        arr_43 [i_7] [i_7] [i_7] [i_13] [i_8 - 1] [i_7] = arr_6 [i_13] [i_13] [i_8 - 1] [i_8 - 3] [i_8 - 1] [i_7 + 1];
                    }
                    arr_44 [i_7] [i_7] [i_8] [i_7] = ((~(min((arr_29 [i_7] [10] [i_7] [i_9]), var_4))));
                    arr_45 [i_7] [i_9] [i_7] [i_9] = var_0;
                }
                arr_46 [i_7] = 58123;
                var_26 = (((arr_16 [i_7 - 4] [i_7 - 3] [i_7] [i_7] [i_7 - 4] [i_7 - 4]) ^ (arr_6 [i_7 + 1] [i_7 - 3] [i_7] [i_7] [i_7] [i_7])));
            }
        }
    }
    #pragma endscop
}
