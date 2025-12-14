/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(var_5, (max(2147483647, var_8))))) || ((min(((var_4 ? var_6 : var_5)), (-32744 | var_6))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (arr_3 [i_0]);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_15 = ((-((2337882492 << (-4483279233663251972 + 4483279233663251987)))));
                            var_16 = (((arr_3 [i_0]) < (arr_3 [i_0])));
                            var_17 = (arr_11 [i_0] [i_2] [8] [i_4]);
                            var_18 = 5463;
                            var_19 = (~((var_5 ? -9 : (arr_3 [i_0]))));
                        }
                    }
                }
                var_20 = arr_8 [i_0];
                var_21 = (max(var_21, var_2));
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((max((max((min(-9, (arr_3 [i_0]))), (arr_12 [i_1] [i_5] [i_6]))), (((1957084804 ? ((max(32767, 8441))) : ((~(arr_14 [12] [i_1] [i_5] [i_6] [i_7])))))))))));
                            arr_24 [5] [i_7] [i_7] [5] [i_1] [5] = (((~(arr_18 [i_0] [10] [i_0] [i_0] [1]))));
                            arr_25 [i_1] = 8605575940352283496;
                            arr_26 [i_1] [7] [i_5] [i_6] = (min((max(var_12, 4483279233663251970)), (((arr_0 [i_0] [i_1]) ? 4628624044514505285 : (arr_0 [i_0] [i_7])))));
                            arr_27 [i_0] [i_1] [i_1] = (arr_0 [i_1] [1]);
                        }
                    }
                }
                arr_28 [i_1] [i_0] [i_1] = (max((min(177, -4628624044514505285)), -52));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                var_23 = (arr_0 [i_0] [i_8]);
                arr_33 [i_0] [i_1] [i_1] [i_0] = (((arr_2 [i_0] [i_0]) % 3670016));

                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    var_24 = (((arr_12 [i_0] [i_0] [i_0]) >= (arr_12 [i_1] [i_8] [i_9])));
                    arr_38 [i_0] [i_1] [i_0] [i_0] = (arr_17 [i_0] [i_1] [i_0]);
                    arr_39 [i_0] [15] [i_8] [i_1] = ((-4628624044514505286 / (arr_4 [i_0])));
                    arr_40 [i_0] [i_0] [6] [6] [i_9] &= 1957084783;
                }
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    arr_43 [i_1] [i_0] [i_1] [i_0] [i_0] [10] = ((var_5 ? (arr_18 [0] [0] [i_0] [i_0] [i_0]) : (arr_2 [i_8] [12])));
                    arr_44 [i_1] = -var_7;
                    arr_45 [1] [i_1] [1] [i_1] [i_1] = 760494228;
                    arr_46 [i_0] [i_1] [1] [i_0] = 51;
                }
                arr_47 [i_0] [i_1] = ((var_12 ? (arr_34 [i_0] [i_8] [i_8]) : (arr_13 [i_0] [i_0] [i_0] [i_0] [13])));
            }
            var_25 = (min(((2985535185 ? -15933 : 75)), ((max((arr_20 [i_0] [i_0] [i_0] [i_0]), (arr_20 [i_0] [i_0] [i_1] [i_1]))))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            arr_50 [i_0] = 0;
            arr_51 [i_0] [i_0] [i_0] &= 111;
        }
        for (int i_12 = 2; i_12 < 15;i_12 += 1)
        {
            arr_55 [i_12] = ((~(max((arr_17 [i_12 - 2] [i_12 - 2] [1]), (arr_1 [i_12 - 1] [i_12 + 1])))));
            arr_56 [i_12] = (~var_11);
        }
        var_26 = 72;
    }
    for (int i_13 = 0; i_13 < 16;i_13 += 1)
    {
        var_27 = (((((arr_57 [i_13] [i_13]) ? (arr_13 [i_13] [i_13] [11] [10] [i_13]) : -2022373333))) ? 158 : (((arr_52 [i_13] [i_13]) ? (arr_52 [i_13] [9]) : (arr_52 [i_13] [i_13]))));
        var_28 = (arr_30 [i_13] [i_13] [i_13]);
        arr_59 [i_13] = (max(8605575940352283496, (arr_29 [6] [14] [6])));
    }
    var_29 = ((min(1023, var_6)));
    #pragma endscop
}
