/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_5;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (arr_2 [i_0] [i_0]);
        var_21 = var_16;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_22 |= min(((max((max(var_1, (arr_4 [i_1]))), (((var_10 <= (arr_3 [i_1]))))))), (((var_15 + var_5) - ((var_12 ? (arr_4 [i_1]) : (arr_4 [i_1]))))));
        arr_5 [i_1] [i_1] = var_4;
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            arr_19 [i_5] [i_4] = (((max((arr_18 [i_2] [i_2] [i_6] [i_5] [i_6] [i_6 - 2] [i_6]), (arr_18 [i_2] [i_2] [i_5] [i_2] [i_2] [i_6 - 2] [i_3]))) + (arr_15 [i_2] [i_3] [i_5] [i_5] [i_3])));
                            arr_20 [i_6] [i_6] = (arr_3 [i_2]);
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            arr_24 [i_2] [i_3] [i_4] [i_5] [i_7] = arr_22 [i_7 - 1] [i_7 - 2];
                            var_23 = var_4;
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_24 = (!((((arr_13 [i_2] [i_2] [i_4] [i_5]) - (((var_11 >= (arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
                            arr_27 [i_8] [i_5] [i_3] [i_3] [i_2] |= var_9;
                            arr_28 [i_2] = min((((arr_15 [i_2] [i_3] [i_4] [i_5] [i_8]) > ((var_1 ? var_11 : var_7)))), ((var_9 && (arr_22 [i_2] [i_2]))));
                            var_25 = (max((arr_6 [i_3] [i_3]), (((arr_6 [i_4] [i_5]) ? var_12 : (arr_6 [i_4] [i_8])))));
                        }
                        var_26 = (((arr_11 [i_3]) ? ((var_11 ? (arr_8 [i_5] [i_4]) : (arr_8 [i_2] [i_2]))) : ((((var_7 ? var_0 : var_11))))));
                        arr_29 [i_2] [i_2] [i_2] [i_2] = ((+(((arr_18 [i_2] [i_3] [i_4] [i_4] [i_3] [i_5] [i_5]) ? (arr_18 [i_2] [i_2] [i_3] [i_2] [i_4] [i_4] [i_4]) : (arr_16 [i_2] [i_3] [i_4] [i_2] [i_3])))));
                        arr_30 [i_2] [i_3] [i_2] [i_3] [i_2] = (var_16 ? var_6 : var_10);
                        var_27 = (max((((arr_16 [i_2] [i_3] [i_5] [i_4] [i_2]) | (arr_8 [i_2] [i_3]))), (max((arr_16 [i_2] [i_3] [i_4] [i_5] [i_3]), (arr_8 [i_3] [i_4])))));
                    }
                    var_28 |= ((((min(var_17, var_3))) ? ((~(arr_3 [i_2]))) : (arr_12 [i_2] [i_2] [i_2])));
                    arr_31 [i_2] [i_2] [i_2] = (max(var_0, var_13));
                    var_29 *= (min((arr_11 [i_3]), ((var_2 ? ((((var_6 || (arr_9 [i_3] [i_3] [i_2]))))) : -var_18))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                {
                    var_30 = ((((var_5 >= var_14) & (arr_7 [i_2]))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            {
                                arr_43 [i_10] [i_10] [i_10] [i_10] [i_2] = ((var_13 ? (arr_42 [i_2] [i_9] [i_10] [i_10] [i_12]) : ((var_3 ? (arr_42 [i_2] [i_9] [i_10] [i_10] [i_12]) : ((var_9 ? var_11 : var_15))))));
                                arr_44 [i_12] [i_10] [i_10] [i_9] [i_10] [i_2] = (((max(var_15, var_7))));
                                var_31 = ((var_13 * (arr_42 [i_2] [i_2] [i_2] [i_10] [i_12])));
                            }
                        }
                    }
                    arr_45 [i_2] [i_9] [i_10] [i_10] = (arr_4 [i_9]);
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
    {
        var_32 = var_17;
        var_33 = (arr_11 [i_13]);
        var_34 = (min(((((arr_23 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) ? ((((arr_23 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) <= var_9))) : var_8))), (((arr_41 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) ? (arr_46 [i_13] [i_13]) : -32762))));
    }
    var_35 = ((max(-8225, 14417)));
    #pragma endscop
}
