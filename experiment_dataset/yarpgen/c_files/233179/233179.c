/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = max((max(var_11, 65513)), (arr_3 [i_0 + 3] [i_1 + 1]));
            arr_6 [i_1] = (((max((((0 ? 11 : var_5))), (var_6 / var_9)))) ? 0 : 65525);
            var_15 = ((((arr_1 [i_0 + 2]) - (arr_1 [i_0 + 2]))) - -18998);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_15 [i_4] [i_3] [i_2] [i_2] [i_3] [2] = (((arr_0 [i_0] [i_0]) ? (((arr_8 [i_0]) ? var_1 : 1094163241)) : (((var_2 ? (arr_4 [i_0] [11]) : var_12)))));
                        var_16 &= (arr_14 [15] [i_2] [15] [i_0]);
                        arr_16 [i_3] = 3200804045;
                        arr_17 [i_0] [i_3] [i_2] [i_0] [i_4] = (!0);
                        var_17 = (min(var_17, -1));
                    }
                }
            }
            var_18 = var_5;
        }
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_19 ^= var_7;
                var_20 = ((var_13 | (max(1094163240, (arr_11 [i_0 + 1] [i_0] [i_0 + 1])))));
                var_21 = (max(var_21, ((max(((93 ? ((max(14, var_13))) : ((var_5 ? 0 : -95)))), 64)))));
                var_22 = (max(((((-(arr_20 [i_0] [i_5] [i_5]))) - var_11)), (arr_0 [i_0] [i_6])));
                var_23 &= (max((((((var_2 ? 5 : 235))) ? ((max((arr_2 [i_0] [i_0]), 1148167649))) : (min(0, -17279)))), 14));
            }
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                arr_25 [i_5] [15] [i_5] [i_5] = (40012 == 1);
                var_24 = (min(var_24, ((max(1, -122)))));
            }
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                var_25 = var_8;
                var_26 &= (max(((((arr_9 [i_5] [i_5]) != ((min(8971, 7094)))))), (1 + var_5)));
            }
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = -1;
                            var_27 = (arr_12 [i_5] [i_10] [i_5]);
                        }
                    }
                }
            }
            arr_36 [i_5] = (((((((max(var_7, var_0))) ? ((-3470066235996788095 ^ (arr_30 [i_0] [i_5] [i_0] [i_5] [i_0]))) : (12743 && var_11)))) || ((((arr_28 [i_5 - 1] [i_5 - 1] [i_5 - 1]) * var_2)))));
            arr_37 [i_5] = (((((-(arr_19 [i_5])))) ? 9223372036854775807 : (arr_19 [i_5])));
        }
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            var_28 = (min((((((max(1, -117))) ? (arr_12 [i_12] [i_0 + 1] [i_0 + 3]) : (arr_40 [i_0] [i_0])))), -var_9));
            var_29 *= (max((arr_32 [i_0] [i_12] [i_12] [14] [i_0 + 1]), var_9));
        }
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 15;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 14;i_14 += 1)
            {
                {
                    var_30 = (arr_3 [i_13] [i_13]);
                    var_31 = (((((((max(18816, 1))) > 1))) ^ (((((arr_21 [i_0] [i_13] [i_13] [i_14]) ? (arr_24 [i_13]) : var_5)) * (var_2 >= var_4)))));
                    var_32 = (max((arr_45 [i_13 - 1] [i_13 - 1] [i_13] [i_0 + 3]), (arr_7 [i_13 - 2] [i_13])));
                }
            }
        }
        var_33 &= ((((arr_21 [1] [i_0 - 1] [i_0] [i_0]) - (arr_21 [i_0] [i_0 + 2] [5] [i_0]))));
        var_34 += (arr_48 [8] [14] [14]);
    }
    var_35 = var_4;
    var_36 = ((1 ? var_2 : (6439 > var_2)));
    #pragma endscop
}
