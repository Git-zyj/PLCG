/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_10 = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_9))) > -var_5));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_0] |= ((-((~(arr_9 [i_0] [i_2 - 1] [i_0] [i_2] [i_2] [9])))));
                        var_11 = (min(var_11, (arr_0 [i_2 - 1])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_12 = (max(var_12, ((((arr_7 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? (arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]) : var_6)))));
                        var_13 = ((-var_4 ? (arr_4 [i_2 - 1] [i_2 - 1] [i_2 + 1]) : (arr_13 [i_0] [i_2 + 1] [i_0] [i_2 + 1])));
                        var_14 = ((-(((!(arr_6 [i_4]))))));
                        var_15 = (~((~(arr_1 [i_0]))));
                        var_16 = var_4;
                    }
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        var_17 = ((-(!2147483647)));
                        var_18 = (((~(arr_14 [i_2] [i_2] [i_5 - 1] [i_5 + 1] [2]))));
                    }
                    for (int i_6 = 4; i_6 < 11;i_6 += 1)
                    {
                        var_19 = (max(var_19, (((~((((((var_4 ? (arr_13 [i_0] [i_1] [i_1] [i_6 + 2]) : var_9)) + 9223372036854775807)) >> (var_1 - 42948))))))));
                        var_20 *= (max((max(var_4, (arr_8 [i_2 - 1] [i_2 + 1] [i_6 - 2]))), (((!(arr_8 [i_2] [i_2 + 1] [i_6 - 2]))))));
                        arr_20 [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_0]);
                        arr_21 [i_1] [i_0] [i_6] = ((+(((arr_0 [i_2 + 1]) ? var_8 : (arr_0 [i_2 - 1])))));
                        arr_22 [i_0] [i_0] [i_2] [i_6] = var_8;
                    }
                    var_21 -= (max((arr_2 [i_2 - 1]), ((~(((!(arr_9 [9] [12] [12] [i_0] [i_1] [2]))))))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_26 [i_0] = ((!(arr_9 [i_0] [8] [i_0] [i_0] [i_7] [i_7])));
                        arr_27 [i_0] [i_7] = (((arr_9 [i_2] [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1]) ? var_1 : var_0));

                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            arr_30 [i_0] [i_8] = var_7;
                            arr_31 [i_0] [i_0] [i_2] [i_2 - 1] [i_7] [i_7] [i_8] = ((var_4 ? (arr_1 [i_0]) : var_5));
                            arr_32 [9] [i_1] [i_1] [i_0] [i_8 - 2] = ((~(arr_9 [i_2] [i_2 + 1] [i_2 + 1] [i_8 + 4] [i_8 + 4] [i_8 + 4])));
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                        {
                            var_22 *= ((!(var_3 ^ var_9)));
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(((-(arr_4 [i_0] [i_1] [i_2]))))));
                            arr_36 [i_0] [i_0] [i_0] = var_1;
                        }
                        for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                        {
                            var_23 = ((var_7 ? (arr_17 [i_2] [i_0] [i_2] [i_2 + 1]) : (arr_14 [i_1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])));
                            var_24 = (!var_1);
                        }
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_41 [i_0] [i_11] [i_11] [i_11] [i_0] [5] = (--15142560358900688947);
                        var_25 = (min(var_25, ((max((arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [11] [11]), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    arr_42 [i_0] [i_1] [i_2] [i_0] = (!95);

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        arr_45 [i_0] = (var_2 & (arr_34 [i_0] [i_1] [i_2] [i_2 + 1] [i_1] [i_2 - 1] [i_2]));
                        arr_46 [i_0] [i_0] = (((arr_0 [i_2 - 1]) % (arr_0 [i_2 - 1])));
                        var_26 *= (-((var_6 ? (arr_4 [i_1] [i_2] [i_2]) : (arr_40 [1] [i_1] [1] [i_1]))));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_27 -= (!var_8);
                        var_28 -= (arr_33 [i_0] [i_1] [i_0] [i_2 - 1] [i_0]);
                    }
                }
            }
        }
        var_29 -= ((((min(var_3, (arr_5 [i_0])))) ? (((((arr_39 [i_0] [i_0] [i_0] [i_0]) && (arr_17 [i_0] [6] [i_0] [i_0]))) ? (max((arr_44 [i_0] [i_0] [6] [i_0] [i_0]), (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_10 [i_0] [i_0] [i_0]))) : (((((-2147483647 + 252) < var_3))))));
        var_30 ^= ((max((max(var_8, var_5)), (arr_16 [i_0] [i_0] [2] [i_0]))));
        arr_50 [i_0] = var_6;
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        arr_54 [i_14] = ((~(((!(arr_10 [i_14] [i_14] [i_14]))))));
        var_31 = ((((((arr_24 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) + var_7))) / (arr_47 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])));
    }
    for (int i_15 = 0; i_15 < 13;i_15 += 1)
    {
        var_32 = (((((((-788387999 + 2147483647) << (24 - 24)))) ? 18 : 29754)));
        var_33 = ((+(((!var_3) ? (arr_34 [i_15] [i_15] [i_15] [i_15] [i_15] [7] [i_15]) : (arr_39 [i_15] [i_15] [i_15] [i_15])))));
        var_34 = (min(788388016, ((((~(arr_24 [i_15] [i_15] [7] [i_15] [i_15] [i_15])))))));
        arr_59 [i_15] = ((+((((arr_56 [i_15]) >= (((!(arr_44 [i_15] [i_15] [i_15] [i_15] [i_15])))))))));
    }
    var_35 = (max(var_35, (((-var_7 || (((~((max(var_2, var_2)))))))))));
    var_36 = (min(((((var_9 && var_3) || var_8))), var_4));
    var_37 = var_5;
    var_38 = ((+((var_2 >> (((~var_3) + 58631))))));
    #pragma endscop
}
