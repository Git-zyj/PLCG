/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 += (arr_2 [i_0]);

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_1] [i_0] [i_0] |= ((var_8 ? (-1 && 26) : var_0));

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_14 = ((arr_9 [i_0]) & var_10);
                            var_15 |= (((arr_5 [i_0] [i_0] [i_4]) < (arr_0 [i_4])));
                            var_16 &= var_1;
                        }
                    }
                }
                arr_15 [i_2] [10] = (5820165991746055187 && var_0);
                var_17 = (arr_11 [13] [i_1] [i_0] [i_0]);
            }
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {

                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    var_18 = ((!(arr_4 [i_0] [i_5 - 1])));
                    var_19 = 0;
                    var_20 -= ((~(arr_20 [i_0] [i_5 - 1] [i_5 - 1] [i_5])));
                    arr_23 [8] [i_5] [9] [i_6] = ((~(arr_4 [i_5 + 1] [i_0])));
                }
                var_21 += (~-32363);
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_22 = (arr_5 [i_7] [i_1] [i_0]);
                        arr_29 [4] [i_8] [i_7] [4] = var_10;
                    }
                }
            }

            for (int i_9 = 3; i_9 < 13;i_9 += 1)
            {
                var_23 = (min(var_23, var_4));
                arr_32 [i_0] [i_0] [i_0] = var_0;
                var_24 = (max(var_24, var_3));
            }
        }
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            var_25 = (min(var_25, (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])));
            var_26 = (min(var_26, ((((arr_12 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_20 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10 + 1]))))));
            var_27 = (min(var_27, (arr_34 [i_0] [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 12;i_12 += 1)
                {
                    {

                        for (int i_13 = 1; i_13 < 13;i_13 += 1)
                        {
                            arr_42 [0] [i_10 - 1] [i_11] [i_12] [i_13] = (arr_41 [i_0] [i_10] [i_11] [i_10] [1] [i_13]);
                            var_28 -= -var_8;
                            var_29 = ((var_12 ? (arr_16 [i_11] [i_11 + 2] [i_11 + 2] [i_12 + 2]) : 5820165991746055187));
                        }
                        for (int i_14 = 2; i_14 < 11;i_14 += 1)
                        {
                            var_30 = ((~(arr_36 [i_10 - 1] [i_10] [i_11 + 3] [i_12])));
                            var_31 = (min(var_31, (((((!(arr_25 [i_0] [i_0] [i_0]))))))));
                            var_32 *= ((32353 ? (arr_39 [i_11] [i_12 + 2]) : (arr_1 [i_12] [i_10 - 1])));
                        }
                        arr_46 [i_10] [i_12] = (((~(arr_20 [i_0] [i_10] [i_0] [i_12]))));
                    }
                }
            }
        }
        var_33 = (arr_21 [i_0]);
    }
    for (int i_15 = 0; i_15 < 25;i_15 += 1)
    {
        var_34 |= 1303883620;
        var_35 = (max((arr_47 [i_15]), 15548720210727639817));
    }
    /* vectorizable */
    for (int i_16 = 3; i_16 < 20;i_16 += 1)
    {
        var_36 += (((arr_51 [i_16]) ? var_11 : (arr_48 [i_16 - 2])));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 21;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 18;i_18 += 1)
            {
                {
                    var_37 = (min(var_37, (arr_56 [i_16 - 1] [i_18] [i_18 - 1] [i_18])));
                    var_38 = (min(var_38, ((((arr_48 [i_16]) ? 28341 : (arr_58 [i_17] [i_17]))))));
                    var_39 &= (~var_12);
                }
            }
        }
        var_40 = (max(var_40, 740081426));
    }
    /* vectorizable */
    for (int i_19 = 3; i_19 < 21;i_19 += 1)
    {
        /* LoopNest 3 */
        for (int i_20 = 3; i_20 < 19;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 19;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 22;i_22 += 1)
                {
                    {
                        var_41 = (min(var_41, (arr_60 [i_19] [i_21])));
                        arr_70 [i_22] [i_21] [i_22] = 50023;
                    }
                }
            }
        }
        var_42 -= (((var_8 != -135016663) * ((var_8 / (arr_62 [i_19])))));
        var_43 = (min(var_43, ((((var_7 ? (arr_60 [i_19] [i_19]) : var_12))))));
        var_44 += 2147483647;
    }
    var_45 = (max((!var_10), -187));
    var_46 &= max(var_0, var_5);
    var_47 += var_6;
    var_48 &= (((!11570779551831047267) ? var_7 : 169));
    #pragma endscop
}
