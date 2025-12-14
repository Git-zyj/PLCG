/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((max((max(var_10, var_13)), 1297188558))) ? var_11 : var_10);
    var_15 += var_9;

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0] = ((-var_10 ? (arr_0 [i_0 + 2] [i_0 + 2]) : var_6));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_16 = (max((min(2306200285, (15 || var_4))), var_4));
            var_17 &= (min((((!((min(var_8, var_6)))))), ((21065 - (max((arr_4 [i_0]), var_4))))));
            arr_6 [i_1] [i_0] [i_0] = (max(-var_13, (2306200304 % 15)));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_9 [i_0] [i_2] [i_2] = 0;

            for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
            {
                var_18 = ((2306200285 || ((min((~var_10), 32512)))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    arr_15 [i_0 + 2] [i_0] [i_3] [i_0] [i_0] [i_0] = var_13;
                    var_19 = (arr_4 [i_0]);
                    var_20 = (((-9223372036854775807 - 1) ? (((15 <= (arr_5 [i_4] [i_0 - 1])))) : 15));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_21 = (((!(arr_18 [i_0 + 3] [i_2] [i_3 - 2] [i_0 + 3]))) ? (((arr_12 [i_2]) ? (arr_11 [i_0] [i_2] [i_3] [i_5]) : 2306200285)) : 0);

                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        var_22 = var_8;
                        arr_21 [i_0] = 15;
                        var_23 = -883008063;
                        var_24 = (arr_20 [i_0] [i_0] [i_3] [i_5] [i_5]);
                    }
                    var_25 = -198;
                    var_26 = (((arr_1 [i_3]) || 18446744073709551615));
                    arr_22 [i_5] [i_3] [i_2] [i_0] = (((arr_18 [i_0 + 3] [i_0 + 3] [i_0 + 1] [i_3 - 2]) ? var_1 : 198));
                }
                arr_23 [i_2] [i_2] [4] = var_2;
                var_27 *= -15;
            }
            /* vectorizable */
            for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    var_28 = (min(var_28, 29803));
                    var_29 = (((arr_13 [i_8 - 1] [0] [i_8 - 1] [i_8 - 1]) ? (arr_18 [i_8 - 1] [i_2] [i_8 - 1] [i_2]) : 198));
                }
                var_30 = arr_8 [i_7];
            }
            var_31 = 14324;
            arr_28 [i_0 + 2] [i_0 + 3] [i_2] = 1;
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 9;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 9;i_11 += 1)
                {
                    {
                        var_32 = (((max(((!(arr_24 [i_0] [i_9] [i_10] [i_10]))), (arr_17 [i_0] [i_9] [i_0 + 1] [i_11]))) ? (max((arr_36 [i_0] [i_0] [i_10 - 1] [i_11]), 1)) : ((((var_3 < (arr_16 [i_0] [i_0] [i_0] [i_11])))))));
                        arr_37 [i_0] [i_9] [i_9] = 0;
                    }
                }
            }
            arr_38 [i_9] [i_9] [i_9] = -18327208952982430317;
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        {
                            var_33 = (arr_36 [i_9] [i_9] [i_9] [i_9]);
                            arr_50 [i_12] [i_14] [i_13] [i_12] [i_12] [i_12] = ((!(arr_4 [i_13])));
                            arr_51 [i_0] [i_12] [i_12] = ((0 + (max((max(119535120727121299, (-2147483647 - 1))), (arr_12 [i_0 - 1])))));
                            arr_52 [i_12] [i_13] = (((((!(arr_13 [i_0] [i_9] [i_12] [i_0]))) ? (arr_33 [i_0] [i_9]) : var_5)));
                            arr_53 [i_0] [1] [i_12] = var_12;
                        }
                    }
                }
            }
        }
        var_34 = var_12;
        var_35 = max((~14324), (max((arr_16 [i_0 + 3] [i_0 + 2] [i_0 + 2] [i_0]), ((max((arr_11 [i_0 + 3] [i_0 + 2] [i_0 + 2] [i_0 + 2]), (arr_0 [i_0] [i_0])))))));
    }
    var_36 += (0 ? -0 : 1988767011);
    #pragma endscop
}
