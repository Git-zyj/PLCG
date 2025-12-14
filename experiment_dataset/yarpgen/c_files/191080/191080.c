/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min((((-var_10 >= ((var_0 ? var_11 : var_12))))), ((8802070332094956518 ? 41097 : 8802070332094956518)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        var_14 = ((+(((!3478246309854590029) - (arr_1 [i_1])))));
                        var_15 = (arr_7 [2] [i_1] [i_0]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_16 = (arr_10 [21] [i_1] [i_1] [i_5]);
                        var_17 *= ((((max((max(var_4, (arr_13 [i_0] [i_1] [i_5]))), var_12))) ? (~16383) : (max((((-442752436986829669 / (arr_17 [i_5] [i_5] [i_5] [i_5])))), (max(var_8, (arr_9 [i_4] [i_1] [i_4])))))));
                    }
                }
            }
            var_18 += ((((((arr_10 [11] [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [3] [i_1]) : (arr_10 [i_0] [i_0] [i_0] [i_0])))) || (arr_9 [i_1] [i_1] [i_1])));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_19 = (max(var_19, (((var_4 ? ((((arr_26 [i_0] [i_0] [i_0] [i_8] [i_0]) || (arr_15 [i_7 + 3] [i_6] [i_1])))) : (arr_21 [i_8]))))));
                            var_20 = (max(var_20, ((((((-(arr_14 [i_8] [i_8] [i_0] [i_8] [i_0])))) ? (arr_20 [i_0] [i_6] [i_7]) : var_4)))));
                            arr_27 [i_0] [i_6] [i_0] = (!var_0);
                        }
                    }
                }
                var_21 = (0 == -442752436986829670);
            }
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                var_22 *= (((!((max((arr_12 [i_1] [i_1] [i_1] [i_1]), 28575))))));
                arr_30 [i_0] [i_0] [i_0] [i_0] = 442752436986829674;
                var_23 += ((~(((!(arr_0 [i_1]))))));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                arr_33 [i_0] = (259922692 - 13);
                var_24 = (((arr_23 [i_0] [i_0] [i_1] [i_10]) ? (((!(arr_14 [i_0] [i_0] [i_1] [i_10] [i_10])))) : (!var_5)));
                var_25 = (((arr_10 [i_0] [i_0] [i_1] [i_1]) ? ((var_7 ? (arr_7 [i_0] [i_1] [i_0]) : var_10)) : (arr_29 [i_0] [i_0] [i_10])));
                arr_34 [i_0] [i_1] [i_0] [i_0] = (((arr_15 [i_0] [i_1] [i_10]) ? (arr_15 [i_0] [8] [i_10]) : var_4));
                var_26 *= ((31 ? (arr_10 [i_0] [i_1] [i_10] [i_1]) : (~4294967287)));
            }
        }
        var_27 = (arr_19 [i_0] [i_0] [1]);
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                {
                    var_28 = ((+(((((arr_10 [i_12] [i_11] [i_11] [i_0]) * (arr_22 [i_0]))) - var_0))));

                    for (int i_13 = 4; i_13 < 19;i_13 += 1) /* same iter space */
                    {
                        arr_41 [i_13] [i_13 - 2] [i_13 - 2] [i_13] [i_0] [i_13 - 3] = (max(24, 13174072616793398704));
                        var_29 *= (max((var_3 == var_4), (min((arr_18 [i_13]), var_1))));
                    }
                    for (int i_14 = 4; i_14 < 19;i_14 += 1) /* same iter space */
                    {
                        var_30 = (~4604);
                        var_31 *= ((9644673741614595084 ? 9898599211573696748 : 103));
                    }
                    arr_44 [i_0] [i_0] [i_0] = var_9;
                }
            }
        }
    }
    var_32 = (max(var_32, var_2));
    #pragma endscop
}
