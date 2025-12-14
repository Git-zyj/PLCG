/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_11 *= ((-((((var_5 ? 1 : 1)) - (min(-1, (arr_2 [i_0] [i_0 + 1])))))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_12 += (max(((((((arr_4 [i_0]) ? (arr_0 [i_1]) : 8544777623853638999))) ? ((-8544777623853638999 ? (arr_1 [i_0] [i_1]) : (arr_4 [5]))) : (((min(49, -1088)))))), ((min((arr_0 [i_1]), var_10)))));
            var_13 *= 351673276;
            var_14 += var_7;
        }
        var_15 *= ((((arr_5 [i_0 + 1]) ? var_5 : (arr_5 [i_0]))));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        var_16 += (arr_8 [i_2 - 1]);
        var_17 -= (((((((var_7 ? 88581083 : (arr_7 [i_2] [6])))) ? (min((arr_7 [i_2] [20]), var_4)) : (arr_9 [i_2 + 1])))) ? (((-32767 % (((arr_8 [i_2 + 3]) ? 47 : var_1))))) : 474338429);
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {

        for (int i_4 = 4; i_4 < 22;i_4 += 1)
        {
            arr_14 [i_4 - 4] [i_4 - 3] [i_3] |= -2147483647;
            var_18 = (min(-8544777623853638999, (((0 ? -12 : -73)))));
            var_19 = (max(var_19, (arr_13 [1])));
            arr_15 [i_4] |= 8286871823458766611;
            var_20 = (((((((((arr_13 [i_3]) ? var_5 : var_9))) ? (arr_11 [i_4 - 3] [i_3 + 1]) : (((min((arr_10 [i_3]), -76))))))) ? ((35 ? (arr_12 [i_4 + 1] [i_4 + 1]) : var_9)) : (((((4075172381 - var_4) > ((((!(arr_7 [i_4] [i_3 - 1])))))))))));
        }
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        var_21 -= ((44 | (arr_22 [i_7 + 3] [i_7 + 3] [i_7 + 3] [i_7 - 1])));
                        var_22 |= 30;
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_23 += (((var_9 ? (((((arr_26 [i_3] [22] [i_5] [i_6] [i_8] [i_8]) == -47)))) : (arr_25 [i_3 + 1] [7] [i_6] [i_8]))));

                        for (int i_9 = 3; i_9 < 20;i_9 += 1)
                        {
                            arr_29 [i_9] [i_8] |= (min(((~(arr_16 [i_8]))), ((~(arr_16 [i_9 + 2])))));
                            arr_30 [i_5 - 2] |= var_4;
                            arr_31 [i_9] [i_8] [i_6] [20] [i_5] [i_3 + 1] [i_3 + 1] |= (arr_28 [i_8] [i_8]);
                            var_24 = (min(var_24, 0));
                            var_25 = var_9;
                        }
                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 22;i_10 += 1)
                        {
                            var_26 += (((arr_35 [i_10] [i_3 + 2] [i_6] [i_5] [i_5 - 2] [i_5] [i_3 + 2]) ? -32761 : ((384818964 ? (arr_9 [i_8]) : (arr_21 [i_5] [i_5])))));
                            arr_36 [12] [12] [20] [i_8] [i_10 + 1] |= ((((-(arr_11 [i_8] [i_3]))) >> (((((arr_26 [i_3] [10] [i_5] [i_6] [i_8] [i_10]) ? var_9 : 10)) - 7720819938701675256))));
                            var_27 = (min(var_27, (!41322)));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            var_28 = (max(var_28, (arr_7 [i_6] [23])));
                            var_29 *= 10;
                        }
                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 22;i_12 += 1)
                        {
                            var_30 += (((((arr_17 [i_3 + 3]) + 2147483647)) << var_0));
                            var_31 = 13740793607490971342;
                            var_32 -= var_10;
                        }
                        var_33 = (max(var_33, (arr_8 [i_5])));
                    }
                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 20;i_13 += 1)
                    {
                        var_34 |= 9701259931678106661;
                        var_35 = (min(var_35, (((41072 ? var_6 : (arr_37 [i_3] [i_5] [i_5] [i_6] [i_13]))))));
                        var_36 += ((var_2 ? 24463 : (var_9 == 65437)));
                        var_37 += (arr_22 [i_13] [i_6] [i_5] [i_3 + 3]);
                        var_38 -= (var_0 ^ 24927);
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            {
                                var_39 = (min(var_39, ((((!var_8) ? (arr_9 [i_14]) : ((((((min(var_0, 24801))) <= 0)))))))));
                                var_40 *= ((-(((arr_35 [i_3 + 3] [i_5 - 2] [i_5] [i_6] [i_14] [i_14] [1]) ? 2522140436686474420 : (arr_35 [i_3] [i_3] [i_6] [i_14] [i_6] [i_15] [i_15])))));
                                var_41 += var_7;
                                var_42 *= (arr_49 [i_14] [i_6] [i_6] [i_5 - 2] [i_5 - 1] [i_3] [i_3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_43 = (min(var_43, ((((((!255) ? var_7 : (~505683692))) - var_7)))));
    var_44 *= (((((3357066637023187847 - (((41061 ? 32767 : var_0)))))) ? ((var_4 ? var_0 : var_2)) : var_0));
    #pragma endscop
}
