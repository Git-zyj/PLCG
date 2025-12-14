/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(32 % var_10)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] = -6259910259668259618;
                arr_5 [i_0] [i_1] [i_0] = ((!(arr_2 [i_0] [i_1] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [2] [i_3] = var_15;
                            arr_13 [1] [1] [i_0] [1] = ((((min(var_9, 6259910259668259628))) ? (arr_11 [i_0] [i_0] [8]) : (max((arr_11 [i_0 - 1] [i_0] [i_0 + 1]), var_16))));
                            arr_14 [i_0] [i_0] [10] [4] = 6259910259668259615;
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_18 ^= ((((min((min((arr_22 [i_4] [i_5] [i_6] [i_7] [i_7] [i_7]), -1)), (((arr_15 [11]) ? (arr_22 [12] [3] [i_6] [1] [i_7] [4]) : 22))))) ? (arr_21 [i_7] [10] [i_5]) : (arr_19 [i_7] [i_5])));
                        var_19 ^= (--6259910259668259629);
                    }
                }
            }
        }
        var_20 = (((arr_21 [13] [i_4] [i_4]) ? ((((min((arr_18 [i_4]), var_14))) ? (arr_17 [6]) : ((max((arr_22 [18] [i_4] [i_4] [i_4] [i_4] [i_4]), (arr_16 [i_4])))))) : (arr_22 [i_4] [i_4] [1] [i_4] [i_4] [i_4])));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    {
                        var_21 &= (min(var_16, (min((arr_24 [i_4] [i_4] [i_4] [19] [i_4]), 20349))));
                        arr_34 [i_4] [15] [4] [i_10] = (((var_15 ? ((-(arr_27 [19] [i_9] [i_10]))) : (((4537354259078927598 ? 853025758 : 853025775))))));
                        arr_35 [i_4] [0] [i_9] [i_9] = 120;
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_22 = ((((((arr_30 [i_4]) ? (arr_24 [5] [i_11] [7] [i_4] [i_4]) : var_1))) ? (((arr_25 [i_4] [11] [i_11]) ? 6259910259668259618 : (arr_19 [i_11] [7]))) : (arr_18 [i_4])));
            var_23 = (arr_19 [i_11] [1]);
        }
        /* vectorizable */
        for (int i_12 = 1; i_12 < 18;i_12 += 1)
        {

            for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
            {
                var_24 = (max(var_24, (!-22)));
                arr_45 [17] [14] [i_12] = ((!(arr_24 [i_13] [17] [i_12] [11] [i_4])));
            }
            for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
            {
                var_25 = (arr_41 [i_12] [i_12] [i_14]);
                arr_50 [8] [14] [i_14] [i_4] &= (arr_23 [i_4] [i_12] [i_4] [i_12] [i_4] [i_12 + 2]);
            }
            arr_51 [i_12] [7] [i_12] = ((((!(arr_32 [2] [i_12] [i_12]))) ? (arr_20 [2] [18] [i_12] [13]) : (arr_36 [i_12] [i_12 + 2] [10])));
            var_26 = (arr_38 [13] [18]);
        }
    }
    /* vectorizable */
    for (int i_15 = 2; i_15 < 18;i_15 += 1)
    {
        arr_56 [16] = (62865 <= 175);

        for (int i_16 = 3; i_16 < 17;i_16 += 1) /* same iter space */
        {
            arr_59 [i_15] [2] [i_16] = ((-(arr_40 [i_16])));
            arr_60 [i_15] [i_16] [i_16] = (163 ^ var_3);
            arr_61 [i_16] = (arr_15 [i_16]);
        }
        for (int i_17 = 3; i_17 < 17;i_17 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    {
                        var_27 += (arr_57 [i_15 - 1] [i_15]);
                        var_28 = (arr_22 [0] [i_19] [i_18] [i_18] [i_17] [i_15]);
                    }
                }
            }
            var_29 = (arr_30 [i_15 + 1]);
            var_30 *= (((var_2 ? var_0 : 853025775)));
        }
        for (int i_20 = 3; i_20 < 17;i_20 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 19;i_21 += 1)
            {
                for (int i_22 = 2; i_22 < 17;i_22 += 1)
                {
                    for (int i_23 = 1; i_23 < 17;i_23 += 1)
                    {
                        {
                            var_31 = (((arr_31 [i_21]) - -123));
                            arr_83 [i_22] [i_20] [i_21] [4] = (((arr_77 [8] [13] [i_15 - 1] [i_23]) != (arr_77 [i_15] [i_15] [i_15 - 2] [i_21])));
                            var_32 = (min(var_32, (arr_65 [i_15] [i_21])));
                        }
                    }
                }
            }
            arr_84 [3] [i_20] [i_20] = (((arr_62 [i_15 - 1] [i_20]) ? (arr_62 [i_15] [i_20 - 1]) : (arr_62 [i_15 - 1] [i_20 - 2])));
        }
        var_33 += ((!(((-(arr_32 [6] [16] [18]))))));
    }
    var_34 = var_3;
    #pragma endscop
}
