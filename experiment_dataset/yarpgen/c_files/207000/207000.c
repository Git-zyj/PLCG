/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_10 *= (max((var_5 < 18446744073709551615), var_2));
                var_11 = 18446744073709551615;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_12 = (max(((((((var_5 ? var_8 : 2345970978344777))) ? (arr_5 [i_1]) : (arr_0 [4])))), (max(var_8, var_2))));
                            var_13 = (max(var_13, (arr_7 [i_0] [i_0] [8] [i_3])));
                        }
                    }
                }
                arr_11 [i_0] [i_0] [i_0] = var_5;
                var_14 = ((~(arr_1 [i_1])));
            }
        }
    }
    var_15 = (-(((var_9 > 18446744073709551600) ? (min(var_5, var_7)) : var_0)));

    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_16 = 1;
                var_17 += (arr_13 [i_4]);
                arr_19 [i_4] [i_4] [i_5] [i_6] = var_1;
                arr_20 [i_5] [i_5] = ((var_9 ? var_7 : (((max((arr_16 [i_5 + 1]), (arr_18 [i_5])))))));
            }
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_18 = (max(var_18, (max(var_4, (arr_12 [i_5 + 1])))));
                    var_19 = var_8;
                }
                for (int i_9 = 2; i_9 < 18;i_9 += 1)
                {
                    arr_31 [i_5] [i_5] = -var_3;
                    var_20 = (arr_18 [i_5]);
                    var_21 = var_5;
                }
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    var_22 = ((var_4 * (max(var_0, ((min((arr_17 [i_7] [i_7] [i_7]), var_6)))))));
                    arr_35 [i_4] [i_4] [i_7] [i_10 + 1] &= var_1;
                    arr_36 [i_5] = 18446744073709551615;
                }
                var_23 = ((max(19068, var_0)));
                var_24 = (min(var_24, ((max(((((((arr_34 [i_4] [i_4] [1] [i_5] [i_5]) ? (arr_18 [i_4]) : var_8)) < (arr_30 [i_7] [i_7] [i_4] [i_4] [i_4])))), (((arr_23 [17] [i_5] [18]) / (var_7 * 3444273999))))))));
                var_25 = (min(var_25, (!7456000319979180473)));
                var_26 = (max(var_26, ((((max((arr_27 [i_4] [i_4] [16] [i_7] [i_7 - 1] [i_4]), (min(18446744073709551591, 18446744073709551615)))) - (arr_23 [i_5 - 1] [i_7] [i_7 - 2]))))));
            }
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                arr_39 [i_4] [i_5 - 1] [i_4] [i_5] = (max(1, var_8));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 17;i_13 += 1)
                    {
                        {
                            var_27 = ((4294967295 ? (86 + 1) : 40));
                            var_28 &= (((max(var_7, (arr_44 [i_5 - 1] [i_5 + 2] [i_4]))) == (arr_41 [i_5 + 2] [i_11])));
                            var_29 = (min((4747715646953532494 | var_2), (arr_33 [i_13])));
                            var_30 = ((+((min((arr_43 [i_5] [i_5 + 1]), (arr_43 [i_5] [i_5 - 1]))))));
                        }
                    }
                }
                arr_47 [i_4] [i_5 + 1] |= (~18446744073709551615);
            }
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                var_31 *= var_8;
                var_32 = (min(var_32, (((!(((-25 ? var_0 : (arr_25 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1])))))))));
                var_33 = (min(1, (((2416429283192932971 ? 18446744073709551615 : -6021567689856668841)))));
                arr_50 [i_4] [i_5] [i_5] [i_4] &= ((((arr_44 [i_4] [i_4] [i_4]) - (arr_44 [2] [i_4] [i_4]))));
            }
            var_34 -= ((!((max(var_0, (arr_21 [i_5 - 1] [i_5 + 2] [i_4] [12]))))));

            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                var_35 &= ((!((((~var_4) ? (arr_46 [i_4] [i_5] [i_4] [i_5 - 1] [i_4]) : (arr_25 [i_4] [i_4] [i_4] [i_15] [i_15]))))));
                var_36 = (max(var_36, var_5));
                var_37 |= (max(var_5, (max((min(var_3, var_8)), ((max(14272, var_9)))))));
            }
        }
        for (int i_16 = 3; i_16 < 18;i_16 += 1)
        {
            var_38 = arr_27 [i_16 + 1] [i_16] [i_4] [i_4] [i_4] [i_4];
            var_39 = (max(var_39, (arr_32 [i_4] [i_16] [i_16 - 3] [14] [14] [i_16])));
        }
        arr_56 [12] [1] = (arr_12 [i_4]);
        var_40 = ((-(((arr_21 [i_4] [4] [i_4] [i_4]) ? var_6 : var_8))));
    }
    for (int i_17 = 4; i_17 < 10;i_17 += 1)
    {
        var_41 = var_4;
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 11;i_18 += 1)
        {
            for (int i_19 = 3; i_19 < 9;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 11;i_20 += 1)
                {
                    {
                        var_42 = (max((arr_67 [i_17] [i_18] [i_17] [i_20]), ((var_3 ? (arr_23 [i_19 - 1] [i_17 - 1] [6]) : (arr_23 [i_19 + 1] [i_17 - 3] [i_19 + 1])))));
                        arr_68 [i_17 + 1] [i_17 + 1] [i_19 + 2] [i_18] [i_18] [i_17 + 1] = (arr_49 [i_17 - 2] [i_17 - 1] [i_19 + 1] [2]);
                    }
                }
            }
        }
        arr_69 [i_17] = (arr_26 [8] [8] [i_17 + 1] [i_17]);
        var_43 = (max(var_43, ((16353528158316849963 ? 13699028426756019128 : 1457578253))));
    }
    var_44 -= ((1 ? 24456 : 2147483647));
    #pragma endscop
}
