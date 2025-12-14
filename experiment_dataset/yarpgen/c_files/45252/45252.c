/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(var_4, ((var_11 ? var_0 : var_2))))) ? ((((((var_8 ? var_14 : var_1)) > ((max(var_0, var_8))))))) : ((var_4 ? ((var_14 ? var_9 : var_9)) : (((-109 ? var_8 : var_12)))))));
    var_19 &= var_4;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [1] [i_2] [i_2] [i_4] [i_3] [1] = ((var_3 | (((arr_0 [i_0]) ? (arr_10 [3] [3] [i_4]) : (arr_1 [i_0])))));
                                arr_14 [2] [1] [1] [i_2] [i_2] [i_2] = (((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_0] = ((var_15 ? (arr_11 [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 4] [i_2]) : (arr_16 [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1])));
                        var_20 = (((((4922 ? var_0 : (arr_11 [4] [i_1] [i_1] [i_1] [i_1])))) ? (((((arr_2 [i_2]) + 2147483647)) >> (((arr_8 [i_0] [i_0 - 1] [i_0 - 1] [1]) - 497048259)))) : var_11));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [9] [i_2] [8] = ((~(arr_2 [i_0])));
                        arr_21 [i_0] [8] = (((2147483647 ? var_5 : (arr_5 [i_0]))));
                        arr_22 [i_0] [i_1] [i_2 - 2] [1] [1] = ((var_11 ? (((arr_10 [i_0] [i_0 - 1] [i_0 - 1]) ? var_1 : var_2)) : (arr_9 [i_0 - 1] [i_0] [i_0 - 1] [5])));
                        arr_23 [i_0] [6] [2] = ((arr_8 [i_2 - 3] [i_2 - 2] [i_2 - 2] [i_2 - 2]) * (arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 + 3]));
                        arr_24 [i_6] [i_6] [i_6] [i_6] [i_6] = var_11;
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_21 = (min(var_21, (arr_9 [i_2] [i_2] [i_2] [i_2])));
                        arr_29 [i_1] [i_1] [i_1] [7] &= (((arr_15 [i_0] [i_0 - 1] [i_2 + 4] [3]) ? (arr_15 [0] [i_0 - 1] [i_2 + 4] [i_2]) : (arr_15 [i_0] [i_0 - 1] [i_2 - 2] [i_2])));
                    }
                    var_22 = (min(var_22, (arr_25 [9] [9] [i_1] [i_1] [i_1] [i_1])));
                }
            }
        }
        var_23 = (max(var_23, ((((((arr_27 [i_0 - 1] [i_0] [1] [9] [i_0] [i_0]) ? var_14 : var_11)) - var_4)))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            {
                var_24 *= var_5;

                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {

                    for (int i_11 = 1; i_11 < 17;i_11 += 1)
                    {
                        var_25 += (arr_36 [i_8] [8] [i_8] [i_11]);
                        arr_40 [i_8] [1] [i_8] [i_11] = -4922;
                    }
                    var_26 = (max(var_26, (arr_35 [i_9] [i_9] [i_9] [i_9])));
                }
                arr_41 [i_9] [i_9] = (((arr_33 [i_8] [i_8]) >= (((arr_33 [i_8] [i_8]) ? var_10 : (arr_33 [i_8] [i_8])))));
            }
        }
    }
    #pragma endscop
}
