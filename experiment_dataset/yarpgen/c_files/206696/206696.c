/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (!13286779183160421732);

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_13 = ((-((((arr_3 [1]) == (arr_3 [i_0]))))));

            for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
            {
                var_14 = (min(var_14, (((!(arr_2 [i_2]))))));
                var_15 = var_2;
                var_16 = (arr_6 [i_0] [i_0 + 3] [i_0] [i_0 + 3]);
                var_17 = ((-5159964890549129878 ? ((((!(arr_6 [i_0] [6] [7] [i_0]))))) : var_7));
            }
            for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
            {
                var_18 = (644 ? (arr_10 [i_0 + 4]) : (arr_2 [i_0 + 2]));
                arr_11 [i_0] [i_1] [i_3] [i_1] = 1;
                arr_12 [i_3] [i_1] [i_0] = ((5159964890549129883 ? (arr_3 [i_3]) : 9223372036854775807));
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
            {
                var_19 = (((arr_0 [i_0 + 4]) ? var_11 : ((var_4 ? 1 : 2833204681))));

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_20 = (min(var_20, (((((!(arr_8 [19] [i_4] [i_1] [10]))))))));
                    var_21 &= 1;
                    arr_17 [i_5] [19] = ((1 ? (arr_5 [i_5] [i_4] [i_0 + 3]) : (arr_5 [i_0 - 1] [0] [i_4])));
                    var_22 = (5159964890549129884 ? (arr_0 [i_0 - 1]) : var_10);
                    var_23 = (min(var_23, var_11));
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_24 = ((!(arr_3 [i_0 + 2])));
                    var_25 ^= var_2;
                    var_26 -= (((arr_18 [i_0 - 1] [i_1]) + var_5));

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_27 = (max(var_27, 9223372036854775807));
                        arr_24 [23] [16] [i_4] [23] [i_0 + 3] [i_0] = ((~(!109)));
                        var_28 = var_11;
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                    {
                        var_29 = ((1 ? 82 : -110));
                        var_30 |= -var_7;
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                    {
                        arr_29 [i_9] [i_6] [i_4] [i_1] [i_0] = (((arr_23 [i_0 + 1]) ? var_5 : (arr_14 [i_0 + 1] [i_1] [i_4] [0])));
                        arr_30 [i_0] [i_1] [i_4] [15] [i_9] = ((~((var_7 ? var_3 : (arr_6 [i_0] [5] [i_4] [3])))));
                    }
                }
                for (int i_10 = 1; i_10 < 24;i_10 += 1)
                {
                    var_31 = ((arr_0 [i_10 + 1]) / (arr_0 [i_10 - 1]));
                    var_32 = ((120 ? (arr_27 [i_0 + 4]) : -110));
                }
                var_33 = (min(var_33, ((((arr_32 [i_0 + 2] [i_0 + 3] [i_0 + 2] [i_0 + 1]) ? 4976344391268831816 : (arr_32 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 3]))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            var_34 = (min(var_34, (!var_1)));
                            var_35 = (arr_16 [i_0 + 2] [i_1] [i_4] [i_11]);
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
            {
                arr_43 [i_1] [i_13] [i_13] = (((~115) ? (((95 >> (arr_13 [15] [i_13])))) : 13286779183160421732));
                var_36 ^= (((arr_38 [i_0] [i_0 - 1] [14]) ? (arr_37 [i_13]) : (arr_38 [i_0] [i_0 - 1] [i_1])));
                arr_44 [i_1] [i_13] [i_13] = -109;
            }
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                for (int i_15 = 4; i_15 < 22;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_37 = (!101);
                            var_38 = (min(var_38, (((-109 ? (arr_22 [i_0] [i_0 + 1] [i_15 - 1] [i_15 - 1]) : (((arr_52 [i_0] [i_1]) ? -106 : var_8)))))));
                            var_39 = ((-109 ? (1153306885 & var_3) : 101));
                        }
                    }
                }
            }
        }
        arr_54 [i_0] = -1;
    }
    for (int i_17 = 0; i_17 < 10;i_17 += 1)
    {
        arr_57 [i_17] = (arr_49 [i_17] [i_17] [2] [i_17]);
        var_40 = (max(var_40, -1133268585));
    }
    #pragma endscop
}
