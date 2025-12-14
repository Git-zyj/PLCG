/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((30253 / 3059919927) << ((((var_10 ? (((max(19894, var_6)))) : (~2720767004533042586))) - 29886))));
    var_19 = ((((2519710217 | var_11) ? var_3 : -1842588428)));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_20 = (max(var_20, (((1 ? 12 : ((var_2 ? ((((-32757 + 2147483647) >> (var_16 + 172300179)))) : (min(var_10, var_13)))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_9 [5] [i_1] [i_2] [i_3] |= (!(((((arr_5 [i_0 - 2] [2] [i_0] [15]) >> (-866410943 + 866410960))))));

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            var_21 = (((1775257085 << (var_3 + 1853623261))));
                            var_22 = (arr_6 [i_4 - 3] [8] [7] [i_0] [i_1] [i_2]);
                            arr_12 [i_4] = var_7;
                            arr_13 [i_4] [i_1] [14] [3] [i_4] = (((arr_1 [i_0 - 1]) ? (1862337845 / var_13) : (((var_15 ? var_17 : (arr_1 [i_0]))))));
                        }
                    }
                }
            }
        }

        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_23 &= ((((((arr_10 [1] [14] [4] [1] [i_6]) ? -866410939 : (arr_10 [i_5] [1] [i_5] [i_5 + 2] [i_6])))) && (((-866410918 ? -var_1 : ((var_3 ? var_14 : 4294967272)))))));
                        var_24 *= (min((~var_7), var_12));
                    }
                }
            }

            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                arr_26 [i_5] = var_5;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_25 = (((-866410914 * var_10) ? ((((arr_3 [i_0 + 1]) / (arr_3 [i_0 + 2])))) : (866410916 * var_2)));
                            var_26 = (((((-19897 ? (((arr_24 [i_5]) ? (arr_24 [i_0 + 2]) : 27)) : var_9))) ? (((16515072 - -866410937) + -114)) : 1));
                            arr_31 [i_5] [i_5 - 1] [i_5 - 1] [i_8] [i_8] &= -1;
                        }
                    }
                }
                var_27 = 1;
            }

            /* vectorizable */
            for (int i_11 = 2; i_11 < 14;i_11 += 1)
            {
                var_28 = (((arr_27 [i_5 - 1] [i_0 + 3] [0] [i_11 + 1]) ? -19911 : -30));
                arr_35 [i_5] = (((arr_27 [i_0] [i_5 - 1] [i_11 - 1] [i_0 + 2]) ? -19898 : (arr_27 [i_0 + 3] [i_5 + 1] [i_11 + 3] [i_0 + 2])));
                var_29 += (((var_14 >> (((arr_32 [i_5 + 1] [i_5 + 1] [i_0 + 2]) - 3884118558)))) + (arr_24 [i_5 - 1]));
            }
            arr_36 [i_0 + 1] [i_0] [i_5] = (arr_28 [i_5] [i_5 + 1]);
        }
        arr_37 [i_0] = ((9223372036854775807 ? (arr_25 [12]) : (max((((arr_23 [i_0 - 3] [16] [0] [i_0]) - var_0)), ((((arr_19 [i_0] [i_0]) ? 177 : -19876)))))));
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 9;i_12 += 1)
    {
        var_30 = (!(((1 ? -19921 : (arr_22 [1] [1] [1] [1] [0])))));
        arr_40 [i_12] [i_12] = (arr_5 [i_12 + 1] [i_12 - 1] [i_12] [i_12]);
    }
    #pragma endscop
}
