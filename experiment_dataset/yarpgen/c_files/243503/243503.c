/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 *= (min((-9223372036854775807 - 1), (((var_9 || (arr_1 [13]))))));
                var_18 = (max(var_18, (((((arr_0 [i_0] [i_1]) * (arr_0 [i_0] [i_1])))))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    var_19 *= (arr_5 [i_2 - 1] [i_2 - 1] [5] [i_2 - 1]);
                    var_20 ^= (((arr_5 [7] [i_2 + 1] [i_1] [i_0]) * var_0));
                    var_21 *= (arr_6 [i_2 - 1] [1] [i_2 - 1]);

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        var_22 = (max(var_22, (var_13 * var_13)));
                        var_23 = (min(var_23, ((((arr_7 [i_3 + 2] [i_0] [i_1] [20] [i_0] [i_0]) | var_2)))));
                        var_24 = (min(var_24, ((((arr_2 [i_3 + 3]) / var_9)))));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_25 = (max(var_25, ((((arr_1 [i_1]) ? (arr_0 [i_3 + 1] [i_2 + 1]) : (var_6 + 135))))));
                            var_26 = (max(var_26, (((-(arr_9 [i_0] [19] [i_2 - 1] [i_4] [i_3 - 1]))))));
                            var_27 = (min(var_27, ((((arr_0 [20] [i_1]) & (arr_0 [3] [i_1]))))));
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_28 = (min(var_28, var_4));
                    var_29 |= (max((max(-746698322, 1810359757529501472)), (((!(var_16 ^ var_5))))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_30 = (min(var_30, ((min((arr_9 [i_7 - 1] [4] [i_7 + 1] [i_7 - 2] [i_7 - 1]), (min(-8426462958334228091, (arr_2 [7]))))))));
                                var_31 -= (((arr_18 [i_0] [6] [i_0] [i_0]) ? ((((!(!-2761274699695339522))))) : ((((((!(arr_8 [6] [11] [i_7 + 1] [i_8]))))) + ((-(arr_15 [i_0] [i_6] [i_7 + 1] [i_8])))))));
                            }
                        }
                    }
                    var_32 = (max(var_32, (((((((!1285698557) && (arr_10 [i_1])))) <= (((min((arr_0 [11] [11]), (arr_19 [i_6] [3] [9] [i_0]))))))))));
                }
            }
        }
    }

    for (int i_9 = 1; i_9 < 16;i_9 += 1)
    {
        var_33 *= (arr_1 [17]);
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                {
                    var_34 = (min(var_34, (((2761274699695339522 || ((max((((var_15 ? -1 : var_3))), (var_15 ^ var_13)))))))));
                    var_35 ^= (arr_16 [i_9 - 1] [8] [i_11]);
                }
            }
        }
        var_36 = (min(var_36, ((min((((~(((arr_15 [12] [4] [2] [i_9 + 1]) ^ (arr_27 [9] [i_9 + 1] [5])))))), (((((var_7 ? 121 : var_8))) | (min(-2761274699695339507, 37225)))))))));
        arr_31 [8] &= (arr_10 [i_9 - 1]);
    }
    var_37 = (max(var_13, var_1));
    #pragma endscop
}
