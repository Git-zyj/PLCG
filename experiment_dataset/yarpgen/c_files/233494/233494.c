/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = (((arr_0 [i_0]) ? (arr_0 [i_0 + 1]) : ((141721294193685005 ? var_4 : -141721294193685016))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            arr_9 [i_1] [i_1] = (arr_6 [5] [i_1]);

            for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_19 [i_1] [i_2] [i_2] = (arr_0 [i_5 + 1]);
                            arr_20 [i_1] [i_1] [i_1] [i_4] [i_1] = ((var_0 ? (((4125862901 == (arr_5 [i_1])))) : var_0));
                            arr_21 [i_1] [i_2] [i_3] [i_1] [i_5] = (arr_13 [i_1 + 1] [i_2] [i_3] [i_1] [i_5 - 2]);
                        }
                    }
                }
                arr_22 [i_1] = ((var_8 ? (arr_4 [i_1 + 2] [i_1 + 2]) : var_9));
                var_15 += (((var_1 % 844929684) ? 844929684 : ((-141721294193685026 ? var_9 : (arr_17 [i_3] [0] [i_2] [0] [i_1])))));
            }
            for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
            {
                arr_25 [i_1] [i_2 - 1] [6] |= ((40427 <= (arr_7 [i_2 + 1] [i_2 - 1])));
                var_16 = (((arr_5 [i_1]) | var_2));
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_17 = var_7;
                var_18 += (((arr_16 [i_1 + 2] [i_2 + 1] [i_7] [i_2 + 1]) * (((arr_15 [9] [1] [i_7] [i_7] [i_7]) * 92))));
                var_19 = (((arr_26 [i_1] [1] [1] [i_2 - 1]) * var_7));
            }
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                arr_31 [i_1] = ((((((arr_16 [i_1 + 2] [i_1 + 2] [1] [1]) ? (arr_15 [i_1 - 1] [7] [i_8] [i_8] [i_8]) : var_3))) ? var_7 : var_9));
                arr_32 [i_1] [i_2] [i_2] = ((var_14 ? ((var_1 ? var_12 : var_13)) : (arr_26 [i_1] [i_1] [i_1 + 2] [i_1])));
                arr_33 [i_1] = 141721294193685026;
                var_20 ^= (((((arr_15 [i_8] [10] [i_1] [i_1] [i_1]) ^ var_7)) % 35882));
                var_21 = ((var_3 ? var_10 : (-127 & var_1)));
            }
            var_22 = var_9;
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            arr_38 [i_1] [i_9] = (((~var_3) ? ((((arr_15 [i_1] [1] [i_1 + 2] [i_9] [i_9]) ? (arr_7 [7] [i_1]) : var_8))) : (~141721294193685026)));
            arr_39 [i_1] [i_1] = ((var_9 ? (((var_14 <= (arr_15 [i_9] [i_9] [i_9] [i_1] [i_1])))) : (arr_5 [i_1])));
        }
        for (int i_10 = 4; i_10 < 15;i_10 += 1) /* same iter space */
        {
            arr_43 [i_1] [i_1] = (arr_37 [i_1 + 2]);
            var_23 = ((((-64 ? 3260249760379402225 : 14657954667478014262)) == (var_1 ^ 0)));
        }
        for (int i_11 = 4; i_11 < 15;i_11 += 1) /* same iter space */
        {
            var_24 = (min(var_24, var_6));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    {
                        var_25 = var_2;
                        var_26 = var_2;
                        var_27 = var_9;
                    }
                }
            }
            var_28 = (((206 ? -141721294193685026 : var_11)));
            var_29 = 1;
            arr_51 [i_1] = (124 ? var_5 : (arr_1 [1]));
        }
        var_30 -= (arr_12 [6] [6] [i_1] [i_1]);
    }
    var_31 = var_5;
    #pragma endscop
}
