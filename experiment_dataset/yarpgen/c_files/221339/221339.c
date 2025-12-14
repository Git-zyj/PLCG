/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = (((((0 / var_5) * 0)) / var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_12 = ((!(arr_0 [i_0])));
        var_13 ^= (((arr_0 [i_0]) * (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_14 = (max(var_14, ((((arr_2 [6]) | (min(var_6, (max(var_9, (arr_0 [i_1]))))))))));
        var_15 = var_5;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_16 = (((((~(arr_6 [i_2])))) ? (arr_5 [i_2] [i_2]) : (arr_5 [i_2] [i_2])));
        var_17 ^= (max((((arr_6 [i_2]) ? (arr_7 [i_2]) : (arr_7 [i_2]))), (((arr_6 [i_2]) ? (arr_7 [i_2]) : (arr_6 [i_2])))));
        var_18 = (((max((arr_6 [i_2]), (((arr_5 [i_2] [i_2]) ^ (arr_7 [i_2])))))) ? ((((((arr_5 [i_2] [1]) ? (arr_6 [i_2]) : 40729))) ? var_6 : (((!(arr_6 [i_2])))))) : var_7);

        for (int i_3 = 4; i_3 < 16;i_3 += 1)
        {
            var_19 = ((-((((~(arr_6 [i_3])))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((max(((-(arr_9 [i_2] [i_2] [i_2]))), ((40729 ? (arr_11 [i_3] [i_3 - 4] [i_3 + 1] [i_3]) : var_2)))))));
                            arr_17 [i_3] [i_5] [i_4] [1] [i_3] = (-(((~56959) & (arr_10 [i_3]))));
                        }
                    }
                }
            }
            var_21 = (arr_15 [i_2] [i_2] [i_3] [i_2] [i_3]);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_22 = (((((0 - (arr_9 [i_3 - 2] [i_3] [i_3 - 2])))) ? (arr_9 [i_3 + 1] [i_3] [9]) : (arr_9 [i_3 - 3] [i_3] [i_3])));

                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            arr_25 [5] [1] [1] [i_7] [i_7] [i_3] [i_9] = (arr_16 [i_2] [i_2] [i_2] [2] [2]);
                            var_23 = ((!(!-27898)));
                            var_24 = (min((((var_7 ^ (~40729)))), (~2842099807)));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_25 = var_8;
                            var_26 = (arr_6 [i_8]);
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            var_27 = ((((!(arr_27 [i_2] [7] [i_3] [i_7] [i_7] [3]))) ? (((arr_11 [i_3 - 1] [i_3 - 1] [i_8] [i_11]) ? (arr_9 [i_2] [i_2] [i_3 - 4]) : ((-426132033 ? (arr_19 [12] [12]) : (arr_24 [i_2] [i_7] [i_7] [i_8] [i_7] [i_3] [i_2]))))) : (min(((8 ? (arr_28 [i_7] [i_3]) : 64801)), (arr_7 [i_2])))));
                            arr_32 [i_2] [i_2] [i_2] [i_2] [i_3] = ((((-(((arr_8 [10] [i_8] [i_7]) ? var_6 : (arr_16 [i_2] [i_2] [i_7] [i_2] [i_11]))))) * (min(((min((arr_29 [i_2] [3] [i_3] [3] [i_2]), (arr_16 [i_11] [16] [16] [16] [16])))), (var_0 * -1)))));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            arr_36 [1] [i_3] [i_3] [i_2] = (arr_5 [i_3] [i_3]);
                            arr_37 [i_2] [i_2] [i_7] [i_8] [i_3] = ((1169478322 ? (((arr_34 [i_8] [i_8] [8] [8] [i_2]) ? (~var_0) : ((-426132033 ? 38226 : (arr_10 [i_3]))))) : var_2));
                            arr_38 [i_3] = arr_28 [i_2] [i_3];
                            arr_39 [i_3] = ((((!((((arr_7 [15]) ? var_8 : (arr_23 [i_2] [i_3] [i_7] [3] [1])))))) ? (arr_7 [i_2]) : (((~6624798750380493130) ? ((min((arr_11 [i_2] [i_2] [i_2] [i_2]), (arr_23 [i_12] [i_7] [i_7] [i_3] [i_2])))) : (!1169478322)))));
                        }
                    }
                }
            }
        }
        for (int i_13 = 3; i_13 < 16;i_13 += 1)
        {
            var_28 = (arr_7 [i_2]);
            var_29 = ((-(arr_27 [i_13 - 3] [i_13] [i_13] [i_13] [i_13] [i_13])));
        }
    }
    #pragma endscop
}
