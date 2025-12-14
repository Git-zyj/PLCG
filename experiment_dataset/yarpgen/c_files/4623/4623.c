/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 ^= ((281200098803712 & (((~((var_7 ? var_0 : 3151394528)))))));
    var_15 -= var_2;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (min(var_16, ((max((arr_2 [i_0]), ((((min(-48, 0)) > 394796538))))))));
        var_17 = (max(var_17, var_9));
        var_18 *= (!-1);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_19 -= (arr_0 [i_1]);

        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            var_20 = (max(var_20, 11));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {
                        var_21 += -var_6;
                        var_22 ^= (((arr_11 [i_4 - 1] [i_4 + 3] [i_4 + 1] [i_4 - 1]) / (arr_11 [i_4 - 1] [i_4 + 3] [i_4 + 1] [i_4 + 3])));
                        var_23 = (min(var_23, (arr_5 [i_3] [19])));
                    }
                }
            }
            var_24 = (min(var_24, var_5));
            var_25 = ((!(arr_6 [i_2 + 3] [i_2])));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_26 = var_5;
                arr_18 [i_5] [i_5] [i_6] = 3696636031;
                var_27 = 255;
            }
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        var_28 = (max(var_28, (arr_16 [i_7 + 1] [i_7])));
                        arr_24 [i_5] [i_5] [i_7] [i_7] = ((-(arr_19 [i_5])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 19;i_10 += 1)
                {
                    {

                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            var_29 &= ((-(arr_31 [i_10] [i_10 - 2] [13] [i_10] [i_10])));
                            arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_10] &= (((~2699631109442226828) ? (var_4 | var_10) : (arr_22 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10])));
                            var_30 = (var_4 >> (((arr_12 [i_1] [i_1] [3] [i_9 - 3]) - 1253301233810008611)));
                        }

                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            arr_35 [i_5] [i_5] = (arr_20 [i_5] [i_9 - 3] [i_10 - 1] [5]);
                            arr_36 [i_1] [i_5] [i_9 - 2] [i_10] [i_1] [i_10] [i_9] = (arr_21 [i_1]);
                        }
                        for (int i_13 = 3; i_13 < 19;i_13 += 1)
                        {
                            var_31 *= var_1;
                            arr_39 [i_1] [i_1] [16] [i_5] [i_13] = (!-3483);
                            arr_40 [i_5] = ((var_9 ? 20103 : var_2));
                        }
                        for (int i_14 = 1; i_14 < 18;i_14 += 1)
                        {
                            var_32 = var_1;
                            var_33 -= var_0;
                        }

                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            var_34 -= ((!(~0)));
                            var_35 = ((var_2 < (arr_43 [i_10 - 2] [i_9 + 2] [i_10 - 2] [i_10 + 1] [i_9 + 2])));
                            arr_47 [i_1] [i_5] [i_9] = (((arr_31 [10] [i_10 - 2] [i_10 - 1] [i_5] [i_5]) | (arr_11 [i_10 + 1] [i_10 - 2] [i_9 - 3] [i_9 - 3])));
                            var_36 = (arr_6 [i_10 - 1] [i_9 - 1]);
                            arr_48 [i_1] [i_5] [i_10] [i_10] [i_10] = (arr_28 [i_1] [6] [i_5]);
                        }
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            arr_53 [i_1] [i_1] [i_1] = 24877;
            var_37 ^= var_11;
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 20;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 16;i_19 += 1)
                    {
                        {
                            var_38 = (((arr_41 [i_19 - 1] [i_19] [i_19] [i_19 + 3] [i_19 + 2] [i_19 + 2] [9]) & (arr_41 [i_19 + 2] [i_19] [19] [i_19 + 1] [i_19 + 4] [i_19 + 1] [i_19])));
                            arr_63 [i_1] [i_17] [i_16] [i_1] [i_18] [i_18] = ((arr_22 [i_1] [i_1] [i_1] [i_17]) << (((arr_23 [i_19 - 1] [i_19] [2] [i_19] [i_19]) - 15344067660394193676)));
                            var_39 = (((((var_2 ? (arr_15 [i_1] [i_16] [i_17] [i_1]) : 183))) > (arr_23 [i_1] [i_19 - 1] [i_17] [i_17] [i_19])));
                        }
                    }
                }
            }
            var_40 = (max(var_40, 2125550021));
        }
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 12;i_20 += 1)
    {
        var_41 = (955625918 ^ (arr_7 [i_20]));
        var_42 = (max(var_42, (~var_0)));
    }
    /* vectorizable */
    for (int i_21 = 1; i_21 < 23;i_21 += 1)
    {
        var_43 = (((var_2 ? (arr_67 [i_21 - 1]) : (arr_67 [i_21]))));
        arr_68 [i_21] [i_21] = var_12;
    }
    #pragma endscop
}
