/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_17 = (arr_5 [i_1] [i_0] [i_0]);
            var_18 &= (((((~(arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1])))) ? (max(var_9, (arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1]))) : (((arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1]) : (arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1])))));
            arr_6 [i_0] [i_0] [15] = (((((1 >> (var_10 - 2782075680)))) + ((~(((var_2 >= (arr_0 [i_0]))))))));
            arr_7 [i_0] = -1269617270;
        }

        for (int i_2 = 3; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_19 = (max(((var_15 + (((!(arr_2 [i_2])))))), (~1)));
            var_20 *= (min(((((arr_5 [i_2 - 2] [i_2 - 3] [i_2 + 1]) ? (arr_5 [i_0] [i_2 - 2] [i_2 - 1]) : (arr_5 [i_2] [i_2 + 1] [i_2 - 2])))), (((arr_5 [i_0] [i_2 + 1] [i_2 + 1]) % var_0))));
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_21 = (1 ? var_15 : (arr_10 [i_3 + 2] [i_3 + 1] [i_3 - 1]));

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_22 ^= var_7;
                    var_23 = (!0);
                    var_24 *= (arr_2 [i_3 + 1]);
                }
                arr_18 [i_0] [i_3] [i_4] = (!var_14);
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_27 [i_6] [i_7] [i_6] [i_3] [i_6] = (var_0 ^ var_10);
                            var_25 = (arr_17 [i_0] [i_3 - 2] [i_3 - 2] [i_7]);
                            var_26 ^= (((~var_3) && (arr_5 [i_0] [i_3 + 2] [i_3 - 1])));
                        }
                    }
                }
                arr_28 [i_6] = (+-1);

                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    arr_32 [i_6] [i_9] [i_6] [i_3] [11] [i_9] = (arr_24 [5] [i_3] [i_3] [i_3 - 2] [i_3] [i_3]);
                    var_27 = (8 ? 48976 : -66608643);
                    arr_33 [i_6] [i_0] [i_0] = ((-(arr_5 [i_3 - 1] [i_9 + 3] [i_0])));
                }
                for (int i_10 = 3; i_10 < 22;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        var_28 = var_9;
                        var_29 = (max(var_29, 0));
                        var_30 = (min(var_30, ((((((arr_34 [i_10] [i_10] [i_10] [i_10 - 1] [i_10 - 1] [i_10]) == var_6)) ? var_5 : (-9223372036854775807 - 1))))));
                        arr_38 [i_0] [i_0] [i_3] [i_6] [i_0] [i_11] = (arr_0 [i_10 - 1]);
                    }

                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        arr_43 [i_0] [i_3] [i_6] [i_6] [i_10] [i_12] = var_11;
                        arr_44 [i_0] [i_6] = (-(arr_3 [i_3 + 1]));
                    }
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        arr_48 [i_6] [12] [i_6] = ((var_6 ? var_3 : (((arr_30 [i_13] [i_6] [i_0]) ? 1 : var_2))));
                        arr_49 [i_13] [i_10] [i_6] [i_6] [i_6] [i_0] [i_0] = (((arr_35 [i_6] [i_3 + 1] [i_6] [i_10]) + var_2));
                    }
                    for (int i_14 = 1; i_14 < 21;i_14 += 1)
                    {
                        arr_53 [i_0] [i_0] [i_3] [i_6] [8] [6] [i_14 + 1] &= ((!(arr_1 [i_10 - 1])));
                        var_31 = (max(var_31, 48976));
                        arr_54 [22] [i_3 + 1] [i_6] [i_10 - 1] [i_14] &= (((7087610257512998763 / var_15) <= ((~(arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    }
                    var_32 ^= ((-100 - (arr_42 [i_3 + 2] [10])));
                }
            }
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {

                for (int i_16 = 1; i_16 < 22;i_16 += 1)
                {
                    var_33 &= var_3;
                    var_34 *= 16534;
                    arr_60 [i_16] [i_15] [22] [i_16] = var_12;
                }
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    var_35 = ((+(((arr_36 [i_0] [i_15] [i_0] [i_0] [i_0]) ? 0 : var_15))));
                    var_36 = (((arr_12 [0] [i_3] [i_3 - 1] [i_17]) >= var_10));
                }
                arr_64 [i_3] [i_3] [i_0] = (~var_13);
            }
        }
        for (int i_18 = 0; i_18 < 0;i_18 += 1)
        {
            var_37 = ((var_3 >= (arr_55 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1])));
            arr_68 [3] [i_18 + 1] = var_5;
        }
        arr_69 [i_0] = ((~(arr_52 [i_0] [0] [i_0] [0] [8])));
    }
    var_38 = (min(((((~-9) < var_5))), ((14367789828566663233 ? var_3 : (min(var_4, var_9))))));
    #pragma endscop
}
