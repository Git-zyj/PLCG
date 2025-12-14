/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 * ((var_3 ? ((var_1 ? var_6 : 5)) : var_1))));
    var_11 = (min(var_11, var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_12 = (((((22 ? ((((arr_3 [11] [i_1 + 2] [i_1]) ? 107 : 192))) : (((arr_5 [i_3 - 1] [i_4]) - (arr_5 [i_0] [i_0])))))) ? (((((max((arr_5 [i_0] [i_1]), var_9))) ? ((max((arr_12 [i_2] [i_1 - 2] [4] [15] [1] [1] [4]), (arr_11 [i_0] [i_0] [i_2] [i_3] [i_4 + 1])))) : (((arr_12 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_5 : (arr_8 [i_0] [i_1] [i_2] [i_3])))))) : (max((arr_3 [i_3] [i_3 - 2] [2]), ((max((arr_5 [i_4] [i_0 - 1]), 0)))))));
                                var_13 = ((((max(-8, (arr_8 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 2])))) ? ((~(arr_10 [i_3 + 1] [i_3] [i_3 - 1] [i_2]))) : ((-12097 ? (arr_8 [i_3 + 1] [i_3] [i_3 - 1] [i_3]) : (arr_12 [i_2] [i_3] [i_3 - 1] [i_3 - 1] [12] [i_3] [i_3 - 1])))));
                                var_14 = (arr_5 [i_0] [i_0]);
                                arr_13 [i_0 - 1] [i_1] [i_2] [i_3 + 1] [i_4 - 1] [i_0] = (((((var_2 != (arr_8 [i_4] [14] [i_2] [i_0])))) ? ((max((arr_8 [1] [i_3] [i_0] [i_0]), (arr_1 [i_3 - 2])))) : (arr_3 [i_3 + 1] [i_1] [i_0 - 1])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_15 = (((((((((arr_7 [i_0]) || (arr_12 [i_1] [i_0] [i_1] [i_1 + 1] [i_5] [i_5] [i_6])))) & (((arr_19 [i_0] [i_0] [i_0 - 1]) ? var_3 : var_1))))) ? (max((arr_4 [i_6 - 4]), var_4)) : (arr_6 [i_1 + 1] [i_1 + 1])));
                            var_16 ^= ((((max((arr_17 [i_0] [i_0] [i_0] [i_0]), ((max(7, 1)))))) ? var_4 : (((-29 / (arr_11 [i_6 + 3] [i_1 + 1] [1] [i_1] [i_0 - 1]))))));
                        }
                    }
                }

                for (int i_7 = 2; i_7 < 12;i_7 += 1)
                {
                    arr_22 [i_7] [i_7] [7] [6] = ((~((11316 ? 62666 : 107))));
                    arr_23 [i_0] [i_1] [i_7] = (((((arr_6 [i_7 + 3] [i_7 - 1]) - (arr_0 [i_0 - 1]))) < ((((max(-5501483287847466894, var_4)))))));
                    var_17 -= (max((arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_8 [i_0] [i_0 - 1] [i_1] [i_7 - 2])));
                    var_18 = ((+(min(((max((arr_16 [i_0] [i_0] [i_0]), (arr_10 [12] [i_0] [i_1] [i_7])))), (((arr_5 [i_0] [i_0]) + (arr_9 [i_0] [4] [i_0] [i_0] [i_0])))))));
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    var_19 -= var_3;
                    var_20 *= (((((arr_0 [i_1]) ? (arr_7 [i_0]) : var_6)) == (arr_21 [i_0 - 1] [i_0 - 1] [i_1 + 1])));

                    for (int i_9 = 3; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_8] [i_0] = var_3;
                        var_21 |= (((arr_19 [i_0 - 1] [i_0] [i_0 - 1]) ? (arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_19 [i_0 - 1] [i_0] [i_0 - 1])));
                    }
                    for (int i_10 = 3; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_8] = (arr_33 [i_8] [i_10]);
                        var_22 = (arr_1 [i_10 + 1]);
                    }
                }
                for (int i_11 = 2; i_11 < 12;i_11 += 1)
                {
                    var_23 = (arr_14 [2] [2]);
                    arr_37 [i_0] [i_0] [i_11] [9] = (arr_14 [7] [i_11]);
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 15;i_13 += 1)
                        {
                            {
                                arr_42 [i_0] [13] [i_1 - 1] [i_11] [i_12] [i_12] [i_13] = 9483;
                                arr_43 [i_0] [i_0] [i_12] [i_12] [i_13] = ((-(((((arr_17 [i_0 - 1] [i_1 + 2] [i_12 + 1] [1]) + 9223372036854775807)) << (((((arr_17 [i_0 - 1] [i_1 + 2] [i_12 - 3] [i_12 - 3]) + 2958441591750216390)) - 29))))));
                                var_24 = ((5 ? (((max(28, ((1 >= (arr_10 [i_1 + 2] [i_1 + 2] [i_12] [i_12]))))))) : (arr_7 [i_12 + 1])));
                            }
                        }
                    }
                }
                arr_44 [i_1 + 1] = (arr_27 [i_0 - 1] [i_1]);
                arr_45 [i_1] = ((-(-108 * var_4)));
            }
        }
    }
    #pragma endscop
}
