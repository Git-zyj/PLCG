/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((max(1, (~var_15))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 = (+(((arr_1 [i_1 + 1]) - var_14)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_4] [i_1] [i_2] [i_1] [1] [i_0] = 16295;
                                var_22 = (arr_12 [4] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]);
                                arr_14 [i_0] [i_3] [8] [i_3] [i_4 + 2] &= var_15;
                                var_23 = (((var_10 - var_17) ? 4 : (arr_4 [i_0] [i_1 + 1] [i_2])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_0;

    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        var_25 = (((+-1112234182) > ((((!(arr_12 [i_5] [i_5] [20] [18] [i_5 + 1] [i_5] [i_5])))))));
        var_26 = (min(var_26, (arr_0 [i_5 + 1] [i_5 - 1])));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_20 [i_6] = (max(29, 16158));
        var_27 = (((arr_5 [i_6]) ? (1 <= 49259) : ((var_4 ? (arr_11 [i_6] [i_6] [i_6] [0] [i_6] [i_6]) : (arr_11 [i_6] [8] [i_6] [2] [i_6] [i_6])))));

        for (int i_7 = 3; i_7 < 11;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    {
                        arr_27 [i_8] = (arr_0 [i_9] [i_7 - 3]);
                        var_28 = ((max((arr_10 [i_9] [1] [i_8 + 2] [i_7] [i_6] [i_6]), (arr_10 [i_6] [i_7] [i_8 + 2] [i_8] [i_8] [1]))));
                        var_29 = var_6;
                    }
                }
            }
            var_30 = (max(var_30, ((!(((~((~(arr_2 [i_6]))))))))));
        }
        arr_28 [i_6] = (min(((~(arr_7 [i_6] [i_6] [i_6] [i_6]))), (~16305)));
    }

    for (int i_10 = 1; i_10 < 19;i_10 += 1)
    {
        arr_32 [i_10] [i_10] = ((+((-(min((arr_6 [i_10] [i_10] [i_10]), (arr_29 [i_10])))))));
        var_31 = ((((!(((var_4 ? var_19 : (arr_29 [i_10])))))) ? (max(((var_4 ? var_15 : (arr_29 [i_10]))), (arr_10 [i_10] [i_10 + 1] [i_10] [i_10 + 1] [i_10 + 1] [i_10 - 1]))) : -16439));
    }
    for (int i_11 = 1; i_11 < 12;i_11 += 1)
    {
        arr_37 [13] = var_18;
        arr_38 [1] [1] = var_6;

        for (int i_12 = 2; i_12 < 10;i_12 += 1)
        {
            arr_41 [i_12 + 1] = (((min(((((arr_1 [1]) ? -1997904273 : 224))), var_0)) / var_7));
            arr_42 [i_11] [i_11] [i_12] &= (((((((!(arr_11 [i_11 + 2] [1] [i_11 + 1] [i_11] [i_11] [1]))) && 105))) <= (min((arr_35 [i_11]), (arr_5 [i_12])))));
            var_32 *= (min((((arr_4 [i_11 - 1] [i_12 + 4] [i_12 + 2]) % (arr_4 [i_11 + 2] [i_12 - 1] [i_12 + 1]))), (((((min((arr_35 [6]), var_6))) << ((((min(var_18, 10487))) - 10459)))))));
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            arr_47 [i_13] = ((-(arr_36 [i_11 - 1] [i_11])));
            arr_48 [i_13] [i_13] [i_13] = ((((1722911268 ? (-9223372036854775807 - 1) : (-127 - 1))) + 14));
        }
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            arr_53 [i_14] [i_14] [i_11 - 1] = (max(((((0 ? 29 : var_16)) & (arr_43 [i_11] [i_14]))), 1684010205));
            var_33 = -var_16;
        }
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            var_34 = var_16;
            var_35 = (min(var_35, var_1));

            for (int i_16 = 4; i_16 < 12;i_16 += 1)
            {
                arr_60 [i_15] = ((((var_9 ? (arr_1 [i_15]) : (arr_59 [i_16 + 2]))) + (((arr_10 [i_16] [i_16] [i_16 - 3] [i_16 - 4] [i_16 + 1] [i_16 - 4]) ? (arr_2 [i_16]) : (arr_17 [i_11 + 1] [i_16 - 1])))));
                var_36 = (min(var_36, ((((var_4 < var_6) | (((~(arr_59 [i_16 - 4])))))))));
                arr_61 [i_15] [i_16 + 1] [i_16] [i_16] = (max(((min((arr_35 [i_11 - 1]), var_16))), (((arr_35 [i_11 - 1]) ? (arr_35 [i_11 + 2]) : var_9))));
                arr_62 [i_11] [i_15] [i_16] = (arr_59 [i_16 - 1]);
                var_37 = ((var_3 ? ((var_3 % (!0))) : var_13));
            }
            arr_63 [4] [i_11] [i_11] &= (!-105);
            arr_64 [i_11] |= (((min(var_14, var_0)) * (arr_46 [i_11] [i_15] [i_11])));
        }
        arr_65 [3] = ((max((arr_15 [i_11 + 1]), var_1)));
    }
    #pragma endscop
}
