/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = ((!(arr_1 [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_14 *= ((!var_12) != (arr_0 [i_0]));
            var_15 = (arr_3 [i_1]);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_15 [i_0] [i_2] [i_3] [4] [i_4] = (((arr_3 [i_2]) | var_11));
                        arr_16 [i_4] [i_4] [11] [i_3] [11] [i_0] = ((((((var_6 ? var_7 : 40))) ? 216 : (arr_10 [i_0]))));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            var_16 = (~var_10);
                            var_17 *= 221;
                        }
                        /* vectorizable */
                        for (int i_6 = 4; i_6 < 23;i_6 += 1)
                        {
                            var_18 = ((~(arr_4 [i_0])));
                            arr_22 [i_0] [0] = (arr_13 [i_6]);
                        }
                        var_19 ^= (((arr_5 [i_0] [i_4]) >> (((arr_5 [i_3] [i_4]) - 1159867394993211751))));
                    }
                }
            }
            var_20 = ((((min((arr_13 [i_0]), (arr_13 [i_2])))) ? var_2 : (max((arr_2 [i_2]), (max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_2]), var_6))))));
        }
        arr_23 [i_0] = var_0;
    }

    /* vectorizable */
    for (int i_7 = 1; i_7 < 24;i_7 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (~var_12)));
        arr_27 [i_7 + 1] = (((arr_25 [i_7 - 1]) >> (((arr_24 [i_7 + 1] [i_7 - 1]) - 1389875219))));

        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            var_22 *= (arr_25 [i_11]);
                            var_23 = (min(var_23, (!7137754496104998045)));
                            var_24 *= ((var_3 ? ((-1748798817754107216 & (arr_34 [i_11] [i_11] [i_11] [i_11]))) : (7 * var_5)));
                            var_25 = (((arr_32 [i_9] [i_9 + 4] [i_9]) && (arr_32 [23] [i_9 + 4] [23])));
                            var_26 = (max(var_26, (arr_32 [2] [i_8] [i_9])));
                        }
                        for (int i_12 = 1; i_12 < 23;i_12 += 1)
                        {
                            var_27 = ((~(arr_32 [i_7] [i_7] [14])));
                            var_28 = (arr_37 [14] [i_9] [5] [1] [i_7 + 1] [i_12]);
                        }
                        var_29 = (arr_28 [i_7 + 1]);
                    }
                }
            }
            arr_39 [i_8] = (((arr_32 [i_7] [i_7] [i_8]) - (((arr_30 [i_7 - 1] [i_7] [i_7 - 1]) ? (arr_24 [i_8] [i_7]) : var_3))));
        }
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            var_30 = ((var_1 << ((((11 ? 101 : (arr_25 [i_7 - 1]))) - 98))));
            /* LoopNest 3 */
            for (int i_14 = 3; i_14 < 23;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 22;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        {
                            var_31 = (arr_29 [i_16] [i_7]);
                            arr_49 [i_13] [i_13] [i_14 + 2] [i_15] [i_16] = (((arr_42 [i_7]) == (arr_45 [i_7 - 1] [i_13] [i_15 - 3] [i_15])));
                            var_32 = ((-(arr_41 [i_14])));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_17 = 1; i_17 < 24;i_17 += 1) /* same iter space */
    {
        var_33 += ((arr_26 [i_17]) < (!127));
        var_34 = (arr_24 [i_17 - 1] [i_17 + 1]);
        var_35 = arr_31 [i_17] [i_17] [i_17];
        var_36 = ((((arr_44 [i_17] [i_17] [1] [1]) != (arr_44 [1] [i_17] [1] [i_17 - 1]))));
    }
    #pragma endscop
}
