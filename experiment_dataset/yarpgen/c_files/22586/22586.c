/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((-65529 + 2147483647) >> (var_8 - 3270166404)))) & (max(-5507675447317262324, -var_2))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [24] = -5507675447317262304;

        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            var_17 ^= var_13;
            var_18 -= (var_13 <= -var_6);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            arr_10 [14] = (arr_2 [i_0]);
            var_19 = (arr_7 [i_2]);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_4] = (4058010535231453048 ? 18 : 45006);
                            arr_22 [i_4] = (var_4 ? (arr_20 [i_0] [i_3] [i_3] [i_3] [11] [i_6]) : -0);
                        }
                    }
                }
            }
            arr_23 [i_0] [i_3] [i_0] |= var_6;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    {
                        var_20 &= (arr_6 [i_0] [i_7] [i_0]);
                        var_21 &= 201;
                        arr_29 [i_7] [3] [i_0] [i_0] = -1;
                    }
                }
            }
            arr_30 [i_0] = -var_10;
            arr_31 [i_0] [i_0] [4] = (((-1582891517330421791 >= var_5) ? (arr_4 [i_3] [i_0] [i_0]) : (!var_14)));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
        {
            var_22 = (((arr_35 [i_9]) ? 1282912701 : (~var_15)));
            arr_36 [i_0] [i_9] &= -var_8;
            var_23 = (((arr_2 [i_9]) / -46529));
            var_24 = (min(var_24, (arr_12 [i_9] [i_0])));
        }
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 21;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 2; i_12 < 22;i_12 += 1)
            {
                var_25 = ((var_13 ? -4058010535231453048 : var_2));

                for (int i_13 = 2; i_13 < 24;i_13 += 1)
                {
                    var_26 += var_6;
                    arr_49 [i_12] |= 58;
                    var_27 += ((((0 > (-9223372036854775807 - 1))) ? 5507675447317262326 : (arr_20 [i_10 + 2] [i_11] [i_12] [i_12] [i_12 - 2] [i_13 - 2])));
                    var_28 += (((arr_8 [i_13] [i_13 - 1] [i_12 + 1]) | var_15));
                    var_29 *= ((-(arr_16 [i_13] [i_13])));
                }
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    var_30 += (~-32764);
                    arr_54 [i_10] [i_11] [21] [2] [i_14] = (((((var_10 ? (arr_26 [i_14] [i_11] [i_12] [i_10 + 1]) : var_0))) & ((33 ? -684155805 : -2612726652896563996))));
                    var_31 += (((arr_26 [4] [11] [i_10 + 4] [i_12 - 2]) + 1023));
                }
            }
            arr_55 [i_10] [i_10] = (((((var_7 | (arr_41 [15] [i_11] [i_11])))) || (arr_5 [4] [i_10 - 1] [4])));
            arr_56 [i_11] = (((arr_35 [i_10 + 2]) / -96));
            var_32 = 24;
            var_33 = 255;
        }
        for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
        {
            arr_59 [i_10] [i_10] [21] = -var_2;

            for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
            {
                var_34 += (arr_14 [0]);
                var_35 = -85;
            }
            for (int i_17 = 0; i_17 < 25;i_17 += 1) /* same iter space */
            {
                var_36 = (max(var_36, ((((arr_60 [i_10 + 3] [i_10] [i_10 - 1] [i_10 - 1]) >> (var_2 % 255))))));
                var_37 *= (4058010535231453048 || -2612726652896563996);
                var_38 = (min(var_38, 307678672556934523));
                var_39 &= (((arr_15 [i_10] [17] [i_17] [i_10 + 1]) - (arr_47 [i_10 + 1] [i_10 + 1] [5])));
            }
            arr_64 [22] [22] [6] = (((arr_20 [i_10] [23] [i_10 + 2] [i_10] [i_10] [i_15]) ? (arr_33 [i_15] [5] [i_10 + 2]) : (arr_32 [i_10] [i_15] [i_10 + 2])));
            var_40 = (max(var_40, (arr_41 [9] [i_10] [i_10])));
        }
        for (int i_18 = 0; i_18 < 25;i_18 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 25;i_19 += 1)
            {
                for (int i_20 = 1; i_20 < 24;i_20 += 1)
                {
                    {
                        var_41 = ((!(var_10 || var_4)));
                        arr_77 [i_10] [i_10] [i_18] [i_19] [i_20] = (((arr_8 [i_20 - 1] [i_20] [i_20]) < var_0));
                        var_42 *= (((arr_2 [i_10]) ? (arr_51 [i_10 - 3] [i_20 + 1] [i_20 + 1] [i_20]) : var_9));
                    }
                }
            }

            for (int i_21 = 0; i_21 < 25;i_21 += 1)
            {
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 25;i_22 += 1)
                {
                    for (int i_23 = 2; i_23 < 24;i_23 += 1)
                    {
                        {
                            var_43 &= ((-(arr_80 [i_10] [i_10 - 3] [i_10 - 1])));
                            var_44 = (72 - var_1);
                        }
                    }
                }
                arr_88 [i_10 + 4] = (arr_82 [i_10 + 3] [i_10 - 3] [i_18] [i_18] [i_18] [i_21]);
                var_45 = 26029;
            }
            var_46 = (((1282912720 || var_15) | ((var_0 ? var_10 : (arr_75 [i_10] [6] [i_10] [i_18])))));
        }
        arr_89 [17] = (arr_0 [i_10 + 2]);
        var_47 = 65535;
        var_48 *= (((arr_27 [i_10 - 1] [1] [1] [i_10]) ? (arr_4 [i_10 - 2] [i_10 + 3] [i_10 + 3]) : 1));
    }
    var_49 = (max((((((81 ? 0 : var_6))) ? (-1 & 13363) : 59213)), var_1));
    var_50 = var_6;
    var_51 = var_12;
    #pragma endscop
}
