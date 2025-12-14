/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_10 = ((var_6 ? (arr_4 [i_0 + 1]) : (max((arr_0 [i_0 - 3]), (arr_4 [i_0 - 3])))));
            var_11 = (max(var_11, 19));
        }
        var_12 ^= ((233560051 == (-127 - 1)));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_13 = (arr_2 [i_2 - 1] [i_3 - 1]);
                        var_14 = var_2;
                        var_15 = var_1;
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_20 [8] &= 4294967288;
            var_16 = (((var_9 + 2147483647) << ((((((-(arr_14 [i_2] [i_6]))) + 29)) - 28))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    {
                        var_17 = ((-489456282 == ((var_7 ^ (arr_21 [3] [3] [i_7])))));

                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            var_18 = (max(var_18, (((-((~(arr_3 [7] [7]))))))));
                            var_19 += 65535;
                            arr_28 [i_2] [i_6] [i_2] [i_7] [i_9] [i_9] [i_9] = ((~(arr_15 [i_8 - 1] [i_8 - 1] [i_6] [i_6] [i_2 - 1] [i_2 - 1])));
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                        {
                            var_20 = 19;
                            arr_31 [i_8 - 1] [i_6] [1] [i_6] [i_2 - 1] = ((!(arr_12 [i_10] [i_6] [i_7] [i_6])));
                        }
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            arr_34 [i_6] [i_6] [i_7] [1] [2] = 19;
                            arr_35 [i_6] [1] [6] [i_2 - 1] [i_11] = var_7;
                        }

                        for (int i_12 = 2; i_12 < 9;i_12 += 1)
                        {
                            var_21 = (!-19);
                            arr_38 [i_6] [i_6] [i_6] [i_6] [i_6] [7] [i_6] = (((arr_22 [i_6] [i_6] [i_6] [i_6]) ? (arr_22 [i_2] [i_2] [i_2] [i_2]) : var_9));
                            var_22 = ((((arr_15 [i_2] [i_2] [6] [i_8] [i_8] [6]) ? var_2 : (arr_13 [4] [i_7] [i_12]))));
                            var_23 = (((arr_16 [i_2] [i_2] [i_2] [i_6] [5] [5]) ? 3635818855241432792 : (arr_10 [9] [9])));
                        }
                    }
                }
            }
            arr_39 [i_2 - 1] [i_6] = (255 % var_2);
        }
        for (int i_13 = 2; i_13 < 8;i_13 += 1)
        {
            arr_42 [i_2] = (((((~(arr_15 [0] [1] [0] [0] [1] [0])))) ? 1865924273 : 1));
            var_24 |= ((((arr_10 [i_2] [9]) ? -1895200860828772985 : var_2)) ^ var_6);
        }
        var_25 = (((arr_2 [2] [2]) ? var_2 : 2));
        var_26 = ((!(arr_36 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])));
    }
    var_27 = ((var_7 ? ((-(((-1 + 9223372036854775807) << (var_8 - 1257194981))))) : var_5));
    #pragma endscop
}
