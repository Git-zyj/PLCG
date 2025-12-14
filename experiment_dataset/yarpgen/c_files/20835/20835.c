/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 = (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])));

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_0] [i_1] = (((arr_1 [i_0] [i_0]) ? var_16 : (arr_1 [i_0 - 1] [i_0 - 1])));
            var_19 = (((((-(arr_1 [8] [14])))) ? var_3 : (arr_2 [i_1 - 1])));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0 - 1] [i_2] [i_2] = (arr_6 [i_2] [i_2] [i_0]);
            var_20 = (((arr_2 [i_0]) ? (arr_3 [i_0] [i_0 - 1]) : var_2));
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
            {
                var_21 = (((arr_1 [i_0] [i_0]) ? (arr_11 [i_0] [i_3 - 1] [i_3] [i_0]) : ((var_5 / (arr_2 [i_0 - 1])))));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_22 = (((arr_7 [5] [i_3 - 1]) ? var_1 : -var_0));
                    var_23 = ((arr_11 [i_3 - 1] [i_3 - 1] [i_3] [i_5]) ? var_1 : (arr_11 [i_3 - 1] [i_3 - 1] [i_3] [i_5]));
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_24 = (min(var_24, (arr_11 [i_6] [i_6] [i_6] [8])));
                    var_25 -= (arr_2 [i_4]);
                    arr_19 [i_3] [i_3 - 1] [i_4] [i_6] = (arr_18 [i_0] [5] [i_3 - 1] [i_4] [i_6]);
                }
                var_26 = 123;

                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_24 [i_3] [i_4] [i_3] = ((-(arr_11 [i_0 - 1] [i_0 - 1] [i_3] [i_8])));
                        arr_25 [i_3] [i_7] [i_7] [14] [i_3 - 1] [i_3] [i_3] = (((arr_22 [i_0 - 1] [i_3] [i_3] [i_7] [i_8] [i_4]) ^ (arr_0 [i_0 - 1])));
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        arr_29 [i_3] [i_9] [8] [i_4] [i_3] [i_3 - 1] [i_3] = ((((((arr_11 [i_0] [13] [i_3] [i_9]) ? var_6 : (arr_9 [i_0] [i_0])))) ? var_10 : 119));
                        arr_30 [i_9] [i_7] [i_4] [i_3 - 1] [i_9] |= ((((var_0 == (arr_12 [i_0]))) ? var_0 : (arr_22 [i_9] [i_7] [i_4] [i_4] [i_3] [i_0])));
                    }
                    var_27 |= (arr_28 [i_7]);
                    var_28 = (arr_15 [i_3] [i_3 - 1] [i_3 - 1] [i_0 - 1] [i_0] [i_3]);
                }
                var_29 = (arr_16 [i_3] [i_3 - 1] [i_4] [i_4]);
            }
            for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
            {
                arr_34 [i_3] [10] [i_3] = ((-(arr_14 [i_3 - 1] [i_0] [i_0 - 1] [i_0 - 1])));
                var_30 *= ((~(arr_23 [i_0] [i_0] [8] [i_0 - 1] [i_0 - 1] [i_3 - 1])));
                var_31 = (arr_6 [i_3] [i_3] [14]);
                var_32 = var_13;
                var_33 = (max(var_33, (((~(arr_32 [i_0 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]))))));
            }
            var_34 = (arr_17 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3 - 1] [i_3 - 1]);
        }
        arr_35 [i_0 - 1] [1] = (((((arr_7 [i_0 - 1] [i_0 - 1]) + 2147483647)) << (((((arr_7 [i_0 - 1] [i_0 - 1]) + 31944)) - 10))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        arr_39 [i_11] = (arr_38 [i_11] [4]);

        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            arr_42 [i_11] = ((!(arr_27 [i_11] [i_12] [i_11])));
            var_35 *= (((arr_2 [i_11]) ? (arr_41 [i_11] [i_12]) : (arr_2 [i_12])));
            var_36 = (arr_21 [i_11] [1] [i_12] [i_11]);
            var_37 -= (!var_17);
        }
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                {
                    arr_49 [i_11] [i_11] [i_11] = ((!(arr_37 [i_13 + 2])));
                    var_38 = (((arr_2 [i_11]) ? (arr_2 [i_11]) : var_17));
                }
            }
        }
    }
    var_39 = (max(var_39, var_11));
    var_40 = var_15;
    var_41 = (!var_5);
    #pragma endscop
}
