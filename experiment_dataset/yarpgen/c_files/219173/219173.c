/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (((((var_13 + (arr_0 [i_0])))) ? var_0 : var_8));
        var_17 = ((227 ? -123 : 1152921504605798400));

        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            var_18 = ((var_15 ? (arr_2 [i_1 - 2] [i_1 - 2]) : (arr_1 [i_1 - 2] [i_1 - 2])));
            var_19 = (((-5619 != 3103151602380868843) + (~1)));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 = (arr_4 [20] [i_2] [i_2]);
            var_21 = 112;
            var_22 &= ((~(arr_5 [i_2])));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_23 = (arr_3 [i_0]);

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_24 = var_3;
                    var_25 = (arr_8 [i_5]);
                    var_26 = ((((var_1 ? var_13 : (arr_11 [i_0] [5] [i_4] [i_5] [12] [i_5]))) & (arr_11 [i_0] [i_0] [i_4] [i_5] [19] [10])));
                    var_27 *= (arr_5 [i_3]);
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_28 = (arr_5 [i_6]);
                    var_29 = ((var_6 ? (arr_14 [i_6] [i_3] [i_0]) : (arr_14 [i_0] [i_0] [i_0])));
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {

                    for (int i_8 = 2; i_8 < 23;i_8 += 1)
                    {
                        var_30 = (arr_11 [18] [18] [18] [i_4] [i_4] [11]);
                        var_31 = ((var_1 ? (arr_2 [i_8 - 1] [i_8 - 1]) : (arr_2 [i_8 - 1] [i_8 + 1])));
                        var_32 = (max(var_32, (arr_16 [i_8 - 2] [i_8 - 2] [i_7] [i_7])));
                        var_33 = var_8;
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        var_34 = (((var_10 < var_5) & (arr_7 [i_3] [i_3])));
                        var_35 = ((-(arr_15 [i_0] [i_0] [21] [12])));
                    }
                    var_36 = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_4] [i_4]) : (arr_1 [i_7] [i_4])));
                    var_37 = var_9;
                    var_38 += (!(arr_15 [i_0] [1] [i_0] [i_0]));
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    var_39 = var_2;
                    var_40 = (((((var_13 ? 107 : -2812450725368118012))) ? var_7 : (!-1689160773561405005)));
                    var_41 = var_2;
                }
            }

            for (int i_11 = 2; i_11 < 23;i_11 += 1)
            {
                var_42 = (arr_16 [i_11] [i_11 - 1] [20] [21]);
                var_43 = (((arr_13 [i_11 - 1] [i_11 - 1]) / (arr_13 [i_11 + 1] [i_11 - 1])));
                var_44 = (arr_18 [i_3] [i_11 + 1] [i_11 - 2] [i_11 - 2]);

                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    var_45 = (arr_3 [i_11 + 1]);

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_46 = (arr_15 [i_0] [i_11 - 1] [i_11] [i_11 - 1]);
                        var_47 -= (((arr_31 [1] [i_11 - 1] [i_12] [i_12] [i_13]) + (arr_28 [i_12])));
                    }
                    var_48 = ((((~(arr_20 [i_0] [i_3] [i_3] [i_3] [i_3] [20] [20]))) >= ((131064 ? (arr_0 [i_0]) : (arr_33 [i_3] [i_11] [i_11] [i_11])))));
                }
            }
            for (int i_14 = 4; i_14 < 22;i_14 += 1)
            {
                var_49 = var_6;
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 23;i_16 += 1)
                    {
                        {
                            var_50 &= (arr_31 [i_0] [i_0] [i_15] [1] [i_0]);
                            var_51 = (((arr_11 [4] [i_3] [4] [i_15] [i_16] [i_0]) ? (arr_41 [i_3] [i_3] [i_16] [i_3] [i_16 - 1]) : (arr_14 [i_14 + 2] [i_16 - 1] [i_16 - 1])));
                        }
                    }
                }
            }
        }
    }
    var_52 = ((var_10 ? ((var_15 ? var_5 : (103 * 29540))) : -var_4));
    #pragma endscop
}
