/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_17 += ((max(4385079545432793975, -55)));
            arr_7 [i_1] = (max((((arr_6 [i_0 - 2]) & 54)), -1));
        }
        arr_8 [i_0] = ((+(((arr_1 [i_0 - 2]) ? (arr_0 [i_0 - 2] [i_0 + 3]) : (arr_1 [i_0 - 1])))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_18 = (((arr_6 [i_0 - 1]) != (arr_12 [i_0 + 2] [i_2] [i_3] [i_3])));
                arr_14 [i_0] [i_2] = ((!(arr_6 [i_3])));
            }

            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                arr_18 [i_0] [i_2] [i_0] = (arr_13 [i_0 + 1] [i_2] [i_4 + 2] [i_4 + 1]);
                var_19 = -1;
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
            {
                var_20 = (((var_12 ? var_0 : var_6)));

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_21 = (arr_4 [5] [i_0] [i_0 + 2]);
                    arr_25 [i_6] [i_2] [i_2] [i_0] = (arr_17 [i_0 + 2] [i_0] [i_0 - 1] [i_0]);
                }
                arr_26 [i_0] [8] [9] [i_2] = (arr_0 [i_0] [i_0 - 2]);
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
            {
                var_22 += ((~(arr_16 [i_0 + 2] [i_0 + 3])));
                arr_30 [i_2] [i_2] [i_2] = (((arr_17 [i_0 - 1] [i_0 + 3] [i_2] [i_2]) >> (((arr_17 [i_0 - 2] [i_0 - 1] [1] [i_2]) - 13589167617627140567))));
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {
                        var_23 -= ((-(arr_19 [i_0 - 2] [i_9 - 1])));

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_24 = (max(var_24, (((((!(arr_12 [i_0 + 3] [i_0 + 3] [0] [0]))))))));
                            arr_39 [0] [0] [i_0] &= ((-(arr_34 [i_9 - 1] [i_9 - 1] [i_9])));
                            var_25 = (max(var_25, ((((arr_33 [10] [i_10]) ? ((47 ? var_7 : (arr_22 [i_0] [i_2] [i_8] [i_9] [12] [i_10]))) : (arr_15 [i_9 - 1] [i_2]))))));
                        }
                        var_26 &= (((arr_24 [i_0 + 1] [i_0 + 2] [i_0]) ? (arr_24 [i_0] [i_0 - 2] [1]) : (arr_24 [14] [i_0 - 2] [13])));
                    }
                }
            }
        }
    }
    for (int i_11 = 2; i_11 < 13;i_11 += 1) /* same iter space */
    {
        var_27 *= ((((min((arr_15 [i_11 + 3] [i_11 + 3]), var_11))) ? (arr_15 [i_11 + 2] [i_11 + 1]) : (((((arr_5 [i_11] [i_11] [i_11]) + (arr_5 [i_11 + 3] [i_11 - 1] [i_11]))) + (arr_2 [i_11 - 2] [i_11 + 1])))));
        arr_42 [i_11] [i_11] = (arr_37 [i_11] [i_11] [9] [i_11] [i_11 + 1]);
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 9;i_13 += 1)
        {
            {
                var_28 = var_8;

                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    arr_50 [1] = var_2;
                    var_29 = (min((((arr_49 [i_14] [i_13] [i_12] [i_12]) ? (arr_49 [i_12] [i_12] [i_12] [i_12]) : (arr_49 [i_14] [i_13 - 1] [i_12] [i_12]))), (((arr_49 [i_12] [i_12] [i_12] [i_12]) ^ (arr_49 [i_14] [i_13 - 1] [i_13 - 1] [3])))));
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 9;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            {
                                arr_59 [i_15] [6] [i_13] = (((arr_20 [i_12] [3] [i_15] [i_16]) ? ((((arr_51 [i_16] [i_15 + 1] [i_13] [i_13] [i_13] [i_12]) ? (((arr_20 [10] [i_13 + 1] [i_13] [15]) ? 255 : var_14)) : (((!(arr_23 [i_12] [i_12] [i_14] [i_15 - 2] [i_12]))))))) : (((min(var_14, (arr_47 [i_12] [i_13] [i_12]))) | (arr_55 [i_12])))));
                                arr_60 [i_12] [i_12] [i_12] [i_12] [i_12] = (arr_52 [i_16] [i_15] [i_14] [i_13] [5]);
                            }
                        }
                    }
                }
                var_30 = (arr_44 [i_12] [i_12]);
            }
        }
    }
    var_31 = (var_13 & var_10);
    #pragma endscop
}
