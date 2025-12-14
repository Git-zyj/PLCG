/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((min(var_1, ((min((~var_3), ((var_4 ? var_0 : var_15))))))))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_18 = (min((arr_0 [i_0]), (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 1])))));
        var_19 = (min(var_19, 140));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_20 = (((var_9 ? var_16 : var_6)));
                            var_21 = (max(var_21, ((-116 / ((2047 ? (arr_12 [i_1] [i_1] [i_3] [i_4] [i_5]) : (arr_3 [i_4])))))));
                        }
                        for (int i_6 = 4; i_6 < 22;i_6 += 1)
                        {
                            var_22 &= var_3;
                            var_23 = ((var_3 ? (arr_10 [i_1] [i_3] [i_4] [21] [i_4]) : (arr_16 [i_4] [2] [i_4] [i_4] [i_6 + 1])));
                            var_24 = (arr_7 [22] [i_1 + 2] [i_6 + 1] [15]);
                        }
                        arr_18 [i_4] [i_2] [i_3] [i_4] [i_2] [i_4] = var_15;
                    }
                }
            }
        }
        arr_19 [i_1] |= (((((0 ? var_16 : (arr_6 [i_1] [i_1] [i_1] [i_1])))) ? var_9 : (arr_14 [i_1 + 2])));

        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            arr_22 [i_1] = (arr_17 [i_7]);
            arr_23 [i_7] [i_1 - 1] = ((-(arr_15 [6] [i_1 + 2] [6] [i_7])));
        }
        for (int i_8 = 4; i_8 < 22;i_8 += 1)
        {
            arr_26 [i_8] = (arr_9 [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 2] [i_1]);
            arr_27 [i_8] [i_1 - 1] [20] = var_16;
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {
                        arr_34 [13] [i_9] [i_9] [i_10] [i_9] [i_9] = var_9;
                        var_25 = (var_4 % (arr_4 [i_1 - 2]));
                    }
                }
            }
            var_26 = ((!(((1838648789 ? var_9 : (arr_33 [i_1] [i_1] [i_1] [i_1]))))));
        }

        for (int i_12 = 1; i_12 < 23;i_12 += 1)
        {
            var_27 |= (arr_3 [i_1 - 1]);
            var_28 = (arr_12 [i_1] [i_1] [i_1 + 2] [i_1] [i_1]);
            var_29 = ((((arr_1 [9] [9]) ? var_6 : (arr_14 [i_1]))));
            var_30 = (((arr_20 [i_1] [i_12 - 1]) ? (arr_20 [i_12] [i_12 - 1]) : (arr_20 [i_1] [i_12 - 1])));
        }
    }
    var_31 -= var_1;
    #pragma endscop
}
