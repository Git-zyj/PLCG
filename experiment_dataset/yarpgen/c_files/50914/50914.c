/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_10 * (var_1 ^ var_14))) - var_4));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 ^= var_14;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = ((((+(((arr_2 [i_1] [i_0]) ^ (arr_3 [i_1]))))) ^ ((max((((arr_5 [i_0]) + var_0)), (((var_10 >> (87 - 87)))))))));
            var_22 = (min(var_22, ((((~74) == var_15)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_23 += (arr_11 [i_2] [i_1]);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_24 = (min(var_24, (168 / 8929)));
                            var_25 = (((arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_14 [i_0] [i_1] [i_3] [i_3] [i_4]) : var_4));
                            arr_15 [i_0] [i_0] [i_0] [i_3] [i_0] = (((arr_1 [i_0]) || 169));
                            arr_16 [i_0] [i_3] [2] [i_3] [i_4] = (-8 ? ((((var_11 == (arr_11 [i_3] [0]))))) : (((arr_0 [i_2] [i_4]) + var_14)));
                            var_26 = (max(var_26, (((var_18 ^ (arr_12 [i_0] [i_1] [i_3] [i_4]))))));
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_27 = (max(var_27, ((((-(~167)))))));
                            arr_21 [i_0] [i_0] [i_3] [i_2] [i_0] [i_5] = ((arr_12 [i_0] [i_0] [i_0] [i_0]) ? (((((arr_12 [i_5] [9] [i_1] [i_0]) + 2147483647)) >> (((arr_12 [i_3] [10] [i_2] [i_1]) + 129)))) : (((((arr_12 [i_0] [i_0] [i_0] [i_0]) + 2147483647)) >> (((arr_12 [i_5] [i_2] [i_1] [i_0]) + 142)))));
                        }
                        var_28 = var_10;
                    }
                }
            }
        }
        arr_22 [17] [i_0] &= var_8;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_25 [i_6] [i_6] = 11842808556806585;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    arr_31 [i_6] = (((arr_10 [i_7]) - var_6));
                    var_29 = ((306349697 ^ (arr_2 [i_6] [i_7])));
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                arr_38 [i_6] [i_8] [i_6] [i_10] = var_9;
                                var_30 = ((var_15 < (arr_2 [i_6] [i_7])));
                                var_31 = (max(var_31, (-120 + 132)));
                            }
                        }
                    }
                    var_32 = (arr_19 [i_6] [i_6] [i_6] [i_6] [i_7] [i_8] [i_6]);
                }
            }
        }

        for (int i_11 = 1; i_11 < 16;i_11 += 1) /* same iter space */
        {
            var_33 = var_6;
            arr_42 [i_6] = ((120 ? 167 : 7));
        }
        for (int i_12 = 1; i_12 < 16;i_12 += 1) /* same iter space */
        {
            var_34 = ((var_18 / (arr_14 [i_12 + 1] [i_12] [i_12] [i_6] [i_6])));
            arr_45 [i_6] [3] [i_12] = 6280688195898934266;
            arr_46 [i_12] [i_6] = ((!(arr_33 [i_12] [i_12] [i_6] [i_12 - 1] [17])));
        }
        var_35 = ((((var_14 ? (arr_40 [i_6]) : 181732231183881519))) ? (arr_20 [7] [i_6] [i_6] [i_6] [i_6] [i_6] [8]) : 0);
    }
    var_36 = -var_4;
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 16;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                {
                    arr_56 [i_13] = (((((~(arr_2 [i_13] [i_14])))) ? ((var_12 ? var_10 : (arr_43 [i_13]))) : ((((arr_24 [i_13] [i_13]) ? (arr_24 [i_13] [i_15]) : (arr_24 [i_13] [i_14]))))));
                    var_37 = (((((21 ? (arr_30 [3] [i_13]) : ((var_8 ? (arr_19 [i_13] [i_14] [i_14] [i_14] [i_13] [i_13] [i_13]) : var_14))))) ? ((var_6 ? var_5 : (arr_9 [i_15] [i_14] [i_13]))) : (((87 >= var_2) * (max(var_12, (arr_4 [i_13])))))));
                }
            }
        }
    }
    #pragma endscop
}
