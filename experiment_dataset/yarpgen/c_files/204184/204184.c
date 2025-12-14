/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~(arr_0 [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = ((17762337024198951314 % (arr_4 [i_0] [i_1])));
            var_18 ^= (((((arr_1 [i_0] [i_1]) / var_14))) ? var_13 : var_2);
            var_19 = ((~((var_10 ? var_1 : (arr_5 [i_0] [i_1] [i_1])))));
            var_20 |= (arr_1 [i_0] [i_1]);

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_21 = (((arr_5 [i_0] [i_1] [i_2]) ? (((arr_0 [i_0]) | var_17)) : (arr_0 [i_1])));
                var_22 = ((var_7 ? (arr_9 [i_2] [19] [18] [i_1]) : var_3));
                var_23 = (arr_7 [i_0] [i_0] [i_0]);
                var_24 = (arr_3 [i_0] [i_2]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_25 = (arr_5 [i_2] [i_2] [i_1]);
                            var_26 -= (((arr_5 [i_1] [i_2] [i_1]) < (arr_0 [i_0])));
                        }
                    }
                }
            }
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    var_27 = 17762337024198951293;
                    arr_18 [i_0] [i_0] [i_0] [i_6] |= (arr_12 [i_5 - 2] [i_5 - 1] [i_1] [i_5 + 1] [i_1] [i_5 - 2] [i_5 - 1]);
                    var_28 = var_8;
                    var_29 = var_0;
                }
                arr_19 [i_0] [i_0] [i_0] = ((!(arr_7 [i_1] [i_5 - 1] [i_5 + 1])));
                var_30 ^= var_5;
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_31 *= (684407049510600322 ? 43331 : (arr_8 [i_0] [i_1] [i_1]));
                var_32 = (min(var_32, ((((arr_17 [i_7] [i_7] [i_7] [i_1] [i_0] [i_0]) ? -var_15 : (arr_7 [i_0] [i_0] [i_0]))))));
                var_33 = (!var_17);
                arr_22 [i_0] [7] [i_7] [i_7] = (arr_5 [i_0] [i_1] [i_0]);
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        arr_25 [i_8 - 2] = (((arr_11 [i_8] [i_8 - 1] [i_8 - 2] [i_8] [i_8] [i_8 - 1]) ? (((arr_3 [1] [i_8 - 1]) ^ var_15)) : (((684407049510600322 ? var_3 : (arr_3 [i_8 - 2] [i_8]))))));

        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    {
                        var_34 = ((((((arr_21 [i_8]) ? 4345236687484297309 : (arr_20 [13] [i_10] [i_10])))) ? (arr_13 [i_8 + 1] [i_8] [i_11] [i_8] [i_9] [i_11] [i_11]) : (arr_0 [i_10])));
                        arr_36 [i_8 + 1] [i_9] [i_8 + 1] [i_9] [i_8 + 1] [i_9] = (((arr_7 [i_8] [i_9] [12]) - (arr_23 [i_8 + 1])));
                    }
                }
            }
            arr_37 [i_8] [i_8] [9] = ((((((arr_30 [i_9]) ? var_0 : var_11))) ? var_0 : (((arr_32 [i_8] [i_8] [i_8 - 1]) ? (arr_14 [19] [i_9] [i_9] [i_8]) : 32976))));
            var_35 = (((arr_4 [i_8 + 1] [i_8 - 1]) ? var_0 : ((var_0 ? var_4 : 1))));
        }
        for (int i_12 = 2; i_12 < 14;i_12 += 1)
        {
            arr_42 [8] [4] = var_13;

            for (int i_13 = 0; i_13 < 0;i_13 += 1)
            {
                var_36 = (arr_30 [i_8]);
                var_37 = (((arr_38 [i_8]) / 684407049510600322));
            }
        }
    }
    #pragma endscop
}
