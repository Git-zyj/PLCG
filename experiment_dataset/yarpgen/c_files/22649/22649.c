/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_2 - 1] [i_1] = (max(((-(var_0 / 424401096))), ((-(arr_8 [i_0 + 1] [i_0] [i_0] [i_0 - 1])))));
                    arr_10 [i_0] [i_1] [i_1] = ((~(arr_4 [i_0 + 1] [i_1] [i_0 + 1])));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_15 = (((arr_12 [i_4] [i_3] [i_0]) ? ((var_11 & (arr_12 [i_0] [i_0] [17]))) : (arr_13 [i_3 + 1] [i_3 + 1] [i_3] [i_0 + 1])));
                        var_16 ^= var_10;
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            var_17 = (arr_20 [i_6] [i_6] [i_6 + 1] [i_6 - 2] [i_6 - 1]);
                            arr_22 [i_3] [i_0] [i_3] [i_1] [i_3] = (((arr_18 [i_6] [i_5] [i_3] [i_1] [i_0] [i_0]) ? (((arr_17 [i_5] [i_3] [i_3] [i_0]) ? var_14 : (arr_6 [i_6] [i_5]))) : 5469));
                            var_18 = (arr_5 [i_0 + 1] [i_0 - 2] [i_0]);
                            arr_23 [i_3] = 424401103;
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_28 [i_1] [i_3 + 1] [i_5] [i_3] = -424401096;
                            var_19 *= ((var_3 ? var_3 : (arr_11 [i_5])));
                        }
                        var_20 = ((var_8 ? (arr_3 [i_3 - 3]) : (arr_16 [i_0] [i_1] [i_3 - 1] [i_5])));
                        var_21 = (min(var_21, (arr_25 [i_5])));
                        var_22 ^= ((~(arr_0 [i_3 + 1])));
                        var_23 = ((-(arr_1 [i_0 - 2])));
                    }
                    arr_29 [i_0] [i_1] [12] |= (arr_13 [i_0] [i_1] [i_3 + 1] [15]);
                    var_24 = (arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 2]);
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                {
                    var_25 = ((!((!((min(424401096, var_0)))))));
                    var_26 = ((((((min((arr_0 [i_0]), var_14))) ^ ((-(arr_14 [i_1]))))) != (max((((arr_27 [12] [i_8] [6] [i_1] [i_0]) | (arr_20 [7] [i_0] [7] [i_1] [i_8]))), (arr_30 [i_0])))));
                    var_27 = (min(((max((arr_17 [i_0 - 1] [12] [12] [i_0]), var_0))), (((arr_17 [i_0 - 2] [0] [0] [i_0]) ? var_0 : (arr_17 [i_0 + 1] [1] [1] [i_0])))));
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_40 [i_0] [i_0 + 1] [i_0] [i_11] [i_11] = ((-var_7 ? (max(-467881358, 3489458428021849961)) : -14957285645687701654));
                                arr_41 [i_0] [i_11] [i_9] = (((((arr_30 [i_0]) ? (arr_32 [i_0]) : (arr_30 [i_0])))) ? (((max(var_12, (arr_32 [i_0 - 2]))))) : (((arr_32 [i_0]) ? 3489458428021849961 : (arr_30 [i_0]))));
                                arr_42 [i_11] [1] [i_9] [i_11] [12] = ((((-26082 ? (((arr_1 [i_0]) ? (arr_38 [i_0 + 1] [i_1] [i_9] [i_9] [i_11] [i_0 + 1]) : (arr_2 [i_10] [i_11]))) : (arr_6 [i_0 - 1] [i_0]))) >= var_14));
                            }
                        }
                    }
                    arr_43 [i_0 + 1] [i_1] [i_9] [i_9] &= ((var_8 ? (((((max((arr_34 [i_9] [10] [0] [i_9]), (arr_3 [i_9])))) > (arr_25 [6])))) : var_3));
                }
                var_28 ^= (arr_35 [i_1] [i_0] [i_0]);
            }
        }
    }
    var_29 = max(((((max(var_1, var_11))) ? (var_5 == var_13) : var_11)), (((~var_1) ? var_5 : var_1)));
    #pragma endscop
}
