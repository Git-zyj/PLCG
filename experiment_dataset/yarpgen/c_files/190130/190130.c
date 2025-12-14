/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_9 << (var_2 - 823965535124271221))) - (min((min(var_6, var_11)), var_9))));
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((((arr_1 [2]) >> ((min((arr_2 [i_1 - 1]), ((max(1, var_1)))))))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = (min(0, (arr_0 [12] [i_0])));
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] = (((arr_13 [i_0]) | (((!((((arr_4 [i_0] [16] [i_2]) & (arr_7 [i_0] [i_3] [i_1] [i_0])))))))));
                            }
                        }
                    }
                    arr_15 [14] [0] [i_2] [i_2] &= 37942;
                    var_19 = (min(var_19, (arr_5 [i_1] [14])));

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_20 *= arr_5 [6] [i_5];
                        var_21 = ((((min(1, 1))) << (27568 - 27546)));
                        var_22 = (min((((!(var_6 < var_3)))), (((((var_14 ? var_11 : (arr_13 [i_0])))) ? 37968 : 3436676833))));
                    }
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        arr_22 [i_0] [1] [i_0] [i_2] = (((~(arr_11 [i_6 + 1]))));
                        var_23 |= (max((min((((!(arr_6 [14] [14] [i_2])))), (((arr_21 [i_6] [i_1 - 1]) << (var_13 - 34347839))))), (((((37951 * (arr_2 [11]))) < var_6)))));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_24 = (arr_7 [i_1] [13] [i_2] [i_0]);
                        var_25 = ((!(var_7 & var_7)));
                        arr_27 [i_7] [i_7] [i_7] &= ((37931 & ((-(!var_2)))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_26 = ((~(arr_25 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                        var_27 |= (arr_29 [i_1 - 1] [i_1] [i_1] [i_1 - 1]);

                        for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
                        {
                            var_28 = var_10;
                            arr_35 [i_0] [i_1] [i_2] [i_2] [i_0] = -var_5;
                            var_29 = (min(var_29, (arr_34 [i_0] [i_1] [14] [i_8] [i_9])));
                            var_30 = 9526496419677852031;
                        }
                        for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
                        {
                            var_31 = (((arr_26 [i_0] [i_1 - 1]) ^ var_13));
                            arr_39 [i_0] = (37944 - 37931);
                            var_32 = (((arr_11 [i_0]) ? (arr_2 [i_0]) : ((((arr_25 [i_0] [i_1] [i_0] [i_8]) ? (arr_18 [i_0] [i_2] [i_8] [i_0]) : var_0)))));
                            arr_40 [i_0] [i_1] [11] [i_0] [i_10] = (arr_2 [i_0]);
                        }
                    }
                }
                arr_41 [i_0] = (min(27568, (arr_29 [i_0] [i_1] [i_1] [i_1])));
            }
        }
    }
    #pragma endscop
}
