/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 += ((((arr_0 [i_0] [16]) << (((arr_2 [22]) + 136)))));
        var_11 = max(((~(((arr_0 [i_0] [i_0]) ? var_5 : (arr_1 [i_0]))))), 3);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = (min(((268435440 ^ (((min(1, -116)))))), ((((arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? (arr_5 [i_1 - 1]) : ((var_4 ? (arr_1 [i_0]) : (arr_5 [i_1]))))))));
                    var_13 = (((arr_2 [i_0]) - (((arr_8 [i_1] [i_0] [i_1 - 1]) ? 1 : (arr_4 [i_0] [i_1])))));

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        var_14 &= (arr_11 [i_3] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_0]);
                        var_15 = ((-(arr_7 [i_0] [i_1 + 1] [i_2] [i_3 - 1])));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_16 = (min(var_16, ((((((1 ? -19840 : -4))) + (arr_7 [i_3 - 2] [i_1 - 1] [i_4] [i_3 + 1]))))));
                            arr_15 [i_0] [i_1] [i_2] [i_0] = ((~(arr_14 [i_3 - 1] [i_3 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 1])));
                            arr_16 [i_4] [i_4] [i_4] [i_0] [i_0] = (((((914484505 ? -1459351417 : 1))) ? (arr_9 [i_1 + 1] [i_3 + 1] [i_0] [i_4] [i_4] [i_3]) : (arr_8 [i_1] [i_1] [i_4])));
                            var_17 = ((1 ? 1 : (50601 / var_3)));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_18 -= ((30469 ? 19840 : 715323171));
                            arr_19 [i_0] [i_1] [i_2] [i_3 + 2] [i_0] = (min((min(-var_9, (arr_10 [i_2] [i_3] [i_1] [i_3 + 2]))), (arr_5 [i_2])));
                        }
                        var_19 = (((arr_4 [i_0] [i_1]) ? -103 : (arr_3 [i_0])));
                    }
                    var_20 = (min(var_20, (((((arr_12 [i_1] [i_0] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1]) ? ((~(arr_7 [i_2] [i_0] [i_0] [i_0]))) : (arr_18 [i_2] [10] [i_2] [i_0] [i_2])))))));
                    var_21 = (arr_5 [i_0]);
                }
            }
        }
        var_22 = (~1);
        var_23 = (min(var_23, (((min(1, (arr_4 [1] [i_0])))))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 12;i_6 += 1)
    {
        var_24 = ((arr_17 [i_6 + 1] [i_6] [i_6 + 1] [14] [i_6]) ? 2385941777 : (arr_17 [i_6] [i_6] [i_6] [10] [i_6]));
        var_25 = ((((((arr_10 [i_6] [i_6 + 1] [i_6] [i_6 + 1]) ? (arr_9 [i_6] [i_6 - 2] [i_6] [i_6 - 2] [i_6] [i_6]) : (arr_21 [i_6] [i_6])))) ? -103 : (arr_6 [i_6 + 2])));
    }
    var_26 = ((((((~-107) ? var_6 : (87 >= var_6)))) ? ((~((var_0 ? var_8 : var_5)))) : (((51 <= var_5) ? var_9 : var_8))));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    var_27 = ((min(((arr_25 [i_9]), (arr_23 [i_8] [i_8])))));
                    var_28 = ((-((((max(0, (arr_17 [i_9] [i_9] [i_9] [i_9] [i_7]))) && (((-(arr_28 [i_7] [i_8] [i_8])))))))));
                }
            }
        }
    }
    #pragma endscop
}
