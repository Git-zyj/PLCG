/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = ((-23422 ? 3869187748 : (!4102990302)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_12 |= (arr_1 [i_0] [i_3]);
                                arr_14 [i_1] = (((arr_5 [i_0] [i_1] [i_3] [i_4]) / (min((arr_10 [1] [i_3] [i_1] [i_1] [i_1 + 1] [i_0]), (((arr_8 [i_0] [i_1 - 1] [i_0] [i_1]) / (arr_1 [i_1] [i_1])))))));
                                var_13 = ((((((((arr_7 [i_0] [i_1] [i_1] [i_0]) | (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (max(var_4, var_7)) : (var_4 / var_1)))) ? (arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]) : (arr_12 [i_0] [i_1]));
                                var_14 = (min(((max(1, 23422))), ((+(min((arr_2 [i_4]), -374279176))))));
                            }
                        }
                    }
                    var_15 = (min(((var_9 ? (arr_10 [i_1 + 1] [i_0] [i_1] [1] [i_0] [i_0]) : (arr_4 [i_1 + 1] [i_1]))), (((arr_11 [i_1 + 1] [i_1 - 1] [i_2] [i_0] [i_2]) / (arr_10 [i_1 + 1] [i_1] [i_1] [10] [i_1] [i_0])))));
                    var_16 |= (arr_13 [7] [i_2] [i_1] [i_0] [i_0]);
                }
            }
        }
        var_17 = (max(var_17, ((max(58720256, -32762)))));
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_18 = (min(var_18, (arr_3 [i_5] [i_5])));
        var_19 &= (3869187748 == 8256);
        var_20 |= (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]);
    }
    for (int i_6 = 2; i_6 < 12;i_6 += 1)
    {
        arr_20 [2] = var_5;

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_21 = (arr_17 [i_7]);
            var_22 = (arr_4 [i_6] [i_6]);
            arr_24 [i_6 + 1] [i_7] &= (max(((864264656 ? 16646144 : 19)), (((var_8 ? var_2 : (arr_18 [i_6]))))));
        }
        var_23 = (max((!48658), (min((((arr_5 [i_6 + 1] [i_6 + 1] [i_6 + 1] [6]) ? (arr_11 [i_6] [i_6 - 1] [i_6] [i_6] [i_6]) : var_0)), ((((arr_4 [i_6] [i_6]) >= (arr_1 [i_6] [i_6 - 1]))))))));
        arr_25 [i_6] = ((!(arr_22 [12] [i_6] [i_6])));
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        arr_28 [i_8] = ((((min(123, 1606249374))) != (max((max(58720256, 9223372036854775807)), (((-89 - (arr_26 [11]))))))));

        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            var_24 = ((((min((arr_30 [i_8] [i_9]), (arr_30 [i_8] [i_9])))) ? (((var_7 * (arr_27 [i_8])))) : (arr_31 [i_8] [i_8])));
            var_25 |= (max((arr_29 [i_9]), ((-23423 ? (0 / 7142403901482233632) : 3701828073992810474))));
            var_26 = (min(var_26, (((4294967295 ? 12 : -20)))));
        }
        for (int i_10 = 4; i_10 < 24;i_10 += 1)
        {
            var_27 = ((60 ? var_5 : (min(((max((arr_27 [i_10]), (arr_26 [i_8])))), var_9))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    {
                        var_28 = ((((~(arr_34 [i_8] [i_10 + 1] [i_10] [i_10]))) == ((((max(var_0, (arr_35 [i_8]))))))));
                        var_29 |= ((!(35 ^ -18876)));
                        var_30 = (min(var_30, (((var_6 ? (arr_36 [20]) : ((var_5 ? ((min((arr_35 [i_8]), (arr_34 [i_8] [1] [22] [i_12])))) : (arr_30 [i_10 - 4] [i_10 - 1]))))))));
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            arr_42 [i_8] [i_8] [i_8] |= -3869187779;
            arr_43 [i_8] [i_13] = ((5665679926841815883 == (arr_29 [i_8])));
            var_31 = ((~(16871 + 10780)));
            var_32 = ((((((arr_38 [i_8] [i_13]) | ((var_4 ? (arr_34 [i_8] [i_8] [i_8] [i_13]) : var_0))))) ? (arr_31 [i_8] [i_8]) : (min(((195 ? -1530934228 : 60)), (max(1731626013, var_3))))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            arr_46 [i_8] [i_8] = (arr_37 [i_8] [i_8] [i_8] [i_8]);
            var_33 = (((arr_31 [i_8] [i_14]) ? (arr_33 [i_14]) : (((arr_34 [i_14] [i_8] [i_8] [i_8]) | -21814))));
            arr_47 [i_8] [i_8] = (arr_32 [i_8] [16] [i_8]);

            for (int i_15 = 3; i_15 < 24;i_15 += 1)
            {
                var_34 = 8256;
                var_35 = (((((!(arr_36 [0])))) == var_8));
            }
        }
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 22;i_18 += 1)
                {
                    {
                        var_36 = (max((((arr_58 [i_18 + 2] [i_18 + 2] [i_18 - 1] [i_18 + 2]) - var_3)), ((((arr_34 [i_8] [i_8] [i_8] [i_8]) > ((((arr_54 [i_8] [11] [i_16]) ? var_1 : var_4))))))));
                        var_37 = (max(var_37, (arr_51 [i_8])));
                        arr_59 [i_8] = ((((max((max(var_7, 75)), (arr_53 [i_8])))) ? (arr_34 [i_17] [i_18 - 2] [i_18 - 2] [i_18]) : (arr_31 [i_8] [i_16])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
