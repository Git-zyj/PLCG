/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 |= ((max(var_6, ((var_1 ? var_5 : var_8)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [1] = (((((-(arr_4 [i_0]))) + 2147483647)) >> (((arr_1 [i_0]) - 4105199426)));
            arr_7 [i_0] [i_0] [i_1] = (arr_2 [i_0]);
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_12 = (!var_0);
            var_13 *= ((~(((!(arr_1 [i_0]))))));

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                arr_12 [i_0] [i_0] [i_3] = var_3;
                var_14 = (((arr_5 [i_2]) ? var_1 : (arr_9 [i_0] [i_2] [5])));
                var_15 = (arr_11 [i_0] [i_2] [i_0]);
                arr_13 [i_3] = ((-(arr_3 [i_3] [5])));
                arr_14 [i_0] [1] [i_3] = (arr_3 [i_3] [i_0]);
            }
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_16 = (arr_9 [i_0] [i_0] [i_4]);
            arr_18 [i_0] [i_4] |= (arr_10 [i_0] [i_4] [i_4]);
        }
        var_17 |= (54545 / 12443180547785101589);
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {
                        var_18 = ((arr_1 [i_7]) << (((arr_8 [i_0] [3] [i_0]) - 4063559697043378131)));

                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_19 &= var_2;
                            arr_32 [i_0] [i_5] [i_6] [i_7] [i_8] [i_5] = var_5;
                            var_20 = (arr_30 [i_0] [i_0] [1] [i_0] [i_7] [i_8]);
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_21 &= (arr_5 [i_0]);
                            arr_36 [i_0] [5] [i_5] [i_6] [10] [i_9] = (((arr_30 [i_0] [i_5] [i_5] [2] [i_0] [i_5]) / (arr_30 [i_0] [i_0] [i_0] [i_0] [i_9] [i_9])));
                            var_22 = (~223);
                            var_23 += ((-(arr_2 [i_0])));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    {
                        var_24 = (((133 ? var_5 : var_5)));
                        arr_43 [i_0] [1] [i_11] [1] = var_9;

                        for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                        {
                            var_25 ^= ((10990 * (arr_15 [i_0])));
                            var_26 *= (((arr_4 [8]) || (arr_41 [2])));
                            var_27 = (((arr_17 [i_0] [i_10] [i_11]) ? (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_29 [i_0] [7] [6] [4] [i_13] [i_13] [i_13])));
                            var_28 *= var_0;
                        }
                        for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                        {
                            var_29 = ((-(arr_31 [i_0] [i_10] [i_10] [i_10] [i_11] [i_12] [2])));
                            var_30 &= ((~(arr_26 [i_0] [i_0] [i_0] [i_0])));
                            var_31 = -var_6;
                        }
                        for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
                        {
                            var_32 = var_9;
                            arr_51 [3] &= ((-(arr_3 [i_10] [i_15])));
                            var_33 = (arr_5 [i_0]);
                        }
                        arr_52 [i_0] [i_11] [i_10] [i_0] = (((arr_23 [i_0] [i_0]) ? ((var_5 ? (arr_9 [i_0] [i_11] [i_12]) : var_4)) : ((10990 ? 1025480768 : -111))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
