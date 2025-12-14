/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_18 = (((arr_5 [i_0] [i_0] [i_1]) ? (arr_2 [i_0]) : (arr_2 [i_1])));
            arr_6 [i_0] [i_1] = (arr_5 [i_0] [i_1] [i_0]);

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_19 = (var_7 >= 576460683583946752);
                var_20 = (((!var_14) ? (arr_2 [i_2]) : var_6));
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_12 [i_0] [12] = (1125899906842624 / var_6);
                arr_13 [i_0] [i_0] = var_6;
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_25 [1] [i_7] [i_5] [i_7] [i_0] = (arr_23 [6] [i_4] [i_5] [i_7] [i_7] [i_6]);
                                var_21 = ((-1125899906842638 ? var_15 : (arr_16 [16])));
                            }
                        }
                    }
                    arr_26 [i_0] [i_4] [i_5] = (arr_1 [i_5]);
                }
            }
        }

        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {
            var_22 = (((arr_14 [i_0] [i_8 - 1] [i_8 + 2]) * (arr_15 [i_8 + 4])));
            arr_30 [i_8] [1] [i_0] = ((((0 ? 1125899906842624 : (arr_24 [8] [i_8] [i_8] [i_8] [i_8] [i_8]))) % 66846720));
        }

        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_23 = (arr_5 [i_0] [i_9] [i_0]);
            var_24 = (((arr_4 [i_0]) ? 3555537022 : ((229 ? 7648842151532483188 : 0))));
        }
        var_25 = ((2133129726 ? 484477023 : 36));
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
    {
        var_26 *= 0;
        arr_36 [i_10] = 2059678709;
        var_27 ^= ((-(max((((var_8 ? 255 : 4152701780))), ((-(arr_20 [12] [i_10] [i_10] [i_10] [i_10])))))));
        arr_37 [i_10] = ((((max((arr_32 [i_10] [i_10] [i_10]), -1676117076))) ? ((((arr_32 [i_10] [11] [i_10]) ? (arr_32 [i_10] [i_10] [i_10]) : (arr_32 [i_10] [i_10] [i_10])))) : (((arr_34 [i_10]) ? ((-(arr_14 [i_10] [i_10] [i_10]))) : var_3))));
        var_28 = (((arr_14 [i_10] [18] [i_10]) ? 1125899906842637 : (arr_18 [i_10] [i_10] [i_10])));
    }
    /* LoopNest 3 */
    for (int i_11 = 1; i_11 < 11;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 10;i_13 += 1)
            {
                {
                    var_29 *= arr_17 [i_13] [i_12] [i_11];
                    var_30 = ((3755557010 ? (min(var_8, 898555114)) : 50680));
                }
            }
        }
    }
    var_31 = ((-var_11 ? (((!(((var_10 ? var_8 : 18446744073709551606)))))) : 190));
    var_32 = ((var_16 ? (((((max(-32265, var_4)) >= var_8)))) : (max((min(7648842151532483188, 37725)), (~var_7)))));
    #pragma endscop
}
