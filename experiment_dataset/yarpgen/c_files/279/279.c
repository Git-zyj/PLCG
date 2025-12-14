/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_12));
    var_14 = (((((164 / (8388480 * var_2)))) ? (min(var_1, ((0 ? 0 : 18446744073709551610)))) : ((var_12 / ((var_0 ? var_4 : 18214754097972925280))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_15 = ((var_3 ? ((var_1 ? 4 : var_8)) : ((((arr_1 [i_0]) * var_2)))));
        var_16 = (max(var_16, (~var_10)));

        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_0] = ((var_7 ? var_6 : (arr_0 [i_0])));

            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                var_17 = -36;
                var_18 ^= var_8;
            }
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                arr_14 [i_0] [i_0] [i_0] [i_3] = (!var_8);

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_19 -= -484384000;
                        var_20 = (min(var_20, ((((arr_1 [i_4]) * (arr_2 [i_4] [i_1 - 2]))))));
                        var_21 &= ((0 ? 1 : 17));
                        arr_19 [i_0 + 1] [i_0] [i_5] = ((-(arr_9 [i_1 - 3] [i_0 + 1])));
                    }
                    var_22 = ((!(var_4 || var_1)));
                    var_23 = (((arr_11 [i_0 - 1] [i_3] [i_4]) ? (arr_11 [i_0] [i_0 - 1] [i_0 + 1]) : (arr_11 [i_0 + 1] [i_1 + 1] [5])));
                }
            }
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    var_24 *= (var_3 - var_2);
                    arr_24 [i_0] [i_6] &= 4294967279;

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_25 = (var_11 >= var_11);
                        arr_27 [i_0 + 1] [i_0] [i_0 + 1] [1] [8] [i_0 - 1] [i_0] = (((arr_4 [i_0] [i_0] [i_0 - 1]) ? (arr_4 [i_0] [i_0] [i_0]) : 4294967279));
                    }
                    var_26 = var_10;
                    var_27 = (max(var_27, -178062836));
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    var_28 = (((arr_3 [i_0] [i_0] [i_1 - 3]) + var_9));
                    arr_30 [i_0] [i_6] [i_0] [1] [i_1] [i_0] = var_11;
                    arr_31 [9] [14] [14] [i_0] [i_9] [i_1 + 1] = (arr_26 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_9] [i_9]);
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    var_29 &= ((-(var_12 + -1)));
                    arr_36 [i_0] [i_1 + 1] [i_6] [i_10] = (((~var_9) != 11934590041201427035));
                }
                arr_37 [i_6] [i_6] [i_6] &= 191;
                var_30 *= var_1;
            }
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    var_31 = (((arr_40 [i_12]) * (9 / var_10)));
                    arr_42 [1] [i_0] [i_1] [i_12] [i_12] [i_0 + 1] = (211 && 17);
                    arr_43 [i_0] [i_11] = (var_2 - var_1);
                }
                var_32 = ((var_0 ? ((var_0 ? var_8 : -125)) : (arr_20 [i_0 + 1] [i_1 - 2] [i_1 + 1] [i_1 + 1])));
                arr_44 [i_0] = ((-1 ? (arr_1 [i_0]) : var_3));
            }
        }
    }
    for (int i_13 = 3; i_13 < 11;i_13 += 1)
    {

        /* vectorizable */
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            var_33 ^= (((arr_13 [1] [i_13 - 1] [i_13 - 2]) && (arr_29 [i_13 + 1] [14] [i_13 - 1] [i_13] [i_13 + 2] [i_13 + 1])));

            for (int i_15 = 1; i_15 < 12;i_15 += 1)
            {
                var_34 = 1;
                var_35 |= var_12;
            }
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                var_36 = (max(var_36, (((-(arr_32 [0] [i_16] [i_14] [i_14] [i_14] [i_13]))))));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 11;i_18 += 1)
                    {
                        {
                            arr_62 [i_13] [i_13 + 1] [i_13 - 2] [i_13] [i_13 + 1] [3] [i_16] = (~970107057);
                            arr_63 [i_13 - 2] [i_14] [i_13 - 2] [i_16] [i_16] [i_16] = ((arr_49 [i_17] [i_13 - 1] [i_16]) - var_0);
                            var_37 = (~var_3);
                        }
                    }
                }
                arr_64 [i_13] [12] [1] [1] |= (((arr_56 [i_13 + 1] [i_13 - 3]) * var_5));

                for (int i_19 = 4; i_19 < 9;i_19 += 1)
                {
                    var_38 = (((arr_58 [i_13 - 2] [i_13 + 1] [i_19 - 4] [i_16] [i_19 - 2]) || var_1));
                    var_39 ^= (((1 / 125) - (~992083020)));
                    var_40 -= ((((-(arr_10 [i_14] [i_16] [12]))) - (arr_45 [i_13 + 1] [i_19 + 2])));
                }

                for (int i_20 = 0; i_20 < 13;i_20 += 1)
                {
                    var_41 = (min(var_41, ((((arr_41 [i_16]) ? (var_3 * var_4) : -var_12)))));
                    var_42 += (var_1 ? (!218) : (!24990));
                    var_43 = (~225452957);
                }
            }
            for (int i_21 = 0; i_21 < 13;i_21 += 1)
            {
                var_44 = (arr_61 [i_21] [i_21] [i_14] [i_14] [i_21]);
                var_45 -= (arr_39 [i_13 - 2]);
                arr_74 [i_13] [i_13 - 2] = (((arr_45 [i_13 - 1] [i_13 + 2]) / (arr_45 [i_13 - 1] [i_13 + 2])));
            }
            var_46 = var_7;
            arr_75 [i_13] [1] [i_13] = (!0);
        }
        var_47 = (1 + -1);
    }
    for (int i_22 = 0; i_22 < 16;i_22 += 1)
    {
        arr_80 [i_22] [i_22] &= ((var_8 || ((min((min(var_12, (arr_13 [i_22] [i_22] [i_22]))), ((((arr_35 [i_22] [14] [i_22] [i_22]) && var_0))))))));

        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {
            var_48 = (((((min(((var_0 ? var_5 : 14)), -var_7)) + 2147483647)) >> (((arr_29 [i_22] [i_22] [i_22] [i_22] [i_22] [i_23]) ? (var_1 || 0) : (var_5 + 1)))));
            var_49 += (min(var_10, -var_1));
        }
    }
    #pragma endscop
}
