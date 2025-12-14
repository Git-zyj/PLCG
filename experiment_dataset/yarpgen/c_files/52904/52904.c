/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 &= ((0 * (0 - 32767)));
        arr_4 [i_0] [i_0] = 32767;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                var_17 = (-(arr_10 [1]));
                arr_12 [i_1] [i_2] [i_3] = ((!(arr_10 [8])));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_17 [12] [i_3] [i_2] [i_3] [i_1] = ((!((((arr_13 [i_1] [i_2] [i_3] [15]) - -1993553368401449228)))));
                    arr_18 [i_3] [i_3] = ((!(arr_15 [i_1])));
                }
                var_18 = (~9223372036854775807);
            }

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_19 = (!-32767);
                var_20 = (min(var_20, 262143));
                var_21 = (((arr_10 [i_1]) * (!18446744073709551615)));
            }
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_22 *= ((5931830965445523372 / (arr_2 [i_6])));
            arr_26 [i_6] [10] = (~-1993553368401449223);
        }

        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
            {
                var_23 *= ((((~(arr_24 [10]))) == (arr_23 [i_7])));
                var_24 = 2111797810;
            }
            for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
            {
                var_25 *= (arr_21 [i_1] [i_1] [i_1]);
                var_26 = (max(var_26, (arr_14 [i_1] [i_1] [i_7] [3])));
            }

            for (int i_10 = 2; i_10 < 15;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            arr_44 [i_1] [i_7] [i_10] [i_11] [i_7] = 200;
                            var_27 = ((!(-2147483647 - 1)));
                        }
                    }
                }
                var_28 = 2147483647;
            }
            /* LoopNest 3 */
            for (int i_13 = 3; i_13 < 17;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            var_29 = -1719206995;
                            arr_53 [i_1] [i_1] [i_1] [i_13] [i_1] [i_1] = (~0);
                        }
                    }
                }
            }
            var_30 -= 1719206999;
        }
        for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
        {
            var_31 = (arr_6 [i_16]);
            var_32 = (max(var_32, (arr_52 [i_16] [14] [i_1] [i_1] [14] [i_1])));
        }
        var_33 = (min(var_33, ((((arr_36 [i_1] [i_1]) << (-24481 + 24532))))));
        arr_56 [i_1] = (!3984091842734956055);
    }
    var_34 = 0;
    #pragma endscop
}
