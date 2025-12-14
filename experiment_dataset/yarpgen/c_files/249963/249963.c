/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_7, (((var_3 ^ var_10) ? (((57553 ? var_12 : var_11))) : ((var_2 ? var_1 : 16368))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [8] = (min((((((min((arr_2 [i_0]), (arr_0 [i_0] [i_0])))) == var_8))), (min((min(var_7, var_8)), var_5))));
        var_14 *= (max((arr_3 [1]), (arr_2 [2])));
        var_15 = ((2097151 ? 0 : 4294950905));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_16 = (max(((~((18446744073709551615 % (arr_1 [i_0]))))), (arr_5 [i_0])));
            arr_9 [10] [i_1] = (min((((0 ? 1732958009 : 219))), (max((arr_5 [i_0]), (min((arr_3 [i_1]), (arr_7 [i_1])))))));
            arr_10 [i_1] = (min((min(18, (-2147483647 - 1))), (((220 && 7369726762863893605) ? var_9 : 1773740015))));
            var_17 = ((max((arr_1 [i_0]), var_12)));
            var_18 = (((((((((arr_5 [i_1]) ? (arr_5 [i_0]) : var_7))) | (max((arr_6 [i_0] [i_0]), (arr_3 [4])))))) ? ((max(32754, 2147483647))) : (max(18446744073709551615, var_3))));
        }

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {

                /* vectorizable */
                for (int i_4 = 4; i_4 < 10;i_4 += 1)
                {
                    arr_21 [i_0] [i_2] [i_2] [i_4 - 1] = (arr_14 [2]);
                    var_19 = (~(arr_5 [i_0]));
                }
                arr_22 [i_3] [i_2] = (((max(2147483647, 4294950927))) ? ((((arr_1 [i_2]) <= (arr_13 [i_2])))) : (((!(arr_2 [i_0])))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_29 [i_2] [5] [i_5] [i_0] [i_2] [9] [i_5] = ((((~var_0) ? (-2147483647 - 1) : var_6)));
                            var_20 = var_6;
                            arr_30 [i_5] [i_5] = 4294950922;
                        }
                    }
                }
                arr_31 [i_0] = (((arr_18 [1] [i_0] [i_2] [i_3]) <= (((~var_8) * (arr_6 [i_2] [i_2])))));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_21 ^= var_9;
                    var_22 = (((arr_12 [i_0] [i_0]) ? (arr_12 [i_3] [i_2]) : (arr_12 [i_0] [i_7])));
                }
            }
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                var_23 -= (((arr_14 [i_0]) ? (max(var_10, (min(var_7, var_2)))) : (arr_2 [i_0])));
                var_24 ^= 16800933168597041674;
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                var_25 = -10799;
                arr_38 [i_0] [11] [i_0] [i_9] = (arr_27 [i_9] [i_9] [2] [i_2] [i_9] [i_9]);
            }
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                arr_41 [i_0] [i_0] = ((((~(~4294967292))) + var_12));
                var_26 = var_7;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 10;i_12 += 1)
                    {
                        {
                            arr_47 [i_2] [i_11] = (~var_1);
                            var_27 = (min(var_27, (((((min((arr_46 [i_12 + 2] [2] [i_10] [i_11] [10]), (arr_17 [i_12 + 2] [i_2] [i_2] [i_11] [i_12])))) ? (max(((min((arr_3 [i_11]), (arr_19 [i_12 + 2] [i_12 + 2])))), (arr_27 [i_0] [i_0] [i_12] [i_12 + 2] [i_12 + 1] [i_12]))) : (((((var_8 ? 3 : var_11))) ? (((!(arr_39 [i_0] [i_0] [i_12])))) : (((arr_13 [i_11]) & (arr_26 [i_0]))))))))));
                            var_28 = (arr_8 [1]);
                        }
                    }
                }
            }
            arr_48 [i_0] [i_2] = (min((0 && 56592), (((~var_8) | ((var_0 ? (arr_36 [1] [1] [6]) : 16370))))));
            var_29 = (~1174252685);
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 8;i_13 += 1) /* same iter space */
        {
            arr_52 [i_0] [i_0] = (var_3 || 4);
            var_30 = (min(var_30, (((arr_8 [i_0]) ? (arr_2 [i_13]) : (!18446744073709551589)))));
            var_31 += (((arr_25 [2] [i_0] [i_0] [i_0] [i_13]) % (arr_25 [i_13] [i_13 + 1] [i_13] [i_13] [i_13 + 1])));
        }
        for (int i_14 = 1; i_14 < 8;i_14 += 1) /* same iter space */
        {
            var_32 = ((((((((6785 & (arr_54 [6] [10] [10])))) ? var_8 : (max((arr_7 [i_14]), (arr_26 [i_14])))))) <= ((((((arr_3 [i_0]) * (arr_19 [i_14] [i_0])))) ? (((min((arr_43 [8] [i_0] [8]), var_0)))) : ((var_8 ? (arr_20 [i_14] [5] [i_0] [i_0]) : (arr_11 [i_14] [11] [i_0])))))));
            arr_55 [i_0] [1] [0] = (((~var_3) + var_3));
            arr_56 [i_0] = (((arr_8 [i_14 + 3]) != ((((!(arr_28 [i_0] [i_0] [10] [i_14 + 1] [2])))))));
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 11;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        {
                            arr_65 [i_0] [i_16] [i_17] = max((arr_6 [4] [i_16]), (arr_3 [9]));
                            arr_66 [i_0] [i_14] [i_0] [i_16 - 1] [i_16] = (max((((arr_19 [i_15 - 1] [i_14 + 1]) ? ((((!(arr_27 [i_16] [i_0] [i_14] [7] [i_16] [9]))))) : (arr_23 [i_0] [i_14 + 1] [i_14 + 1] [i_16]))), (arr_16 [i_15] [i_15] [i_17])));
                            var_33 = (min(var_33, ((max(((max((arr_14 [i_15 - 1]), (arr_19 [i_16 - 2] [10])))), (~var_6))))));
                            var_34 = (max(var_34, ((max((max(((((arr_26 [i_0]) | var_8))), (~8653388041909108869))), var_9)))));
                            arr_67 [i_0] [i_0] [i_15 - 1] [i_16] [i_16] = ((var_5 ? (arr_23 [i_16 - 2] [i_16 - 2] [i_16] [i_16]) : ((((arr_49 [i_14 + 1]) ? var_5 : (arr_20 [9] [i_14] [i_14 + 3] [i_14]))))));
                        }
                    }
                }
            }
        }
    }
    var_35 = var_4;
    var_36 = (((~0) ? var_4 : var_9));
    #pragma endscop
}
