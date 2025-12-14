/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_1] [i_1] = var_0;
            arr_5 [i_0] = (arr_1 [i_1]);
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_13 = ((40603 << (((-1334881396 + 1334881427) - 26))));

            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    arr_16 [i_0] [6] [i_3 - 2] [i_3 - 2] [i_3 - 2] |= ((min(((5 ? 255 : 148)), (((arr_13 [i_0] [5] [5] [5] [i_0]) ? (arr_15 [i_0] [i_2] [i_0] [i_4]) : (arr_12 [7] [7] [i_3]))))));
                    var_14 = ((~(arr_14 [i_2] [i_2] [9])));
                    arr_17 [i_0] [i_0] [i_0] [i_4] = ((arr_0 [2] [i_2]) << (((arr_9 [i_4] [4] [4]) - 12124)));
                }
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    var_15 = (arr_0 [i_2] [4]);
                    var_16 += (max(((!(arr_0 [2] [2]))), (124 < 1)));
                    arr_22 [i_5] [i_5] [11] [i_0] [i_0] |= (min(9293, 24946));
                }
                var_17 = arr_13 [i_0] [i_0] [i_0] [i_2] [i_0];
                arr_23 [i_0] [i_3 + 2] [i_0] [i_0] |= max((arr_18 [i_0]), (((arr_10 [i_0] [i_0] [4] [i_0]) % var_12)));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_18 += (arr_3 [i_2] [i_2]);
                arr_27 [i_0] [i_2] [i_6] = ((-(arr_11 [i_6] [i_6] [i_0] [i_0])));
                var_19 = (((((arr_7 [i_2] [i_6]) <= (arr_13 [7] [i_0] [i_0] [i_0] [i_0]))) || (~var_3)));
                arr_28 [i_0] [12] [i_6] = ((!(((var_5 ? (arr_1 [i_6]) : (arr_1 [8]))))));
            }
        }
        arr_29 [i_0] = (arr_12 [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                {
                    arr_37 [i_7] [11] [8] = (min((min(var_8, -var_2)), ((((arr_18 [i_0]) <= (((var_0 < (arr_13 [11] [11] [i_8 + 2] [i_7] [11])))))))));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_20 = (min(var_20, ((((arr_8 [i_0] [i_0]) ? (arr_8 [i_0] [8]) : (arr_8 [i_0] [i_7]))))));
                        var_21 *= (arr_39 [i_0] [i_7] [i_8 - 1] [i_8 + 3] [i_7]);
                        var_22 = (((arr_33 [i_7] [i_7] [i_8] [i_8 - 1]) ? var_9 : 27381));
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        var_23 = ((var_4 ? (arr_15 [i_10 + 2] [i_7] [i_0] [i_0]) : (arr_13 [i_10] [i_10 + 1] [i_10] [i_10] [i_10])));
                        var_24 = (arr_20 [i_8] [i_8 + 1] [i_10 + 2]);
                        arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] = ((-(arr_34 [i_0] [i_7] [i_8 + 3] [i_0])));
                        arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] = (((arr_40 [i_10 + 1] [i_10 - 1] [i_10] [i_10]) ? (arr_40 [i_10 - 1] [i_10] [8] [i_10]) : (arr_40 [i_10 + 1] [i_10 + 1] [i_10] [i_10 - 1])));
                        arr_44 [i_10] = (arr_12 [i_8 + 2] [i_10 + 2] [i_10 + 2]);
                    }
                }
            }
        }
        arr_45 [i_0] = (arr_33 [10] [i_0] [i_0] [i_0]);
    }
    var_25 = var_10;
    var_26 = ((~(var_0 || var_12)));
    #pragma endscop
}
