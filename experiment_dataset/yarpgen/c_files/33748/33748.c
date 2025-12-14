/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = (max(var_18, var_16));
            var_19 = (min(var_19, (((6848019323140840709 ? 106 : 150)))));
        }
        for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_20 = var_7;
            var_21 = (((((((max(var_2, (arr_2 [i_0] [i_0] [i_0])))) ? ((max(169, 99))) : var_13))) ? (!-26397) : (((min(var_10, var_0))))));
        }
        for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                var_22 = (max(var_22, (((-(max(45819353, 105)))))));
                var_23 = (max(var_23, ((max((max(var_14, (arr_7 [i_3 + 2] [i_3] [i_4 - 1]))), (arr_7 [i_0] [i_0] [i_4]))))));
                var_24 = (!26397);
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_25 = (~-89);
                var_26 = (max(var_26, var_11));
            }
            var_27 = ((748765032 ? 27213 : 96));
            var_28 |= var_6;
            var_29 = ((((((arr_12 [i_3 - 1] [13] [i_3 + 1]) ? (((arr_10 [i_0] [i_0]) ? (arr_12 [i_0] [i_0] [21]) : var_14)) : var_3))) ? var_15 : (arr_0 [i_0] [i_3])));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_30 = var_16;
                            var_31 = (106 ? 492274853 : 88);
                        }
                    }
                }
            }
        }
        var_32 = (arr_0 [i_0] [i_0]);
    }
    for (int i_9 = 1; i_9 < 22;i_9 += 1)
    {

        for (int i_10 = 2; i_10 < 19;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 22;i_12 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            var_33 = (min(var_33, ((var_5 ? var_2 : (arr_32 [1] [20] [1] [i_13])))));
                            var_34 = ((1 ? 98 : 106));
                        }
                        var_35 = (~var_7);

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_36 *= ((-((var_5 | ((2 ? -106 : 50))))));
                            var_37 = (arr_30 [i_9]);
                            var_38 += (max(67, 0));
                            var_39 |= (max((arr_13 [i_9] [i_11] [i_12]), ((~((var_16 ? (arr_14 [i_9] [i_9] [i_9] [i_9]) : var_1))))));
                        }
                        var_40 &= (arr_26 [i_9]);
                    }
                }
            }
            var_41 = (min(var_41, (arr_15 [i_9] [15] [i_10])));
        }
        for (int i_15 = 0; i_15 < 0;i_15 += 1)
        {
            var_42 = (min(((-(arr_20 [i_15 + 1] [i_15 + 1] [i_9] [i_9 - 1]))), -var_8));
            var_43 = (max((-68 || 127), (max((arr_30 [i_9]), (arr_30 [i_9])))));
            var_44 = -1423405948273776552;

            /* vectorizable */
            for (int i_16 = 2; i_16 < 21;i_16 += 1) /* same iter space */
            {
                var_45 = ((((var_0 ? (arr_0 [i_9] [i_15]) : var_7)) ^ ((var_1 ? (arr_5 [i_9] [i_9]) : var_7))));

                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    var_46 = var_17;
                    var_47 = (min(var_47, (((!(arr_34 [i_9 + 1] [i_15] [i_16 - 2] [i_17]))))));
                }
                var_48 ^= -2143664833;
            }
            /* vectorizable */
            for (int i_18 = 2; i_18 < 21;i_18 += 1) /* same iter space */
            {
                var_49 = (arr_21 [i_9 - 1] [i_15 + 1] [i_18 + 1] [i_9] [i_18 + 1]);
                var_50 = ((5099172097764449145 ? 5099172097764449150 : 122));
            }
            var_51 = -123;
        }
        for (int i_19 = 0; i_19 < 23;i_19 += 1)
        {
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                for (int i_21 = 3; i_21 < 20;i_21 += 1)
                {
                    {
                        var_52 = ((((var_7 + var_16) != (var_5 ^ var_9))) ? var_8 : ((((!(((-123 ? (-127 - 1) : 1619085162))))))));
                        var_53 &= var_13;
                    }
                }
            }
            var_54 = (arr_25 [i_9]);
            var_55 = (max((arr_16 [i_9] [i_9] [i_9 - 1] [i_19]), (!1423405948273776552)));
        }
        for (int i_22 = 1; i_22 < 1;i_22 += 1)
        {
            var_56 = ((((((arr_19 [i_9 - 1] [i_22 - 1]) ? (arr_19 [i_9 - 1] [i_22 - 1]) : (arr_19 [i_9 - 1] [i_22 - 1])))) ? (((~(arr_39 [i_9])))) : (arr_21 [i_9] [i_9 - 1] [i_9 - 1] [i_9] [i_22])));
            var_57 = -39;
            var_58 = ((((max((max((arr_14 [i_22] [i_22] [i_9 - 1] [i_22]), (arr_51 [i_9] [i_9]))), (!31)))) ? ((-((var_2 ? (arr_18 [i_9] [1] [i_9] [i_22] [i_9]) : (arr_6 [i_9 + 1] [i_22]))))) : 38));
        }
        var_59 = ((max(((min((arr_29 [i_9]), var_7))), ((1 ? (-127 - 1) : -1423405948273776552)))));
    }
    var_60 = -var_6;
    /* LoopNest 2 */
    for (int i_23 = 4; i_23 < 11;i_23 += 1)
    {
        for (int i_24 = 0; i_24 < 13;i_24 += 1)
        {
            {
                var_61 &= ((((((var_6 || (arr_58 [18] [18]))))) ? ((~(arr_7 [i_23] [i_23] [i_23]))) : 2143664833));
                var_62 = var_14;
            }
        }
    }
    var_63 = ((((max((-9223372036854775807 - 1), -5504128351751861379))) ? var_4 : (~var_13)));
    #pragma endscop
}
