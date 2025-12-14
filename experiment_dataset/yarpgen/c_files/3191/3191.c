/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((((min(var_1, var_6))) ? var_4 : ((0 ? var_9 : var_2))))), (min((~var_4), (var_0 || var_8)))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_11 = (((((((184470785 ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0] [i_0 + 1])))) ? var_2 : -581716055)) / var_7));
        arr_3 [i_0] [i_0] = (min(((-3121231327819028564 ? ((var_1 ? 47064 : 5843)) : (65535 < -5473563369648927262))), (arr_2 [i_0 + 1] [i_0])));
        var_12 *= (((((arr_2 [i_0 + 1] [i_0 + 1]) / (arr_2 [i_0 + 1] [i_0 + 1]))) + 6101));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = min(((-(arr_2 [i_1 - 1] [i_1 + 2]))), (((!(arr_2 [i_1 - 1] [i_1 + 1])))));
        var_13 = ((((((arr_1 [1]) ? -var_3 : (arr_4 [i_1 - 1] [i_1 + 2])))) * (((arr_1 [18]) ? var_3 : (arr_1 [2])))));
        var_14 = (arr_4 [i_1] [i_1 + 2]);
        var_15 = ((-(((arr_4 [i_1] [i_1 + 2]) ? (arr_4 [i_1] [i_1 + 2]) : (arr_4 [i_1 + 1] [i_1 + 2])))));
        var_16 = ((((var_5 ? (arr_2 [i_1 + 2] [i_1 + 2]) : (arr_2 [i_1 + 1] [i_1 - 1]))) * (arr_4 [i_1 + 2] [8])));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_17 *= (((arr_4 [i_2] [i_2]) + ((((((var_9 + 2147483647) << (448 - 448)))) ? var_2 : (min(var_1, (arr_7 [4])))))));
        var_18 -= (((((~(((var_5 && (arr_4 [i_2] [i_2 - 1]))))))) <= var_8));
        var_19 &= ((var_2 ? (!var_1) : 0));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_20 = var_2;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_2] [i_4] [7] [i_6] = ((-1 ? 7335 : 511));
                                var_21 *= ((((((var_5 ? (arr_2 [12] [12]) : (arr_4 [i_2] [i_2]))))) ? ((((!((((arr_14 [6] [i_5] [i_6] [i_5] [i_5] [i_5]) / (arr_0 [i_3] [i_6 - 1])))))))) : (arr_10 [i_2] [i_5] [i_4])));
                                arr_21 [i_2] [i_2] [i_4] = (((arr_8 [i_2]) * (((!((min(var_7, 65017))))))));
                                var_22 = ((-(280707318 || 6)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 8;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 9;i_8 += 1)
                        {
                            {
                                var_23 = (max(var_7, var_3));
                                arr_27 [i_4] [9] [i_4] [i_2] [i_3] = ((-28138 ? 43 : 20));
                                arr_28 [i_2] [i_2] [i_4] [i_4] [6] [i_2] [i_2] = var_1;
                                var_24 = (min(-0, ((((arr_13 [i_2 - 1] [i_2 - 1] [i_4]) && ((min((arr_19 [8] [i_3] [i_4] [3] [i_8]), (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_1;
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 24;i_10 += 1)
        {
            {
                var_26 = ((!(((21 | (arr_29 [i_9] [i_9]))))));

                for (int i_11 = 3; i_11 < 24;i_11 += 1)
                {
                    var_27 = (max(18446744073709551612, 0));
                    var_28 = (!-32748);
                    var_29 ^= (arr_34 [20] [i_10] [20] [i_10]);
                    arr_36 [2] [i_10] [i_11] |= (max(var_9, ((((var_1 < (arr_32 [i_11])))))));
                }
            }
        }
    }
    #pragma endscop
}
