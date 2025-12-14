/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_7));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 14;i_1 += 1) /* same iter space */
        {
            var_20 *= ((((((arr_4 [i_0] [i_1 + 1] [i_1 - 1]) ? (arr_2 [i_1 - 1]) : (~0)))) ? var_12 : (((max(var_2, var_18))))));
            var_21 = (((((1 ? var_8 : (arr_4 [i_1] [i_1 - 4] [i_1 - 4])))) ? var_9 : (max((arr_4 [i_0] [i_1 + 1] [i_1 - 2]), var_14))));
            var_22 = (min(var_22, 1));
            var_23 = (max(var_23, (arr_1 [12])));
        }
        for (int i_2 = 4; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_24 = ((!((max(1841478694, 1)))));
            arr_7 [i_0] = (max((((arr_0 [i_2 - 4] [i_2 - 4]) ? (arr_0 [i_2 - 4] [i_2 - 2]) : var_11)), ((~(arr_0 [i_2 + 1] [i_2 + 1])))));
            var_25 = ((!(((~(var_12 * var_8))))));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    {
                        var_26 += var_2;
                        var_27 *= (max((max((arr_2 [i_2 + 1]), (arr_9 [i_0] [i_2] [i_3 - 2] [i_4]))), (arr_10 [i_0] [i_2] [2] [i_0])));
                        var_28 = (min(var_28, (((~(~85))))));
                        var_29 += ((((max(var_18, (arr_4 [i_0] [i_2] [i_0])))) ? (max(var_11, (arr_5 [i_2 - 1] [4]))) : (~-88)));
                    }
                }
            }
        }
        for (int i_5 = 4; i_5 < 14;i_5 += 1) /* same iter space */
        {
            var_30 = ((2666530710 ? (((-((-(arr_13 [i_0] [1])))))) : ((var_8 ? (max(var_3, var_4)) : 1923996303))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        {
                            arr_24 [i_0] [i_5] [i_6] [i_6] [3] [i_8 - 1] [i_6] = ((!(arr_3 [i_8])));
                            var_31 = (min(var_31, (((((((-2147483647 - 1) ? (max(var_11, (arr_12 [12]))) : 131))) ? 2064477590793045343 : ((((((var_2 ? (arr_16 [i_0] [i_0] [i_7]) : 3352494589))) ? (((94 ? (arr_14 [i_5] [i_7] [i_7]) : (arr_12 [i_6])))) : (max(-54, var_15))))))))));
                        }
                    }
                }
            }
        }
        var_32 = -var_13;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_27 [i_9] = ((~(arr_26 [i_9] [i_9])));
        var_33 = (max(17759757937848924263, 0));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 20;i_10 += 1)
    {

        for (int i_11 = 2; i_11 < 20;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                {
                    var_34 = ((!(((~(arr_39 [i_10] [i_10]))))));
                    var_35 = var_9;
                    var_36 = (((~var_6) ? 1 : 17));
                    arr_43 [i_10] [i_11 + 1] [i_10] [i_13] = (((arr_26 [i_10 - 1] [i_10 + 1]) ? (arr_26 [i_10 - 1] [i_10 + 1]) : (arr_26 [i_10 + 1] [i_10 + 1])));
                    arr_44 [i_10] [i_11] [i_10] [i_10] [i_13] = (~var_3);
                }
                for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
                {
                    arr_48 [i_10] [i_11 - 2] [i_10] [i_12] [i_10] [i_10] = ((((((arr_46 [i_10 + 1] [i_11 - 2] [i_11 - 1] [i_10] [i_14] [i_14]) ? (arr_47 [i_10] [i_10] [i_12] [i_10]) : var_0))) ? ((((!(arr_45 [1] [i_11] [i_12] [i_14]))))) : ((var_11 ? (arr_25 [i_11] [i_12]) : (arr_42 [i_10] [i_10] [i_12] [i_14])))));
                    var_37 -= (arr_41 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_11 + 1] [8]);
                }
                arr_49 [i_10] [i_12] [i_12] [i_12] |= (arr_28 [i_12]);
                arr_50 [i_10] = var_8;
            }
            var_38 = 1;
        }
        for (int i_15 = 3; i_15 < 19;i_15 += 1)
        {
            arr_54 [1] [i_10 - 1] [i_10] = ((2320344414 ? -1 : (arr_30 [i_10])));
            var_39 = 0;
            var_40 = (((var_12 ? (arr_46 [i_10 + 1] [i_10] [i_10] [i_10] [i_15] [i_10]) : 78)));
            /* LoopNest 2 */
            for (int i_16 = 3; i_16 < 19;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 1;i_17 += 1)
                {
                    {
                        var_41 = (((((var_18 ? var_2 : (arr_33 [i_10])))) ? var_18 : var_17));
                        arr_60 [i_10 - 1] [i_10] [i_10] [i_16] [i_17 - 1] = (((~var_9) <= (((-(arr_41 [i_10] [i_15 - 2] [i_15 - 2] [i_15 - 2] [1]))))));

                        for (int i_18 = 2; i_18 < 19;i_18 += 1)
                        {
                            var_42 = (((!1) ? -var_16 : (arr_37 [i_10 - 1] [i_10 - 1] [i_10])));
                            arr_64 [i_10] [i_15] [20] [20] [i_10] = (arr_58 [i_16 + 1] [i_17 - 1]);
                        }
                        for (int i_19 = 0; i_19 < 21;i_19 += 1)
                        {
                            arr_67 [i_16] [i_17 - 1] [i_10] = (arr_62 [i_15] [i_10]);
                            var_43 = -66;
                        }
                    }
                }
            }
        }
        arr_68 [i_10] = -var_3;
        var_44 = (max(var_44, (arr_57 [i_10] [i_10] [i_10 + 1] [7])));
    }
    for (int i_20 = 0; i_20 < 1;i_20 += 1)
    {
        arr_71 [i_20] = ((~((249 ? -44 : 0))));
        var_45 = (!(((-135386935 ? (arr_69 [i_20]) : 16382266482916506273))));
        var_46 = (min(var_46, ((max(38, 4294967293)))));
        var_47 = var_11;
        arr_72 [i_20] = (((~(arr_69 [i_20]))));
    }
    #pragma endscop
}
