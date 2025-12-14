/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_10 = ((var_1 ? (((max(var_7, var_4)))) : 65000));
                    var_11 = (~((((min(2443718844, var_4))) ? 1052082456 : var_1)));
                    var_12 = 9223372036854775784;
                    arr_6 [i_1] [i_0] [i_2 - 1] = (max((arr_4 [i_0] [i_0] [i_0] [i_0]), var_7));
                    var_13 = ((!(((9223372036854775784 ? 4605132212469248470 : 4078584020)))));
                }
            }
        }
        arr_7 [i_0] [i_0] = var_5;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_14 = (max(var_14, ((((~-1) ? (!var_1) : (!var_2))))));
                    var_15 = ((~60) / ((~(arr_5 [i_3] [i_4] [i_4 + 1] [7]))));
                    var_16 |= arr_12 [i_5] [i_4] [i_3];
                    arr_15 [i_3] [i_4] [i_5] = (((~5819760043794566291) ? var_1 : 3087377365487874591));
                }
            }
        }

        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            var_17 = (max(var_17, -var_4));

            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_18 |= (!var_3);
                var_19 = var_4;
                var_20 = -1865839685341424781;
            }
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                arr_26 [i_3] = ((-(arr_20 [i_8] [i_6] [i_3] [i_3])));
                var_21 = (~var_7);
            }
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                arr_30 [2] [i_6 - 1] [7] [6] = (((var_3 | -2034725834) == (arr_0 [i_3])));
                var_22 = 112;
            }
            var_23 = var_3;
        }
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            var_24 = ((var_1 ? var_5 : (arr_20 [i_3] [i_3] [i_10] [i_10])));
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    {
                        arr_37 [i_11] = -var_4;
                        arr_38 [i_3] [9] [i_11] [16] = (~9223372036854775784);
                    }
                }
            }

            for (int i_13 = 2; i_13 < 15;i_13 += 1)
            {
                var_25 = ((((17971 ? (arr_20 [i_3] [i_10] [i_10] [i_3]) : 3121423108)) >> (41974 - 41973)));
                arr_41 [15] [6] = var_3;
                arr_42 [i_3] [i_10] [i_3] = (((arr_34 [i_3] [i_13 - 1]) >> 0));
            }
            for (int i_14 = 2; i_14 < 15;i_14 += 1)
            {
                var_26 = ((-17971 ? (2443718858 * 28) : ((var_6 ? var_0 : var_0))));
                arr_46 [i_3] [i_10] [i_14 + 1] [i_10] = var_1;
            }
            var_27 *= (arr_36 [i_10] [i_10] [13] [i_3] [i_3]);
        }
        arr_47 [i_3] = (-9223372036854775785 ? 2443718848 : 18);

        for (int i_15 = 2; i_15 < 16;i_15 += 1)
        {
            var_28 = var_9;
            var_29 = (max(var_29, 20219));
            arr_51 [i_15] [i_15] [i_3] = var_7;
        }
    }
    var_30 = (min(var_30, 131072));
    var_31 = 10;
    #pragma endscop
}
