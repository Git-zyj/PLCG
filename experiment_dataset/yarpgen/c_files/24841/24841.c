/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = (~((~(var_3 >= var_2))));
        arr_2 [5] = ((!(((arr_0 [3]) >= -171550416))));
        arr_3 [i_0] [i_0] = ((113 ? 26637 : (var_7 * var_5)));

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_17 = ((((((1132568671 * (arr_4 [i_0] [i_0] [i_0]))))) ? (max((arr_7 [i_1 - 3] [i_1 - 1]), 18446744073709551604)) : -1));
            var_18 = (min(var_18, ((~(~var_1)))));
            arr_8 [i_1] [1] = ((((((-171550416 + (arr_4 [i_0] [i_0] [i_0]))) + (((arr_0 [9]) + -171550435)))) + (+-171550416)));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_19 = (min(var_19, -413916657));
                            var_20 = (((arr_0 [i_2 + 3]) ? ((18446744073709551603 ? 171550416 : var_11)) : (((-(arr_0 [1]))))));
                            var_21 &= (((arr_10 [i_2 + 1] [i_2 + 3]) ? var_11 : 1430078815));
                            arr_18 [i_4] [i_2 - 1] = ((arr_9 [i_3 + 1] [i_3 - 3]) / var_5);
                            var_22 = (min(var_22, ((((arr_4 [i_2 + 3] [i_4 + 2] [i_4]) | var_14)))));
                        }
                        arr_19 [i_4] [i_4 + 2] [i_4] [i_4 - 1] = ((var_1 > (arr_11 [i_2 + 3])));
                        var_23 = var_10;
                        var_24 = (max(var_24, (((var_9 ? (arr_9 [i_3 + 1] [i_2 + 1]) : (arr_9 [i_3 - 3] [i_2 - 1]))))));
                        arr_20 [i_4] [14] [i_3] [i_4 + 1] [i_3 - 1] = (((arr_16 [i_2 + 1] [i_3 - 1] [4] [i_4 - 1]) && 52783));
                    }
                }
            }
            arr_21 [13] [i_2 + 1] [i_2] = (-(arr_17 [i_2 - 1] [i_2 + 2] [i_0] [i_2 + 2]));
            arr_22 [1] = (((arr_17 [i_2 + 3] [i_2 + 3] [i_0] [i_2 + 3]) ? (((!(arr_10 [i_0] [8])))) : (arr_17 [i_2 + 1] [i_0] [i_0] [i_2 + 1])));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_33 [i_0] [i_6] [i_6] [i_7 - 2] [i_8] = 38762;
                            arr_34 [i_0] [i_6] [1] [i_7 - 3] [i_0] = -0;
                            arr_35 [i_0] [i_6] [13] [i_7 + 1] [i_0] = (~(arr_15 [i_7 + 1] [i_6] [i_7] [i_7]));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
