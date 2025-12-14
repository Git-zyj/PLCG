/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((-(max(((var_14 ? var_5 : var_8)), (min(var_5, var_5))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 *= (arr_1 [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_21 = (min(var_21, (((((var_1 ? -10414 : var_5)) * (arr_6 [i_2] [i_1] [i_0]))))));
                arr_7 [15] [i_2] [i_1] [i_0] = (arr_4 [i_1]);
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_22 += (((arr_8 [i_1] [i_3]) ? (arr_8 [i_3] [i_0]) : var_5));
                arr_11 [i_0] [i_1] [i_3] = ((((var_8 ? var_14 : (arr_4 [i_0]))) + (arr_3 [2] [i_1] [i_0])));
                var_23 &= ((var_0 >> (-2800545442013089945 + 2800545442013089959)));

                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    var_24 = ((((-9223372036854775807 - 1) ? (arr_0 [i_0]) : (arr_6 [i_4] [i_3] [i_1]))));
                    var_25 = (max(var_25, (arr_13 [i_4 + 1] [i_4] [i_4])));
                }
                arr_16 [i_3] [i_1] [i_1] [1] = (arr_2 [0]);
            }
            var_26 = (29 ? (arr_0 [i_1]) : (arr_8 [i_0] [14]));
        }
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_27 *= var_1;
                        var_28 = (max(var_28, ((max((((arr_15 [i_5] [i_5] [i_5 - 1] [i_6]) | (arr_15 [22] [i_5] [i_5 + 2] [i_7]))), ((~(arr_15 [2] [12] [i_5 + 1] [i_7]))))))));
                    }
                }
            }
            arr_26 [i_0] [1] [i_5] = (arr_18 [i_0] [i_5]);
        }
        var_29 = ((((min((arr_0 [i_0]), (arr_10 [i_0] [4] [i_0] [i_0])))) ? ((((-9223372036854775807 - 1) ? 63 : -1))) : ((+(max((arr_14 [i_0] [i_0] [10] [i_0]), 1))))));

        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                var_30 *= 1;

                /* vectorizable */
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    var_31 = 9223372036854775807;
                    var_32 = ((arr_6 [16] [14] [i_8 + 1]) == 1);
                    arr_33 [i_8] [i_8] [4] = 9223372036854775807;
                    var_33 = (((arr_0 [i_8 - 1]) ? 1 : (~1)));
                }
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    var_34 = ((((((arr_3 [i_8 - 2] [i_8 - 2] [i_8 + 1]) ? (-9223372036854775807 - 1) : (arr_3 [i_8 + 1] [i_8 + 1] [i_8 - 1])))) ? (max(2792397377, var_18)) : 1));

                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        var_35 = min(((-(arr_31 [16] [i_0] [i_0] [i_8 + 1] [i_11]))), (((!(arr_38 [i_8] [i_8] [i_8] [i_8 + 1] [12] [1])))));
                        var_36 = arr_8 [i_0] [10];
                        var_37 = 1;
                    }
                    for (int i_13 = 3; i_13 < 21;i_13 += 1)
                    {
                        arr_41 [i_0] [i_9] [i_8] = ((-(min(245554382, (arr_1 [i_13 - 2])))));
                        var_38 = (max(var_38, ((((-(arr_22 [i_8] [i_13 + 1] [i_13] [i_0])))))));
                        arr_42 [i_8] = (max(var_1, (arr_4 [i_9])));
                    }
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    var_39 *= (((arr_35 [i_8 + 1] [i_8 + 1] [2] [i_8 - 1]) | 38364));
                    arr_46 [6] [i_0] [i_8] [i_9] [12] [i_14] = ((16802 << (((((-9223372036854775807 - 1) - -9223372036854775798)) + 23))));
                }
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    var_40 = 1;
                    var_41 = (min(var_15, (arr_27 [14])));
                }
                var_42 = (min(var_42, ((((~-var_2) * (min((arr_24 [i_8 + 1] [i_8] [21] [i_8 - 2]), (arr_17 [16] [i_8]))))))));
            }
            for (int i_16 = 1; i_16 < 22;i_16 += 1)
            {
                var_43 = (((max(var_9, (((arr_36 [i_8] [i_8] [10] [i_8] [i_16]) ? (arr_23 [0] [12] [i_16]) : var_17)))) << (var_14 - 1545)));
                var_44 = var_11;
            }
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 23;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 21;i_18 += 1)
                {
                    {
                        var_45 -= (((((var_15 ? 1 : (arr_17 [i_0] [i_8])))) ? (max(((1 * (arr_18 [i_17] [0]))), (var_7 & var_12))) : ((((var_10 ? (arr_29 [i_18] [10] [i_8]) : var_14))))));
                        var_46 = 1;
                    }
                }
            }
        }
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
    {
        arr_61 [7] = var_12;

        for (int i_20 = 1; i_20 < 15;i_20 += 1) /* same iter space */
        {
            var_47 -= (max(((-(arr_3 [i_20 + 2] [i_20 + 1] [i_20 - 1]))), (arr_3 [i_20 - 1] [i_20 - 1] [i_20 + 1])));
            var_48 = (min(var_48, (((!(~var_6))))));
        }
        for (int i_21 = 1; i_21 < 15;i_21 += 1) /* same iter space */
        {
            var_49 = (-32767 - 1);
            var_50 = (max(var_50, ((min(var_0, (arr_66 [1]))))));
        }
    }
    for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
    {
        var_51 += ((-(((arr_27 [i_22]) ? (~var_1) : (4093257881 % 9223372036854775794)))));
        var_52 = var_16;
        var_53 = ((((!(arr_10 [i_22] [12] [i_22] [15]))) ? 245554382 : var_15));
        var_54 = (max(var_54, ((((((~(((arr_12 [i_22] [i_22] [i_22]) ^ (arr_24 [i_22] [i_22] [i_22] [i_22])))))) ? 7397222804065711837 : (arr_3 [i_22] [22] [1]))))));
        var_55 = (arr_19 [11] [i_22]);
    }
    var_56 = (var_7 != (!var_8));
    var_57 = ((((var_8 ? var_0 : ((var_6 ? var_14 : var_9))))) + (((max(15222, 268435456)) + var_4)));
    #pragma endscop
}
