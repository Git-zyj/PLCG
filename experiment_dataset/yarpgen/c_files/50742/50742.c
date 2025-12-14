/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (min((max(((max(var_6, 405147187))), 153)), (((min(var_12, 0))))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_14 += (max((arr_2 [0] [i_1] [i_1]), (arr_1 [i_0] [i_0])));
            arr_4 [i_1] = ((min((arr_3 [i_1] [i_1]), (max((arr_3 [i_1] [i_1]), 232)))));
        }
        var_15 = (min((max(1, 26)), 0));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        var_16 = (min(var_16, (arr_2 [0] [i_2] [i_2])));
        arr_7 [i_2] [19] = (arr_1 [i_2 - 2] [i_2 + 3]);
        var_17 = var_9;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 24;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = var_10;
        var_18 = var_10;

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_16 [i_3] = (arr_3 [i_3] [i_4]);
            arr_17 [i_3] = 1;
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {

                    for (int i_7 = 1; i_7 < 24;i_7 += 1)
                    {
                        var_19 = (arr_3 [i_3] [i_7 - 1]);
                        arr_27 [i_3] [i_5] [i_6] [i_7] = var_7;
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {

                        for (int i_9 = 3; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            arr_33 [i_3 - 1] [6] [i_6] [i_8] [i_3] = (arr_21 [i_3] [i_5] [18] [i_9 - 1]);
                            arr_34 [i_3] [i_5] [i_8] [i_6] [15] [i_5] [i_3] = 0;
                        }
                        for (int i_10 = 3; i_10 < 21;i_10 += 1) /* same iter space */
                        {
                            var_20 -= var_11;
                            var_21 = 1;
                            arr_37 [i_3] [i_5] [i_6] [i_8] [i_8] [i_10] = (arr_13 [i_10 - 1] [i_6]);
                            arr_38 [i_10] [i_5] [i_3] = (arr_10 [18]);
                            arr_39 [20] [i_3] [i_5] [i_5] [i_6] [i_8] [24] = (arr_31 [i_3]);
                        }
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            arr_42 [1] [i_3] [15] [i_3] [15] = var_12;
                            var_22 = (arr_24 [i_3]);
                            var_23 -= (arr_12 [i_3 - 1] [12] [i_11 - 1]);
                            arr_43 [i_3] [i_5] [i_6] [i_8] [i_11] [i_6] [24] = var_12;
                        }
                        var_24 *= (arr_13 [i_3] [i_3]);
                    }

                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        var_25 += (arr_21 [3] [i_3 + 1] [i_6] [2]);
                        var_26 = 1;
                    }
                    arr_46 [i_3] [i_5] [i_3] = 4305545866216358731;
                }
            }
        }
        arr_47 [i_3] = 14141198207493192889;
    }
    var_27 = (max((min(var_11, var_11)), var_11));
    #pragma endscop
}
