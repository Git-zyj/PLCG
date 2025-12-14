/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((var_7 - var_6), var_10));

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_19 = ((((((1190571231 != (arr_7 [i_1]))))) * 3595891142));
                        var_20 += (min((-1190571223 - 117), (arr_5 [i_0 + 2] [i_1] [i_3])));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_21 &= 1521801471;
                        var_22 = min(var_13, (max(2773165824, (arr_8 [i_0 - 1] [i_0 + 1]))));
                        arr_17 [i_4] = 179;
                    }
                    arr_18 [i_0 - 2] [i_1] [i_2] = (((((-(arr_12 [i_0 + 1] [i_0 - 4] [i_0 - 1])))) ? (arr_0 [i_0 - 3]) : (max(495970233, -1))));
                    var_23 = ((-(arr_9 [i_2] [i_1] [i_0])));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_24 [i_5] [i_6] [i_6] = ((-(max((~-1190571225), (arr_21 [i_5 + 1])))));
            var_24 = (arr_22 [i_5] [i_6]);
            var_25 = (-25498 % 13434);
            var_26 = (max(var_26, ((((((-2112004107 * (arr_4 [i_5 - 1])))) ? ((((arr_4 [i_5 + 1]) <= (arr_4 [i_5 + 2])))) : (arr_4 [i_5 - 1]))))));
        }

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_27 = (max(var_27, 1));
            arr_27 [i_5] = ((((arr_13 [i_5 + 2] [i_5 - 1]) % (-32767 - 1))) - (((arr_13 [i_5 - 1] [i_7]) - (arr_13 [i_5 - 1] [i_7]))));
            var_28 = (min(var_28, ((min(((min((arr_12 [i_5 + 2] [i_5 + 2] [i_5 + 1]), (arr_12 [i_5 + 2] [i_5] [i_5 - 1])))), (min((arr_14 [i_5] [i_5] [i_5]), 8705941745574907548)))))));
        }
        var_29 &= (((((max((arr_12 [i_5 + 2] [i_5] [i_5]), (arr_12 [i_5 - 1] [i_5] [i_5 + 2]))))) | (~8705941745574907548)));

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_30 &= ((((arr_21 [i_5 - 1]) ^ (arr_33 [i_5 + 1] [i_8] [i_9] [i_10] [i_10] [i_5 - 1]))));
                        arr_34 [i_5 + 2] [i_8] [i_5 + 2] [i_10] = var_3;
                        var_31 = (arr_26 [i_5 + 2] [i_8] [i_9]);
                        var_32 = (max(var_32, (((min(var_4, (arr_33 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5])))))));
                    }
                }
            }
            var_33 = (arr_12 [i_5] [i_8] [i_8]);
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            arr_42 [i_13] [i_12] [i_11] [i_8] [i_5 - 1] = (max((-32767 - 1), var_7));
                            var_34 = ((((max((arr_11 [i_5 + 2] [i_5 + 2] [i_5] [i_5] [i_5 + 1] [i_12]), 1))) == (((!(arr_11 [i_5] [i_5] [i_5] [i_5 + 1] [i_5 + 1] [i_12]))))));
                        }
                    }
                }
            }
            arr_43 [i_8] [i_5 - 1] = 168;
        }
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            var_35 = (max((-1 - var_2), ((max((arr_10 [i_5] [i_14] [i_5 - 1] [i_14] [i_5 + 2]), var_16)))));
            arr_48 [i_5] [i_5 - 1] [i_5 + 2] = var_16;
            var_36 = (min(((((arr_11 [i_14] [i_14] [i_14] [i_5 + 2] [i_5 + 2] [i_5 + 2]) != 268435455))), ((var_3 / (arr_7 [i_5])))));
        }
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            var_37 = (max((((arr_50 [i_5 + 2]) * var_9)), ((min((max((arr_52 [i_5 + 1] [i_15] [i_5 + 1]), 1)), (min(var_11, var_15)))))));
            var_38 = (min(var_38, var_3));

            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                var_39 = (max(var_39, (arr_14 [i_5] [i_15] [i_16])));
                var_40 &= (14543 || var_8);
            }
            for (int i_17 = 4; i_17 < 8;i_17 += 1)
            {
                var_41 = ((4227716444 ? 4974177733809577971 : -25491));
                var_42 = 3192420765;
            }
            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {
                var_43 = var_7;
                arr_59 [i_5 - 1] [i_15] [i_15] = (max((((arr_46 [i_5 + 1] [i_5 + 1]) ? (arr_28 [i_5 - 1] [i_5 + 2] [i_5 - 1]) : var_16)), (((arr_46 [i_5 + 2] [i_18]) - -7828))));
            }
            for (int i_19 = 0; i_19 < 11;i_19 += 1)
            {
                var_44 -= (((32412 ? 574395538 : (arr_7 [i_5 + 1]))));
                var_45 = (arr_36 [i_5] [i_15] [i_19] [i_5]);
            }
        }
        var_46 = 668;
    }
    for (int i_20 = 2; i_20 < 9;i_20 += 1)
    {
        arr_66 [i_20] [i_20 - 2] &= (arr_2 [i_20 - 1] [i_20 - 2]);

        /* vectorizable */
        for (int i_21 = 1; i_21 < 9;i_21 += 1)
        {
            var_47 = (var_16 - var_2);
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 12;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 12;i_23 += 1)
                {
                    {
                        arr_74 [i_21 + 2] [i_21 - 1] [i_22] [i_21] = (490865277 * var_5);
                        var_48 = (var_15 | 18275568308704687482);
                        arr_75 [i_21] [i_23] [i_22] [i_21 + 2] [i_21] = 490865278;
                        var_49 = arr_65 [i_23];
                        arr_76 [i_20] [i_21] [i_23] [i_23] [i_20] &= -17911;
                    }
                }
            }
            arr_77 [i_20] [i_20 + 1] [i_21] = (arr_12 [i_21 + 2] [i_20 - 1] [i_20 - 1]);
        }
        /* vectorizable */
        for (int i_24 = 2; i_24 < 10;i_24 += 1)
        {
            var_50 = var_15;
            arr_81 [i_20] [i_24 + 2] [i_24] = arr_16 [i_20] [i_20] [i_24] [i_24] [i_24 + 2];
        }
        for (int i_25 = 0; i_25 < 12;i_25 += 1)
        {
            var_51 = (max(var_51, ((max(var_5, ((min(var_3, (arr_80 [i_20] [i_20 - 1])))))))));
            var_52 = arr_73 [i_20] [i_20 + 2] [i_20] [i_20 - 1] [i_25];
        }
        /* vectorizable */
        for (int i_26 = 0; i_26 < 0;i_26 += 1)
        {
            var_53 *= (arr_2 [i_20] [i_26 + 1]);
            var_54 = ((713695390 ? 62241 : (var_15 - 148)));
        }
        var_55 = var_16;
        var_56 = (max(var_56, (((~(-2147483647 - 1))))));
    }
    var_57 = (min(var_9, (max(4294967295, var_15))));
    #pragma endscop
}
