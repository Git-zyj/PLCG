/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 ^= var_0;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_12 = ((((~(arr_0 [i_0 + 2] [i_0]))) | (arr_0 [i_0 - 1] [i_0 - 1])));
        arr_2 [i_0] = (+(max((var_5 >= var_4), (arr_1 [i_0 + 1]))));
        arr_3 [i_0] = ((~((~(~var_9)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_13 = ((~(min((max(45, 3547932722)), (arr_4 [i_1])))));
        var_14 = ((((-(arr_4 [i_1]))) << (((((((arr_4 [i_1]) ? ((-(arr_5 [i_1] [i_1]))) : -var_1)) + 19209)) - 9))));
        var_15 = (min(var_15, (arr_4 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
            {
                arr_16 [i_4] [i_3] [i_4] = (arr_12 [i_3] [i_3] [i_2] [i_2]);
                var_16 = (((-(arr_10 [i_2]))));
            }
            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
            {
                var_17 *= (arr_9 [i_2] [i_3] [i_5]);
                arr_19 [i_2] [i_2] [i_2] [i_2] = (arr_5 [i_5] [i_3]);
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                arr_23 [i_6] = ((((((arr_11 [i_3] [i_2]) - (arr_14 [i_6])))) ? ((var_8 ? (arr_22 [i_2]) : (arr_22 [i_2]))) : ((~(arr_15 [i_2] [i_3] [i_6])))));

                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    var_18 = (((arr_24 [i_7 - 1] [i_6] [i_2]) & (arr_24 [i_2] [i_6] [i_7 + 1])));
                    arr_28 [i_2] [i_3] [i_2] [i_6] = ((!(arr_6 [2] [i_7 - 1])));
                    var_19 = (!-1173567807);
                    arr_29 [i_6] = ((~(arr_12 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])));
                }
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    var_20 = (min(var_20, ((((arr_30 [i_2] [i_2] [i_8] [i_8]) ? -1882804205 : 9492915083687014600)))));
                    arr_32 [i_2] [i_2] [i_2] [i_6] [11] [i_2] = var_6;
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    arr_35 [i_6] [i_3] = arr_5 [i_2] [i_3];
                    arr_36 [i_2] [i_2] |= (((arr_14 [i_2]) / (arr_33 [14] [i_3] [i_3] [i_2])));
                }
            }
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                var_21 = (min(var_21, var_0));
                arr_39 [i_2] [i_2] [i_2] [i_2] = ((var_2 * (arr_21 [i_3] [i_2])));
                arr_40 [i_2] [i_2] [i_3] [i_10] = (((arr_13 [i_10] [i_2] [i_2]) ? (arr_13 [i_10] [i_3] [i_2]) : (arr_13 [i_10] [i_10] [i_10])));
            }
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 14;i_13 += 1)
                    {
                        {
                            arr_49 [i_2] [i_3] [i_12] [i_3] [i_13] [i_3] = (~-var_2);
                            var_22 = arr_20 [i_13 + 4] [i_3];
                            var_23 ^= ((~(((arr_10 [i_12]) ? var_1 : var_8))));
                        }
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            var_24 = (min(var_24, (~var_6)));
            arr_52 [i_2] [i_2] = (arr_33 [i_14] [i_14] [i_14] [i_14]);
            arr_53 [i_2] = var_1;
        }
        arr_54 [i_2] = (((arr_22 [i_2]) ? var_0 : (arr_47 [i_2] [i_2] [i_2] [i_2] [i_2])));
        var_25 ^= (~(((arr_4 [i_2]) ? (arr_26 [i_2] [i_2] [i_2] [i_2]) : (arr_44 [i_2] [9] [9] [9]))));
        arr_55 [i_2] [i_2] = var_8;
    }
    var_26 = -var_1;
    #pragma endscop
}
