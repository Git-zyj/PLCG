/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_16 = (~(max(((2842789716 ? 32767 : var_11)), (arr_0 [i_0 + 3]))));
                            var_17 = (max(var_17, 2842789716));

                            for (int i_4 = 3; i_4 < 23;i_4 += 1)
                            {
                                var_18 = (min(var_18, 4294967281));
                                var_19 = (max(var_19, var_8));
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                arr_16 [i_3] [i_3] [8] = 1452177580;
                                var_20 = (4294967281 ? 2842789721 : 1452177579);
                                var_21 &= ((((2697721304 ? (arr_7 [i_1 - 3] [i_1 - 1] [i_1 - 3] [i_1 + 1]) : 2842789716))) ? (arr_7 [i_1 + 1] [i_1 - 4] [i_1 - 1] [i_1 - 2]) : 2576091875);
                                arr_17 [i_2] [i_3] [i_2] = arr_8 [i_3] [i_3];
                                arr_18 [9] [i_1 + 1] [13] [i_3 - 1] [i_5] [i_3] = 8388607;
                            }
                            var_22 = var_3;
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    arr_22 [i_6] [i_1] [i_1 - 3] = min((min((min((arr_0 [3]), (arr_19 [i_6] [i_6] [i_6]))), (arr_14 [6] [i_6] [i_6] [i_6] [i_6]))), (((((var_5 ? 2842789721 : 3707474617))) ? var_7 : (((arr_20 [i_0 + 3] [i_1 - 4]) & var_2)))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((var_13 ? 2842789715 : (((2842789705 * 3560329444) / 1452177575))))));
                                var_24 = (max(var_24, (min((arr_25 [i_1 - 2] [i_8] [i_1 - 3] [i_1 - 1]), ((var_10 << (var_13 - 4124283362)))))));
                                var_25 = ((min(var_4, (arr_24 [i_6] [i_1 + 1] [i_6]))) * (67108863 / var_1));
                                arr_29 [i_6] [5] = -734637852;
                            }
                        }
                    }
                }
                var_26 &= ((8 >= 2842789716) ? (arr_13 [i_0 + 3] [i_0] [i_0 - 1] [i_1] [i_1] [i_1 - 1] [2]) : (max(2842789719, (arr_13 [i_0 + 3] [i_0 - 1] [i_0 - 1] [22] [i_1 + 1] [i_1 - 1] [4]))));
                var_27 = arr_10 [i_0] [i_0] [i_1 - 4] [i_1];
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {
                    var_28 = (max(var_28, ((((((((var_3 ? var_2 : (arr_15 [i_10] [4] [8] [i_10] [8] [12] [i_9])))) ? (arr_25 [16] [4] [4] [i_9]) : 2508596747)) <= var_1)))));
                    var_29 = (min(var_29, ((((((!(var_0 != 734637865)))) >> ((((-((1452177577 ? var_4 : 3746096270)))) - 1964770680)))))));
                    arr_40 [i_9] = (i_9 % 2 == 0) ? (((((arr_6 [i_9] [i_9] [11]) ? (arr_38 [i_9] [i_10] [i_10] [i_10]) : (arr_6 [7] [i_10] [i_11]))) << (((((arr_38 [i_9] [i_10] [i_11] [i_11]) & var_1)) - 279424)))) : (((((arr_6 [i_9] [i_9] [11]) ? (arr_38 [i_9] [i_10] [i_10] [i_10]) : (arr_6 [7] [i_10] [i_11]))) << (((((((arr_38 [i_9] [i_10] [i_11] [i_11]) & var_1)) - 279424)) - 12844692))));
                }
            }
        }
    }
    #pragma endscop
}
