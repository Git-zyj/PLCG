/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_0);
    var_12 = -var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_13 = (max(var_13, (((!(arr_6 [1]))))));
            var_14 = (max(var_14, (((-(((var_3 >= (-9223372036854775807 - 1)))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_15 = var_1;

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_16 = (((arr_11 [i_0] [i_0] [i_2] [i_3] [i_4]) ? ((var_6 ? (arr_6 [i_0]) : 7498521022029877664)) : (arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_0])));
                            arr_17 [i_0] [i_0] [i_2] [i_3] [1] = (((((var_9 ? var_2 : (arr_7 [i_0] [i_1] [i_1] [i_0])))) ? (arr_2 [i_1] [i_2]) : (arr_14 [i_0] [i_0] [i_2])));
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_17 = 17800;
                            var_18 = ((((var_3 >= (arr_2 [i_0] [i_0]))) ? ((var_2 % (arr_3 [i_0]))) : ((-(arr_9 [i_0] [i_3] [i_0])))));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_23 [i_0] [12] [i_2] [i_3] [12] [i_1] [i_0] = (-10709 < var_2);
                            var_19 -= (((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_16 [i_6] [i_3] [i_2] [i_2] [i_0] [i_0] [i_0]) : var_2));
                            var_20 = (arr_12 [i_0] [i_1] [i_0] [i_6]);
                            var_21 = (max(var_21, ((((var_8 == var_1) + (arr_11 [i_6] [1] [i_2] [1] [i_0]))))));
                            var_22 = var_0;
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_23 = (arr_21 [i_0] [i_1] [i_2] [i_0] [i_7]);
                            arr_26 [i_0] [i_2] [i_3] [i_0] = (((var_1 ? (arr_16 [i_0] [i_1] [i_2] [12] [i_7] [i_7] [i_3]) : 2937)));
                            var_24 = (max(var_24, (((-(arr_22 [i_7] [i_7] [i_2] [i_7] [i_0]))))));
                            var_25 = (!var_6);
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
        {
            var_26 = -17382;
            arr_29 [i_0] [i_8] [i_0] = ((-(max((min((arr_10 [i_0] [i_0] [i_0] [i_8] [i_8] [i_8]), var_9)), (((arr_3 [i_0]) ? (arr_2 [i_0] [i_0]) : 32768))))));
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            arr_32 [i_0] = ((((((-6261 < (arr_24 [i_0] [i_9])))) < (var_10 && var_4))));
            var_27 = (min(var_27, (min(((((((arr_18 [i_0] [i_9] [2] [12] [i_9]) ? -3303172345777795840 : (arr_10 [i_0] [i_0] [i_9] [i_0] [i_0] [i_0])))) ? var_9 : ((18156 ? (arr_15 [i_0] [i_9] [10]) : (arr_10 [i_9] [i_9] [i_9] [i_9] [16] [12]))))), var_9))));
        }
        var_28 = ((((((7389 > (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]))))) * (arr_27 [i_0])));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                {
                    arr_38 [i_0] [i_10] [i_0] = (~var_2);
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            {
                                var_29 -= var_7;
                                arr_44 [3] [1] [i_0] [i_0] [2] [3] = (min(((((((arr_28 [i_10] [i_0]) ? (arr_8 [i_13] [i_11] [i_11] [i_0]) : (arr_14 [i_0] [2] [11])))) ^ (max((arr_36 [i_10] [i_10] [i_13]), (arr_11 [i_0] [i_0] [i_0] [12] [i_0]))))), (((((max(var_6, var_2))) & -32767)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
