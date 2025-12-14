/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = (arr_6 [i_0] [i_0] [i_2]);
                    var_12 = (max(var_12, ((((arr_4 [i_0] [i_1] [i_2]) && ((max((((var_9 ? var_8 : var_5))), ((0 ? var_3 : var_5))))))))));
                    var_13 = (var_3 ? (max(((min(102, var_6))), (min(var_3, var_0)))) : ((max(((((arr_6 [i_0] [i_0] [i_2]) < var_2))), (983126744 / var_8)))));
                }
            }
        }
        var_14 = (arr_3 [i_0]);
        arr_9 [1] [i_0] = var_6;

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
            {
                arr_16 [i_3] [i_3] [i_3] = ((-(max((var_9 - var_6), var_6))));
                var_15 = (max(var_15, ((((((min(2123103650, var_6)))) ? ((((~(arr_4 [i_0] [i_3] [i_4]))) | 15510)) : (arr_6 [i_0] [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_16 = (min(var_16, var_3));
                            var_17 = (max(var_17, (((min(var_1, (arr_3 [i_4])))))));
                            var_18 = var_0;
                            var_19 = (min((((arr_13 [i_0] [i_4] [i_5] [i_6]) ? (arr_13 [i_0] [i_4] [i_5] [1]) : var_5)), var_5));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [6] [i_0] [i_3] = (((((((var_4 ? var_0 : var_9))) || ((var_5 > (arr_21 [i_0] [i_3] [i_4]))))) ? ((min((arr_13 [i_4] [i_5] [i_4] [i_3]), (arr_4 [i_0] [i_3] [i_0])))) : 122));
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
            {
                var_20 ^= (((((3311840552 > var_0) ? ((((arr_17 [i_0] [i_3] [i_3] [i_7]) ? (arr_10 [i_7]) : var_9))) : (min(var_4, var_7)))) < ((((!(0 || var_3)))))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_32 [i_8] [i_3] = var_6;
                            var_21 = max((max((min(var_4, var_1)), (((var_2 ? var_8 : var_6))))), ((((arr_19 [i_0] [i_3] [i_7] [i_3]) ? (arr_19 [i_0] [i_3] [i_3] [i_3]) : (arr_19 [i_0] [i_3] [i_3] [i_0])))));
                            var_22 = ((-((~(min(var_1, var_7))))));
                            var_23 -= min((min((arr_18 [i_8 - 1]), var_5)), ((((min(var_1, var_2))) ? ((~(arr_25 [i_0] [i_9] [i_9]))) : (arr_15 [i_0] [i_0]))));
                            arr_33 [i_3] [i_3] [i_3] [i_0] = (arr_28 [i_3] [i_3]);
                        }
                    }
                }
            }
            var_24 = ((min((((15510 ? var_2 : 1546249432))), (max(5532, var_4)))) > (arr_26 [i_0] [i_0] [i_0]));
            var_25 = (min(var_25, (((((var_4 <= (arr_7 [i_0] [i_0]))))))));
        }
        for (int i_10 = 2; i_10 < 20;i_10 += 1)
        {
            var_26 = 4276739524;
            arr_36 [i_0] [i_10] [i_10] = (min((arr_31 [1] [i_10] [i_10] [i_10 + 1]), (min(var_4, var_8))));
            arr_37 [i_0] = ((((min((arr_5 [i_10 - 1]), var_6))) ? ((((arr_24 [i_10 - 1] [i_10 - 2] [i_10]) ^ (arr_24 [i_10 - 2] [i_10 + 1] [i_10])))) : (arr_27 [i_10 - 2] [i_10 - 1] [i_10] [i_10 + 1])));
        }
        var_27 = (arr_2 [i_0] [i_0]);
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        arr_41 [i_11] = ((((min((arr_28 [i_11] [i_11]), 15507))) ? (((arr_28 [i_11] [i_11]) ? (arr_28 [i_11] [i_11]) : (arr_28 [i_11] [1]))) : (min((arr_28 [i_11] [i_11]), (arr_28 [i_11] [i_11])))));
        arr_42 [i_11] [i_11] = ((((((arr_15 [i_11] [i_11]) ? (arr_15 [i_11] [i_11]) : var_7))) ? (arr_5 [i_11]) : (((((var_3 ? (arr_11 [i_11] [i_11]) : var_1)) < ((min(1, -96))))))));
        var_28 = (min((((arr_39 [i_11]) ? var_7 : (arr_39 [i_11]))), (((-(arr_12 [i_11]))))));
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 22;i_12 += 1)
    {
        arr_46 [i_12] = -3260490312021540743;
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                {

                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        arr_57 [i_12] [i_15] [i_15] [i_12] [i_13] [i_12] = (i_12 % 2 == zero) ? ((((((arr_53 [i_12] [i_14] [i_12]) + 9223372036854775807)) << (13877246440129147712 - 13877246440129147712)))) : ((((((((arr_53 [i_12] [i_14] [i_12]) - 9223372036854775807)) + 9223372036854775807)) << (13877246440129147712 - 13877246440129147712))));
                        arr_58 [i_12] [i_13] [i_14] [i_15] [i_13] = (arr_56 [i_15] [i_14] [i_13] [i_12] [i_12 + 2]);
                        arr_59 [i_12 - 1] [i_12] = -var_7;
                        var_29 = 3311840551;
                    }
                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        arr_63 [i_12] [i_13] [i_14] [i_14] [i_12] [i_16] = var_2;
                        var_30 = (arr_44 [i_14]);
                    }
                    for (int i_17 = 3; i_17 < 24;i_17 += 1)
                    {
                        arr_66 [i_17] [i_14] [i_14] [i_12] &= var_4;
                        arr_67 [i_12 + 1] [i_13] [i_12] = ((var_9 ? var_8 : var_3));
                        arr_68 [i_13] [i_12] [i_17] = ((((1680889716843679381 ? (arr_51 [i_17] [i_14] [i_13] [i_12]) : 218)) * (((var_5 != (arr_51 [i_12] [i_13] [i_13] [i_17]))))));
                        var_31 = (arr_55 [i_12 + 2] [i_17] [i_14] [i_17] [i_14]);
                        var_32 -= ((((var_7 ? var_5 : var_8)) <= (((-(arr_64 [i_17] [i_17] [i_17] [i_17]))))));
                    }
                    var_33 = (((arr_53 [i_12 - 1] [i_12 + 1] [i_12]) ? (arr_52 [12] [i_12 - 1] [i_12]) : 31));
                }
            }
        }
        var_34 *= ((16384 ? 15504 : 554422845));
        arr_69 [i_12] = (((((var_6 ? 0 : var_9))) ? ((((!(arr_50 [i_12] [18]))))) : (((arr_51 [i_12] [i_12] [i_12] [i_12]) ? var_3 : (arr_53 [i_12] [i_12 + 1] [i_12])))));
    }
    var_35 = (min(var_35, var_3));
    var_36 = var_1;
    #pragma endscop
}
