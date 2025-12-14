/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = (min((arr_4 [i_0] [i_1] [i_2]), (((arr_6 [i_0] [i_0] [i_1] [i_0]) ? (((var_3 ? 65533 : var_16))) : (min(var_4, (arr_6 [i_0] [i_0] [i_0] [i_0])))))));
                    var_19 &= (arr_5 [2] [i_2 + 1] [i_2] [i_2 + 1]);
                    arr_8 [i_0] [2] [i_2] = (arr_0 [i_1]);
                }
            }
        }
    }
    var_20 &= ((-18005941578913469201 ? ((var_5 ? ((53 ? 48 : var_11)) : ((var_11 ? var_17 : var_16)))) : ((-var_17 ? var_10 : -var_5))));

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_21 = (max(var_21, -var_0));
                var_22 = ((((((arr_1 [i_3]) ? (arr_2 [i_3]) : (arr_13 [i_3] [i_4] [i_5])))) ? (arr_7 [i_5]) : var_17));
            }
            var_23 *= (((((((var_4 ? (arr_4 [19] [i_4] [i_4]) : (arr_12 [i_4] [i_3])))) || (arr_11 [i_3] [8] [i_3]))) ? (((((min(var_6, (arr_12 [i_3] [i_3])))) ? ((max(38, -26))) : (!2561476877)))) : (((arr_10 [i_3]) ? (arr_6 [i_3] [i_3] [i_3] [i_3]) : 38))));
            var_24 = (((arr_7 [i_3]) ? (((arr_0 [i_3]) ? var_0 : var_8)) : ((min(-45, 0)))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_22 [15] [i_7] [i_6] [i_6] [i_6] = ((((((((739827716 ? var_7 : var_7)) < (arr_12 [i_3] [i_7]))))) / ((max((arr_3 [i_3] [17] [17]), (arr_13 [3] [i_4] [i_3]))))));
                        var_25 = (arr_19 [i_3]);
                    }
                }
            }
            var_26 = (arr_10 [9]);
        }

        /* vectorizable */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            arr_26 [i_3] [0] = 38;
            arr_27 [i_3] [11] [1] = (arr_24 [6] [6]);
        }

        /* vectorizable */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_27 ^= (221 ? 69 : 6);

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    var_28 -= -203;
                    var_29 = (((arr_1 [i_9]) ? (((((arr_35 [i_3] [i_10] [i_11]) && var_15)))) : ((18005941578913469201 | (arr_12 [i_9] [i_9])))));
                }
                for (int i_12 = 1; i_12 < 13;i_12 += 1)
                {
                    arr_42 [i_12] [13] [i_12] [i_12] [i_12] [4] = 30471;
                    var_30 *= (((((209 ? 13594 : 310))) ? var_14 : var_11));
                    arr_43 [i_3] [i_9] [i_10] [i_12] [i_12] = ((arr_1 [i_12 - 1]) ? (arr_3 [21] [i_12 - 1] [1]) : (arr_10 [i_12 - 1]));
                }
                var_31 = (arr_39 [i_3] [i_9] [i_9] [4]);
                arr_44 [i_3] [i_3] = (((arr_33 [i_3] [i_9]) ? ((var_15 ? var_12 : (arr_16 [4] [4] [i_10] [4]))) : (~var_2)));
                arr_45 [i_10] [i_10] = (((arr_5 [12] [i_3] [i_10] [i_3]) ? (arr_19 [i_10]) : (arr_17 [i_3] [i_3] [i_3] [i_3])));
            }
            for (int i_13 = 2; i_13 < 15;i_13 += 1)
            {
                arr_48 [i_3] [i_3] [i_3] = (((arr_25 [i_3] [i_3] [11]) && var_8));
                arr_49 [i_9] [i_9] [7] [i_9] = (arr_20 [i_13] [i_13] [i_9] [i_9] [i_3]);
            }
            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    var_32 -= var_16;
                    var_33 = (arr_10 [i_14]);
                    var_34 ^= (arr_20 [i_3] [i_3] [i_3] [i_3] [i_3]);
                }
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {
                    arr_57 [i_16] [i_16] [i_16] [i_16] [11] [10] = (((arr_28 [i_3]) ? (((var_0 ? var_11 : var_6))) : (((arr_1 [i_3]) ? (arr_21 [i_3] [i_3] [i_16] [i_3]) : (arr_18 [i_3] [i_9])))));
                    var_35 *= var_6;
                    var_36 *= ((var_0 ? (arr_2 [i_3]) : var_14));
                }
                var_37 = (max(var_37, (((35064 ? 34 : 4294967295)))));
            }
            var_38 *= var_12;
        }
    }
    #pragma endscop
}
