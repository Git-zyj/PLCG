/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_16 = (max(var_16, ((((-(arr_2 [i_0 - 2]))) <= (((((arr_2 [i_0 - 1]) <= (arr_1 [i_0 - 1])))))))));
        arr_3 [i_0] = ((((var_7 ? 0 : var_8))));
        var_17 = (max(var_17, (((!(arr_1 [i_0]))))));
        arr_4 [5] = var_8;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_18 ^= var_3;
        var_19 |= (arr_5 [i_1]);
        var_20 += 16024224676970329366;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_21 *= var_14;
        var_22 = (arr_10 [i_2] [i_2]);
        arr_11 [i_2] |= -var_8;
        var_23 = (arr_2 [i_2]);
    }
    var_24 = var_8;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        arr_14 [6] [2] |= var_0;
        var_25 += (arr_6 [0]);
        var_26 *= (var_0 ? (arr_13 [i_3 + 1] [i_3 + 1]) : (arr_7 [i_3] [11]));
    }

    /* vectorizable */
    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {
        arr_18 [i_4] = var_3;
        var_27 = ((-(arr_10 [i_4 + 2] [i_4])));
        var_28 += (arr_7 [i_4] [i_4]);
        var_29 = (!56);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_30 = (max(var_30, (arr_19 [i_5])));
                    var_31 = (arr_2 [i_7]);
                }
            }
        }
        var_32 ^= (((arr_22 [i_5]) ? 199 : (var_6 >= var_6)));

        for (int i_8 = 2; i_8 < 23;i_8 += 1)
        {
            var_33 = (arr_20 [i_8 - 2]);

            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                {
                    arr_35 [i_9] [i_9] [i_8 - 2] [1] [i_10] = ((!(arr_2 [i_5])));
                    arr_36 [i_5] [i_5] [i_9] [i_5] [i_5] [i_5] = arr_0 [i_10] [i_8 + 1];
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                {
                    arr_39 [i_9] [i_9] [i_9] [i_11] = (arr_29 [i_5] [i_8]);
                    var_34 = var_3;
                    var_35 = (max(var_35, 8482473240699707799));
                }

                for (int i_12 = 2; i_12 < 24;i_12 += 1)
                {
                    arr_42 [i_9] [19] [i_9] = (((arr_25 [i_12] [i_9] [1]) ? var_4 : 2422519396739222277));
                    var_36 = ((((arr_25 [i_5] [i_9] [i_12]) << (((arr_22 [13]) - 3227143600)))));
                    var_37 = (arr_25 [i_5] [i_9] [i_12 - 2]);
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            arr_49 [i_9] [i_9] = (((var_13 ? (arr_41 [i_8] [i_13] [i_5] [i_8] [i_5]) : var_6)));
                            var_38 *= var_8;
                            var_39 = (min(var_39, (((!(arr_43 [i_5] [i_8] [i_8 + 2] [12]))))));
                            arr_50 [i_14] [i_9] [1] [i_9] [21] = var_14;
                            var_40 = ((!(-2072795736 - 3)));
                        }
                    }
                }
                arr_51 [i_9] [15] [0] = ((var_4 <= 188) ? (arr_46 [i_5] [24] [24] [1] [0]) : ((-(arr_0 [2] [14]))));
            }

            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                arr_55 [i_5] [i_8 - 1] = (((arr_2 [i_5]) ? (arr_28 [i_5]) : (arr_33 [17] [20] [17] [17] [8])));
                var_41 = (max(var_41, 1));
                var_42 = ((((!(arr_28 [i_5]))) ? var_11 : var_2));
            }
            var_43 = ((arr_20 [i_5]) >= (arr_44 [i_8] [18] [1] [1]));
        }
    }
    #pragma endscop
}
