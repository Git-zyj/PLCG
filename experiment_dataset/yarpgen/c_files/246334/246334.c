/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = (min((arr_1 [i_0] [i_1]), (min(((24 ? 24 : (arr_1 [i_0] [i_1]))), (min(1, 4294967269))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_17 = (min(var_17, ((((arr_1 [i_0] [i_1]) + (arr_1 [i_0] [i_0]))))));
                    var_18 = (((((min((arr_3 [i_0] [8] [i_2]), (((arr_1 [i_1] [i_2]) * (arr_0 [i_1] [i_2]))))) + 9223372036854775807)) >> (((arr_3 [1] [i_1] [i_2]) - 3644078527))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((((max((arr_13 [i_3] [i_4 - 1] [10] [i_4 + 1] [i_4 + 2] [i_4 - 1] [i_4 + 2]), (arr_11 [i_2] [i_4 + 2] [18] [i_4] [i_4] [i_4 - 1] [i_4]))) >= (((~(arr_8 [4] [4] [i_2] [i_3] [4])))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_3] [i_0] = (arr_12 [i_0] [i_0] [i_2] [i_3] [i_4 + 2] [17] [i_0]);
                            }
                        }
                    }
                    arr_15 [0] [i_1] [i_0] [i_2] = (arr_2 [i_0] [i_1]);
                }
                var_20 = ((((((arr_8 [i_0] [i_1] [11] [i_1] [i_1]) ? (arr_8 [i_0] [14] [i_0] [i_1] [14]) : (arr_8 [i_0] [i_0] [i_0] [i_1] [i_1])))) ? ((max((arr_5 [i_0] [i_0] [i_0] [i_1]), var_11))) : ((min((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_5 [5] [i_0] [i_0] [i_1]))))));
            }
        }
    }
    var_21 = ((((((var_13 ? var_6 : var_12)))) ? var_11 : var_11));

    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            arr_22 [i_6] [i_5] = (arr_10 [i_6 + 1] [0] [18] [i_5 - 1] [i_5]);

            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                var_22 = (min(var_22, (((~(arr_21 [i_6 + 2] [0] [i_5 - 1]))))));
                arr_25 [i_5] = (((arr_21 [i_5 + 3] [i_5] [i_5 + 3]) >= (arr_8 [i_6] [i_6] [i_5 + 3] [i_6 + 1] [i_7])));
            }
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        var_23 = (arr_9 [i_5 + 2] [i_5] [i_5] [i_5 - 1] [i_5] [i_5 + 2]);
                        var_24 += (((arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [6] [i_5 + 2]) && (((arr_17 [i_6]) >= (arr_28 [i_5 - 3] [i_5] [i_5] [i_5 - 3])))));

                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_35 [12] [12] [i_8 + 1] [i_5] [i_9] [i_9] = ((~(arr_12 [11] [i_5] [i_8] [i_9] [7] [i_8 - 3] [i_6 - 1])));
                            arr_36 [i_5] [i_6] [i_5] [i_9] [i_10] = (arr_20 [i_5 + 2] [i_6]);
                            arr_37 [8] [i_5] = arr_10 [i_5] [i_5] [i_8] [i_9] [i_5];
                            arr_38 [0] [i_5] [i_8 - 3] [10] [10] = (-(arr_6 [i_9] [i_6] [i_5]));
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                        {
                            var_25 = (((arr_2 [i_6 - 1] [i_5]) | (arr_2 [i_5 - 1] [i_5 + 1])));
                            var_26 = ((-(arr_1 [i_5 + 2] [i_6 + 2])));
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                        {
                            var_27 *= (arr_0 [i_6 + 2] [i_5 + 3]);
                            var_28 = (max(var_28, ((((arr_5 [i_5 - 2] [i_9] [i_6 - 2] [i_6 - 2]) - (((arr_18 [i_6]) ? (arr_13 [i_5] [i_6] [i_5] [i_8] [i_12] [12] [i_5 - 1]) : (arr_7 [i_5 + 3] [i_9] [i_12]))))))));
                        }
                    }
                }
            }
            var_29 = (arr_21 [i_5 - 3] [i_5] [i_5 + 3]);
        }
        arr_45 [i_5] = (max((arr_23 [i_5]), ((((!(arr_20 [i_5 + 1] [i_5]))) ? (arr_41 [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 3] [i_5] [i_5 - 2] [i_5 + 3]) : ((~(arr_6 [i_5] [i_5] [i_5])))))));
    }
    for (int i_13 = 1; i_13 < 23;i_13 += 1) /* same iter space */
    {
        var_30 = ((((((-(arr_47 [i_13] [i_13 + 1])))) ? ((~(arr_47 [i_13] [i_13 - 1]))) : (arr_48 [i_13] [i_13]))) << (((((min(1231180883, 11))) != (arr_46 [i_13 + 2])))));
        arr_49 [i_13 + 1] = 26352;
        arr_50 [i_13] = ((((((~(arr_47 [i_13] [i_13 + 2]))) % (((arr_48 [14] [i_13]) ? (arr_48 [i_13 - 1] [i_13 - 1]) : (arr_47 [i_13] [i_13])))))) ? (arr_48 [i_13] [i_13 + 1]) : (arr_46 [i_13]));
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 23;i_14 += 1) /* same iter space */
    {
        var_31 = (((arr_48 [i_14 + 1] [i_14 + 1]) ? (((arr_48 [i_14] [i_14]) + var_0)) : (arr_51 [i_14 - 1])));
        arr_55 [i_14] |= (((arr_47 [i_14 - 1] [i_14 - 1]) * (arr_48 [i_14 - 1] [i_14 + 1])));
    }
    var_32 = (min((max((min(var_16, var_6)), var_9)), ((max((min(var_2, var_11)), (var_8 && var_5))))));
    var_33 = var_8;
    #pragma endscop
}
