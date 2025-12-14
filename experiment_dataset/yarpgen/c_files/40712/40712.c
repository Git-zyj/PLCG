/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0 + 1] = var_2;
        var_12 = arr_2 [i_0];
        arr_5 [i_0] [i_0] = (min(283153368, ((max(25907, 2051488722)))));
    }

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_10 [i_1] = 1323141059;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_13 = (max(var_13, var_3));
            var_14 = (arr_12 [i_1] [i_2] [i_2]);
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_19 [i_1] [i_3] = (((arr_16 [i_1]) ^ (arr_7 [i_1] [i_1])));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_15 = (arr_13 [i_1]);
                var_16 = ((((arr_15 [i_1] [i_3]) ? -109 : (arr_12 [i_1] [17] [17]))));
                var_17 = (arr_17 [i_1]);
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_18 = ((!(((1879048192 ? 1613780138 : (arr_9 [i_1]))))));

                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] = (min((((((1048575 ? 1613780134 : var_7))) ? ((var_2 * (arr_23 [i_1] [i_1] [i_5] [11]))) : var_7)), ((min(1613780139, var_4)))));
                    var_19 = (min((min((arr_7 [i_3] [i_1]), (arr_7 [i_1] [i_1]))), (!-1061442126)));
                    var_20 ^= -1972425012;
                    var_21 ^= (arr_9 [i_5]);
                }
                var_22 = (min((min((arr_17 [i_1]), (arr_22 [i_1] [i_3] [i_3] [i_5]))), (arr_22 [i_1] [i_1] [i_3] [i_5])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_35 [i_1] [i_3] [i_5] [i_1] [i_8] = (-((((arr_16 [i_1]) <= (arr_16 [i_1])))));
                            arr_36 [i_8] [i_3] [i_5] [i_7] [i_5] |= (min(((max((arr_31 [i_1] [i_1] [i_1] [i_8] [i_8]), (arr_31 [i_1] [i_3] [i_3] [i_7] [i_8])))), (((((1004903434 ? -1613780139 : (arr_7 [i_3] [i_8])))) ? (3453988906 + 5448) : (var_8 && var_5)))));
                            arr_37 [i_1] [i_3] [i_1] [i_7] [i_1] = (arr_11 [i_1] [i_8]);
                            var_23 = ((+((max((arr_12 [i_1] [i_1] [i_7]), (arr_12 [i_1] [i_3] [i_5]))))));
                            var_24 = min(((var_8 ? -1613780139 : (arr_25 [i_1]))), (((!(((var_3 ? var_0 : 12950)))))));
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {

                /* vectorizable */
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_25 = (((arr_29 [i_1] [i_3] [i_10]) ^ 1887499425));
                        var_26 += var_6;
                        var_27 = (min(var_27, var_2));
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                    {
                        arr_49 [i_1] [i_3] [i_9] [i_10] [i_1] [i_10] [i_12] = (var_7 ? (arr_48 [i_1] [1] [4] [1] [1]) : var_4);
                        arr_50 [i_1] [i_3] [i_3] [i_9] [i_10] [i_10] [i_12] = (((arr_27 [i_1] [i_1] [i_3] [i_9] [i_1] [i_1]) ? (arr_13 [i_1]) : var_6));
                        var_28 = (-(arr_32 [i_1] [i_3] [i_9] [i_9] [i_10] [i_12] [i_12]));
                    }
                    for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                    {
                        var_29 = (arr_17 [i_1]);
                        var_30 += (((arr_44 [i_10] [i_9]) ? var_2 : (((-(arr_32 [i_1] [i_3] [i_3] [i_9] [i_10] [i_10] [i_13]))))));
                        var_31 = var_10;
                    }
                    var_32 = (min(var_32, (6466 && -5449)));
                    arr_53 [i_10] [i_3] [i_3] [i_9] [i_10] |= ((~(var_6 + -6466)));
                    var_33 = var_11;
                }
                var_34 = (min(var_34, (((min(var_3, -11923))))));
            }
        }
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            arr_56 [i_1] [i_14] = (2054383499 == var_11);
            arr_57 [i_1] [i_14] = (min((var_8 < var_10), (min(((var_9 ? var_5 : 22687)), var_5))));
        }
    }
    #pragma endscop
}
