/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(((((~(-2147483647 - 1))))), var_7);

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_11 = (max(var_11, ((((min((max(var_1, -2147483632)), (arr_1 [i_0] [i_0])))) ? (max((min(4194300, var_7)), (max(65408, (arr_1 [i_0] [i_0]))))) : (((!((min(-65408, (arr_0 [i_0])))))))))));
        var_12 = (((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_4))) ? (min(((~(arr_0 [i_0]))), 0)) : (arr_1 [4] [i_0]));
        var_13 = (min(var_13, (((var_7 | (min(((-2147483632 ? 65408 : var_0)), ((((arr_0 [18]) && var_7))))))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_14 *= max(var_8, (((!(~var_8)))));
                    var_15 = ((~(arr_3 [i_3])));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_16 = (268419072 ? (arr_8 [i_1] [i_1] [i_3] [i_4]) : (arr_9 [i_1] [i_2] [i_3] [i_4]));
                        arr_10 [i_1] [i_1] [i_1] [i_1] = ((((~(arr_1 [i_1] [i_1]))) <= var_5));
                        var_17 &= 8;
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        arr_13 [i_2] [i_2] [i_1] [10] [i_5] = -268419072;
                        arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 2147483632;

                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            arr_17 [i_1] [17] [i_3] [i_5] [i_1] = min((arr_12 [i_1] [i_1] [i_3] [i_6]), ((~(((arr_0 [i_3]) ? 267911168 : (arr_3 [i_1]))))));
                            var_18 = arr_12 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6];
                            var_19 = (min(var_19, (((arr_0 [i_2]) ? (arr_1 [i_1] [i_1]) : (arr_8 [i_3] [i_3] [i_3] [2])))));
                            arr_18 [i_1] [i_2] [i_3] [i_3] [i_1] [8] [i_6] = ((!(((((!(arr_11 [i_1] [i_2] [i_1] [i_5]))) ? (!62) : (arr_2 [i_1]))))));
                            var_20 = (max(var_20, (~56)));
                        }
                        arr_19 [i_1] = (arr_12 [i_1] [i_1] [i_1] [i_1]);
                    }
                }
            }
        }
        var_21 = (max(var_21, (max((max((((65408 == (arr_1 [6] [i_1])))), (arr_6 [0] [i_1] [i_1]))), ((var_9 ? (arr_3 [14]) : ((var_9 << (8388607 - 8388592)))))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    arr_27 [19] [i_7] [i_1] = min((((32 || (arr_6 [i_1] [i_7] [i_8])))), ((((max((arr_4 [i_1]), (arr_12 [i_1] [i_1] [i_1] [i_1])))) ? ((2147483616 ? var_1 : var_0)) : (arr_25 [i_8] [i_8] [i_8] [i_8]))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((-(arr_9 [i_10] [6] [i_10] [i_10]))) & 60))));
                                var_23 = (min(var_23, (arr_28 [i_1] [i_1] [i_1] [i_1])));
                                var_24 = (max(var_24, var_8));
                            }
                        }
                    }
                    var_25 = (max((~var_5), ((((arr_32 [20] [i_1] [i_7] [i_7]) != (max(var_2, (-2147483647 - 1))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                {
                    var_26 = ((((arr_2 [i_1]) == (((var_3 || (arr_31 [i_12] [i_12] [i_11] [3] [3])))))));
                    var_27 = min((arr_16 [i_1]), ((((arr_32 [i_1] [i_1] [i_12] [i_12]) || (((arr_26 [i_1] [i_1]) || (arr_7 [i_1] [i_11] [i_12] [i_11])))))));
                }
            }
        }
        var_28 = (max(((~(arr_5 [i_1] [2] [i_1]))), (min(237, (arr_29 [i_1])))));
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
    {
        var_29 = (min(var_29, ((max(((235 + (~100663296))), ((((var_8 ? 2147483647 : (arr_39 [i_13]))) & (max(var_8, (arr_40 [i_13] [13]))))))))));
        var_30 = (max(((~((32764 ? (arr_20 [i_13] [i_13] [i_13]) : var_1)))), 62));
    }
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        arr_43 [i_14] [13] &= (max((((arr_38 [i_14] [i_14]) ? (arr_20 [i_14] [i_14] [6]) : (arr_9 [i_14] [i_14] [i_14] [i_14]))), (arr_40 [i_14] [i_14])));
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 12;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 12;i_16 += 1)
            {
                {
                    var_31 = (min(var_31, ((((arr_46 [i_15 + 1] [i_15 + 2] [i_15 + 2] [i_16]) <= (arr_46 [i_15 - 2] [11] [11] [i_15 - 2]))))));
                    var_32 ^= ((--268419072) | ((((min(1073217536, var_3))) ? (arr_7 [9] [i_14] [i_15 + 1] [i_16 - 2]) : ((min(var_3, 255))))));
                }
            }
        }
        var_33 = (max(var_33, (arr_1 [i_14] [i_14])));
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 21;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 21;i_18 += 1)
        {
            {
                var_34 ^= (~var_3);
                var_35 = (arr_35 [16] [i_18] [i_18] [i_17]);
                var_36 ^= (arr_32 [i_17] [i_17] [i_18] [i_18]);
            }
        }
    }
    #pragma endscop
}
