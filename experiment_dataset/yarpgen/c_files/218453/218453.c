/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((111 < (((((var_4 ? var_6 : var_1))) ? var_12 : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (((arr_5 [i_0]) ? (((arr_5 [i_0]) ? var_7 : (((min((arr_0 [i_0] [1]), 62984)))))) : (min((min(var_6, var_3)), ((min((arr_6 [i_1] [i_0]), (arr_1 [i_0]))))))));
                arr_7 [i_0] [0] [i_1] = ((var_10 ? ((((min(34, (arr_3 [i_1])))) | (min((arr_2 [i_1]), (arr_4 [i_1]))))) : (((max(-24618, 26370))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = (((var_14 & var_4) ? ((((arr_6 [i_3] [i_0]) || (arr_9 [6] [i_1] [i_1] [i_1])))) : 1));
                        var_17 |= ((1 + (arr_6 [i_0] [i_3])));
                        var_18 = (arr_3 [i_3]);
                        var_19 = (min(var_19, (((((var_5 ? var_0 : var_6))) * -var_3))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_20 = var_10;
                            arr_18 [i_0] [i_4] = (2550 & 14);
                            var_21 = (arr_3 [i_0]);
                        }
                    }
                    arr_19 [i_0] [i_1] [i_2] = (min(1196336447, (((arr_8 [i_0] [i_2]) >> (((var_9 != (arr_8 [i_0] [i_1]))))))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_22 = ((3251155121540077022 ? 254 : 65523));
                        var_23 = 18446744073709551615;
                        var_24 = (((arr_22 [1] [i_1] [i_6] [i_6] [i_6]) < 17));
                        arr_24 [i_6] [i_1] [i_1] |= ((((((var_1 & (arr_17 [i_0] [i_0] [i_0] [i_1]))))) ? (min((min((arr_8 [i_5] [i_0]), 2053139691436819910)), var_1)) : ((((((var_3 ? (arr_1 [i_0]) : var_5))) ? ((min(var_12, 231))) : (-64 - 51))))));
                        arr_25 [i_0] [i_0] [i_6] [1] = (((min((min(62164, var_9)), (((-28267 ? var_4 : var_6))))) ^ (((max((arr_3 [i_0]), (arr_23 [6] [i_1] [i_5] [i_1]))) ^ (max(1, var_7))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_25 |= ((((var_1 ? (arr_6 [i_1] [i_5]) : (arr_0 [i_1] [i_7]))) | 65521));

                        for (int i_8 = 3; i_8 < 9;i_8 += 1)
                        {
                            var_26 = (min(var_26, (((var_14 || (arr_28 [i_8 - 1] [i_8 - 1] [i_8 - 3] [i_8 + 2] [i_8]))))));
                            var_27 = (var_9 * var_0);
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_28 = -69;
                            arr_34 [i_0] [i_1] [i_5] [i_1] [i_1] [4] |= var_9;
                            arr_35 [i_7] = (arr_16 [i_0] [i_7] [i_5] [i_5] [4]);
                            arr_36 [i_7] = (arr_4 [i_0]);
                            var_29 = 3596872834908165673;
                        }
                        arr_37 [i_7] [i_1] [i_7] [i_7] [i_1] [i_0] = ((arr_2 [i_1]) ? 12 : (arr_14 [i_0] [i_7] [i_5] [i_7] [8]));
                        var_30 = (max(var_30, (((var_13 % 1518158012) + (arr_10 [9] [i_5] [i_1] [i_7])))));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_31 = (min(var_31, (((!(((-8989090810300745129 / (((max(0, 17))))))))))));
                        var_32 = (((((var_12 + 2147483647) >> (((~var_5) + 33)))) >> 6));
                        arr_40 [i_10] [2] [i_1] [i_0] = var_4;
                        arr_41 [i_0] = var_14;
                        arr_42 [i_0] = -24863;
                    }
                    arr_43 [i_0] [i_1] [i_5] = (min((~15), 11));
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_33 = (arr_32 [i_0] [i_12] [i_11] [10] [i_12]);
                        var_34 = (max(var_34, (((37 ? (arr_4 [i_12]) : 2776809284)))));
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        arr_50 [i_0] [i_11] [i_11] [i_13] = ((((((arr_38 [i_13] [i_1] [i_11] [i_13]) ? var_4 : 248))) ? (arr_21 [i_0]) : (((var_10 > (arr_33 [i_0] [i_11] [i_11]))))));
                        var_35 = ((((min((min(var_1, var_0)), (((0 ? 2 : 24545)))))) ? (((41 <= (arr_22 [i_0] [i_1] [i_0] [i_13] [i_1])))) : (((((!(arr_8 [i_0] [i_1])))) * (arr_49 [1] [i_13] [i_11] [i_1] [i_0] [i_0])))));
                        var_36 = (((((((min(var_2, 60))) ? var_10 : (((var_14 && (arr_6 [i_0] [i_1]))))))) || 9858880718891699636));
                    }
                    for (int i_14 = 0; i_14 < 0;i_14 += 1)
                    {
                        var_37 = ((-(((arr_0 [i_14] [i_0]) | var_3))));
                        arr_53 [i_0] [i_0] &= (max(((((max(var_4, 65527))) ? (var_7 - 60) : (((var_6 ? 58029 : 1399913765))))), (((!(min(var_5, var_2)))))));
                    }
                    var_38 += (!151);
                    arr_54 [i_0] [i_1] = -116;
                    arr_55 [1] = (~1043);
                }
            }
        }
    }
    #pragma endscop
}
