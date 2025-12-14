/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            var_18 = (((max(34342, 2628854605466181028)) >= var_10));
                            var_19 ^= var_13;
                        }

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_14 [i_0 + 1] [i_1] [i_2] [i_1] [i_5] [i_2] [i_0] = var_17;
                            arr_15 [i_0] [i_1] [i_2 + 2] [i_3] [i_0] = arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_1];
                            var_20 = ((-((-((var_4 ? var_9 : var_17))))));
                        }
                        var_21 = (~var_1);
                        var_22 = 1863605002027686946;
                    }
                    var_23 = (35904 ? (arr_5 [0] [i_1] [i_2]) : ((((!(arr_9 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                }
            }
        }
    }

    for (int i_6 = 1; i_6 < 24;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 24;i_8 += 1)
            {
                {
                    var_24 = arr_20 [i_6];

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            arr_30 [i_6] [i_10] = (arr_28 [i_6] [i_6] [i_7] [i_8] [i_8 + 1] [i_9] [i_10]);
                            var_25 = (-2147483647 - 1);
                        }

                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            arr_33 [i_6] [i_6] [i_6] [i_6] = (arr_32 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1]);
                            var_26 |= (~var_2);
                        }
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            var_27 = (arr_26 [19] [i_6] [i_6] [i_6]);
                            var_28 = (((~var_1) | var_8));
                        }
                        var_29 = (((((~(arr_28 [i_9] [22] [3] [i_7] [i_6] [14] [i_6])))) ? (arr_23 [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 1]) : ((1660476616 ? (arr_23 [9] [i_6] [i_8 - 1] [i_9]) : (arr_18 [i_6])))));
                    }
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            var_30 = var_10;
                            var_31 = (arr_38 [i_6] [i_6] [i_8]);
                            var_32 = (((arr_38 [i_14] [i_7] [i_8 + 1]) / (((arr_17 [i_6] [13]) ? (arr_17 [i_6] [i_6]) : (arr_38 [i_6] [i_8] [i_8 + 1])))));
                            arr_43 [i_6] [i_7] [i_8] [15] [i_14] = (min((arr_34 [i_6] [i_7]), 22795));
                            var_33 = (((arr_23 [i_14] [i_6] [i_6] [i_6]) ? ((~(arr_36 [i_6] [11] [i_7] [i_8] [i_8] [i_13] [11]))) : (((!(arr_27 [i_6 - 1]))))));
                        }
                        var_34 = ((!(arr_40 [i_6 - 1])));
                    }
                }
            }
        }

        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            arr_46 [i_6] [10] [10] = ((((min(var_6, (arr_45 [i_6])))) ? var_12 : (((arr_36 [11] [i_6 + 1] [i_6] [i_6] [i_6] [i_15] [i_15]) ? (arr_44 [14] [i_6]) : (arr_20 [i_6])))));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    {
                        var_35 = var_17;
                        var_36 = (((((var_5 ? var_5 : (arr_39 [i_6] [i_6] [i_15] [i_6] [i_17]))) << (var_13 - 16239944409038316149))));
                    }
                }
            }
            arr_54 [i_6] [i_6] = (((~(arr_16 [i_6] [i_6]))));
            var_37 = (min(var_37, 15807541344762132076));
            var_38 = ((-((~(min((arr_34 [i_15] [3]), var_0))))));
        }
        arr_55 [i_6] = ((((((((12707843566604072516 ? 24869 : var_14))) ? (max((arr_51 [i_6 - 1] [i_6 - 1] [22] [i_6 - 1] [i_6] [i_6]), var_0)) : (!var_6)))) && var_6));
    }
    #pragma endscop
}
