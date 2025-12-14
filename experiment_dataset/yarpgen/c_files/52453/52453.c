/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (12344 < var_10);
    var_17 += var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 *= (arr_1 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_0] &= ((-2700 ? 3075810771 : -1));

            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                arr_9 [4] [i_1] [i_1] [i_2] = var_1;
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_19 ^= var_15;
                            var_20 = 6;
                            var_21 = ((var_14 <= (arr_12 [i_4] [i_1] [i_1] [i_2 + 3])));
                        }
                    }
                }
                var_22 = (max(var_22, (arr_12 [18] [i_0] [i_0] [i_2 + 2])));
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_23 += (((arr_11 [i_5] [i_1] [i_5] [i_5] [i_5]) & (arr_11 [i_0] [i_1] [i_1] [i_1] [i_1])));
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_24 = ((arr_15 [i_6 - 2] [i_1]) ? 252 : -27718);
                            var_25 = (((arr_16 [i_1] [i_1] [19]) >= (arr_21 [22] [i_7] [i_5] [i_1] [22] [i_7] [i_6])));
                        }
                    }
                }
                var_26 += ((!(arr_3 [7] [i_1] [22])));
            }
            var_27 &= ((110 ? var_2 : var_7));
            var_28 = (((arr_17 [i_1] [i_1] [i_1]) ? (((arr_0 [i_0] [2]) ? var_6 : 186)) : ((~(-32767 - 1)))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    {
                        var_29 = -var_2;
                        arr_26 [i_1] [i_1] [i_1] [i_9] [i_9 + 1] = (((arr_7 [18] [i_9 - 1] [6]) ? var_8 : (arr_7 [i_0] [i_9 - 1] [i_8])));
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    {
                        var_30 = (max(var_30, (((17179865088 & ((((arr_10 [i_0] [i_10] [i_0] [8]) ? var_0 : (arr_28 [i_0] [i_12] [i_11])))))))));
                        var_31 = (((arr_6 [i_12] [i_12] [i_12] [i_12]) ? (arr_8 [i_12] [i_12] [i_12]) : var_8));
                        arr_36 [i_0] [i_12] [i_12] [i_12] [i_12] |= (((((arr_3 [i_10] [i_11] [7]) ? (arr_34 [i_0] [i_10] [6] [18] [i_0] [i_0]) : (arr_16 [4] [i_0] [i_11]))) ^ (((~(arr_24 [i_0]))))));
                        arr_37 [i_11] = (var_5 >= ((((arr_24 [i_11]) + var_7))));
                    }
                }
            }
            var_32 *= (((arr_15 [i_0] [i_0]) < (arr_15 [i_0] [i_10])));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 22;i_14 += 1)
                {
                    {
                        var_33 = (((arr_17 [i_13] [6] [8]) >= (arr_17 [i_13] [i_10] [i_10])));
                        var_34 = (-120 | 1);
                        var_35 *= -28509;
                    }
                }
            }
            var_36 ^= (((arr_6 [i_0] [i_0] [i_0] [i_10]) >= (arr_22 [i_10] [i_10])));
        }
        for (int i_15 = 1; i_15 < 23;i_15 += 1)
        {
            arr_44 [23] [i_0] = (-(arr_0 [i_15 + 1] [i_15 + 1]));
            var_37 ^= (arr_15 [i_15] [i_0]);
            var_38 = (((arr_16 [i_15 + 1] [i_0] [i_15 + 1]) ? (arr_16 [i_15 + 1] [i_0] [i_15 + 1]) : (arr_16 [i_15 - 1] [i_0] [i_15 + 1])));
        }
        arr_45 [i_0] [i_0] = var_5;
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 24;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 24;i_17 += 1)
        {
            for (int i_18 = 2; i_18 < 23;i_18 += 1)
            {
                {
                    var_39 = (min(var_39, (arr_13 [1] [i_17])));
                    arr_54 [i_16] [i_16] [i_16] = ((((min((arr_7 [i_16] [i_17] [i_17]), var_14))) - (((arr_3 [i_18 - 2] [i_18 + 1] [21]) & 7165353909229378368))));
                    var_40 -= ((-(((!(arr_21 [i_18 - 1] [i_18 + 1] [i_18 - 1] [i_16] [i_18 + 1] [i_18 + 1] [i_18 - 2]))))));
                }
            }
        }
    }
    #pragma endscop
}
