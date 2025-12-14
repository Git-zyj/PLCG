/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((((min(-4751593265881008067, 4751593265881008067))) ? var_5 : var_1))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_11 = (((arr_3 [i_0 - 2]) ^ (arr_3 [i_0 - 1])));
        var_12 = (min(var_12, ((((arr_3 [i_0]) > ((var_1 ? (arr_0 [i_0] [i_0]) : (arr_1 [7]))))))));
        var_13 -= -4751593265881008067;
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_14 += (max((((arr_3 [i_1 - 1]) / (arr_3 [i_1 - 2]))), ((min((arr_3 [i_1 + 1]), (arr_3 [i_1 + 1]))))));
        var_15 = (max(var_15, ((((arr_4 [i_1 + 1] [i_1 - 2]) ? ((((((var_3 ? (arr_0 [i_1 - 2] [i_1]) : (arr_2 [i_1 + 2] [i_1]))) == (arr_3 [i_1]))))) : ((-(min(4751593265881008066, -4751593265881008057)))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    arr_12 [i_2] [i_2] [i_2] [i_2] = (min(((max(8042080861548052596, -4751593265881008067))), (((arr_0 [i_1 - 2] [i_1]) ? (arr_9 [i_1] [i_1 + 2] [i_3] [i_3]) : (arr_9 [i_1] [i_1 - 2] [3] [i_1 - 2])))));
                    var_16 = (min(var_16, (min((((!(arr_10 [i_1] [i_2] [i_3] [i_3])))), (min((arr_0 [i_1 - 2] [i_2]), (arr_2 [i_1] [i_2])))))));
                    var_17 *= (((((-(arr_0 [i_1 - 2] [i_1 - 2])))) ? ((((arr_3 [i_1 - 2]) ? (arr_11 [i_1] [i_1 + 2] [i_1] [i_1]) : (min(var_1, (arr_1 [i_1])))))) : (min((arr_10 [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2]), var_1))));
                    var_18 = ((var_4 && var_1) ? (((min((arr_6 [i_1 + 2]), (arr_6 [i_1 - 1]))))) : var_4);

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_19 -= (((((~(min((arr_13 [i_3] [i_3] [i_3] [i_3]), var_5))))) ? (min((arr_3 [i_1]), (min((arr_13 [i_1] [0] [15] [0]), (arr_5 [3]))))) : ((((arr_5 [i_3]) ? (min(var_5, (arr_14 [i_1 + 2]))) : (((61745 < (arr_5 [i_4])))))))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_20 = (~-27);
                            var_21 = ((-33 ? 122 : 31));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_22 = (((arr_6 [i_6 - 1]) / (arr_6 [i_6 - 1])));
                            arr_19 [i_1] [i_2] [i_2] [i_4] [i_6] = ((~(((arr_3 [i_1 + 2]) ? (arr_18 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1]) : (arr_17 [i_1 + 2] [i_2] [1] [i_3] [i_4] [i_6] [1])))));
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_23 = (arr_5 [i_1]);
                            arr_23 [i_4] [i_4] [i_2] [i_4] [i_4] = (min(31, -32));
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_24 = (max(var_24, (((var_6 ? (arr_25 [i_1] [i_1 + 2] [i_1 - 1] [i_8 - 1] [i_8 - 1]) : (arr_8 [i_1] [i_2] [i_1]))))));
                            arr_27 [i_2] = (((arr_22 [i_1 + 2] [i_2] [i_2] [i_8 - 1] [i_2] [i_8 - 1] [i_8 - 1]) | (arr_22 [i_1 - 2] [i_4] [i_4] [i_8 - 1] [i_2] [i_8] [i_8 - 1])));
                            var_25 -= var_4;
                        }
                        var_26 = ((((((((~(arr_15 [i_1] [i_2] [i_1] [i_1] [i_4])))) ? ((~(arr_14 [i_2]))) : ((37726 ? 49310 : -61))))) ? ((min((((arr_5 [i_2]) ? (arr_1 [i_1]) : (arr_11 [i_1 + 2] [i_1 + 2] [i_3] [4]))), ((((arr_24 [i_1]) ? var_2 : var_9)))))) : ((~(((arr_15 [i_1] [i_1] [i_2] [i_1] [i_4]) ? var_4 : (arr_7 [i_2] [i_2])))))));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_27 |= (((-(arr_16 [i_1] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_9] [i_3]))));
                        var_28 |= (~var_1);
                        arr_31 [i_9] [i_1] [i_1] [i_1] |= (max((arr_25 [i_1] [i_1] [i_1] [i_1] [i_1]), (((((min((arr_10 [i_9] [i_9] [i_9] [i_9]), (arr_17 [i_9] [i_2] [i_3] [i_3] [i_2] [1] [i_1])))) ? (arr_11 [i_1 - 2] [i_1] [i_1] [i_1 + 1]) : (((arr_3 [i_1]) ? (arr_1 [i_1]) : (arr_21 [i_1] [i_1] [i_3] [i_9]))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
