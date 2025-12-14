/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = min((((max(var_3, (arr_0 [i_0]))) / (arr_2 [i_1] [i_2]))), (max((arr_1 [i_0]), var_14)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_19 = (min(var_19, ((var_14 ? (arr_11 [i_0]) : (arr_11 [i_2])))));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            var_20 = ((((var_7 ? var_9 : var_17)) <= ((var_0 ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_11 [i_3])))));
                            arr_16 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4] [i_4] = (1651320392 ? ((var_4 ? 699501733 : (arr_11 [i_1]))) : (arr_15 [9]));
                            arr_17 [i_0] [i_3] [i_2] [i_3] [i_2] [i_2] = (var_3 ? var_6 : (((arr_14 [8] [8] [i_2]) ? (arr_5 [10] [i_2] [i_2] [i_2]) : (arr_1 [i_4]))));
                            var_21 = (min(var_21, (((((1984096905 / (arr_12 [i_0] [i_0] [3] [i_3] [i_4]))) >= (arr_13 [i_0] [i_1] [i_2] [i_3] [i_3]))))));
                            var_22 = (max(var_22, (arr_8 [i_4])));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            arr_22 [7] [i_1] [i_2] [i_3] [i_5] = (-((((arr_11 [i_0]) || var_8))));
                            var_23 = (max(var_23, (((arr_12 [i_0] [i_0] [i_2] [i_3] [i_5]) ? ((var_7 ? -139204972 : (arr_5 [i_0] [i_0] [i_2] [i_3]))) : (arr_6 [i_5] [i_3] [i_0])))));
                            arr_23 [i_1] [3] [i_1] [i_1] [i_1] [i_1] [i_1] = ((arr_11 [i_5]) ? (arr_11 [i_2]) : (arr_11 [i_5]));
                            arr_24 [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_0] [i_0] [i_1] [i_2] [i_0] [i_5]);
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_5] = ((((-(arr_8 [i_3])))) ? (arr_0 [i_0]) : (var_1 < 998543742));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_24 = ((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) + 2147483647)) << (((((arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_6]) + 724697014)) - 12)));
                            arr_29 [i_0] [i_1] = ((arr_8 [i_0]) ^ (arr_2 [i_0] [11]));
                            arr_30 [i_0] [i_1] [i_2] [i_3] [5] [i_6] [i_1] = (arr_13 [1] [i_1] [i_2] [i_3] [i_6]);
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2] = ((((arr_10 [i_0] [i_1] [i_2] [i_0] [i_3] [i_6]) ? (arr_7 [i_2]) : var_4)) >> ((((~(arr_11 [i_2]))) + 1348757751)));
                            var_25 = (min(var_25, var_1));
                        }
                    }
                    for (int i_7 = 3; i_7 < 10;i_7 += 1)
                    {
                        arr_35 [i_0] [i_2] [i_1] [i_0] = ((((-((-(arr_18 [i_0] [i_0] [i_2] [i_2] [i_7 + 1]))))) >= (!var_4)));
                        var_26 = arr_26 [i_0] [i_0] [i_7] [i_7] [i_0] [i_7] [i_2];
                    }
                    arr_36 [i_0] [i_1] [i_2] &= max((((!-1984096906) ? (arr_21 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2]) : (var_7 % var_9))), (max((arr_15 [i_2]), ((~(arr_1 [4]))))));

                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        arr_39 [i_0] [i_0] [i_2] [i_8] [i_1] [i_8] = ((!((max((var_17 < var_1), var_16)))));
                        var_27 = (min(var_27, (max(var_3, (min((arr_32 [i_0] [i_1] [i_2] [i_8] [i_1]), (arr_4 [i_0])))))));
                    }
                    arr_40 [i_0] [i_1] [i_2] = (arr_34 [i_0] [4] [i_2] [0] [i_2]);
                }
            }
        }
        arr_41 [11] &= ((((arr_14 [1] [i_0] [i_0]) ? ((var_2 ? var_3 : var_1)) : (max((arr_28 [i_0]), (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (int i_9 = 2; i_9 < 18;i_9 += 1)
    {
        var_28 = max(((-1021620827 ? (((arr_43 [i_9] [i_9]) ? (arr_43 [i_9] [i_9 + 3]) : (arr_44 [i_9 - 2] [5]))) : ((((arr_45 [i_9] [i_9]) <= (arr_45 [i_9] [i_9])))))), ((+(max((arr_42 [i_9 + 2]), (arr_45 [i_9] [i_9]))))));
        arr_46 [i_9] = -1422600426;
    }
    var_29 -= (-var_12 >= var_4);
    var_30 -= var_4;
    #pragma endscop
}
