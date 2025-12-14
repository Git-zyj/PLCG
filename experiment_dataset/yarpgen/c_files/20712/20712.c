/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = ((((min(((var_9 ? var_11 : var_1)), var_10))) - ((var_0 ? var_11 : (min(var_2, var_2))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = var_10;
        var_15 = var_3;
    }

    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_16 = (max((((var_0 ? var_5 : var_1))), (((arr_3 [i_1] [i_1]) ? (arr_2 [i_1]) : var_9))));
        var_17 = (max(var_17, ((max(((max((arr_4 [i_1] [i_1]), var_10))), (((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : var_8)))))));
        arr_5 [i_1] = ((((!(arr_3 [i_1] [i_1])))));
        arr_6 [i_1] [i_1] = (max(var_1, (arr_4 [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = var_10;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    arr_16 [i_4] = ((var_3 ? (arr_8 [i_2 + 1]) : var_5));

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_18 = var_7;
                        var_19 = (~var_6);
                        arr_20 [i_5] [i_5] = var_1;
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        var_20 = (arr_17 [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4 + 2]);
                        var_21 = (var_3 * (arr_7 [i_3] [i_4 - 1]));
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_22 = var_9;
                        var_23 = (var_9 && var_5);
                        var_24 = ((-(arr_13 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_4 + 2])));
                    }
                    var_25 = (((arr_11 [i_3] [i_2 + 1]) ^ (arr_11 [i_2] [i_2])));
                }
            }
        }
        var_26 = (var_1 * var_5);
        arr_25 [i_2] = -var_4;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    var_27 = ((-2067905905 ? var_7 : ((((var_3 != (arr_18 [i_2 - 3] [i_2 - 3] [i_9] [i_8] [i_8])))))));
                    var_28 = 964703394;
                    var_29 += (arr_27 [i_8] [i_9]);
                    arr_32 [i_2] [i_2] [i_8] [i_2] = var_3;
                }
            }
        }
    }
    for (int i_10 = 1; i_10 < 20;i_10 += 1)
    {
        var_30 = var_10;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                {
                    var_31 = var_11;

                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        var_32 = (max(((((min((arr_38 [i_11]), var_9))) ? (max(var_4, (arr_36 [i_10] [i_10]))) : (!var_10))), var_11));
                        var_33 = (max(var_2, ((min(var_5, var_1)))));
                        var_34 = (max(((~(arr_39 [i_10 + 2] [i_10 + 1] [i_10 + 2]))), var_2));
                        var_35 = (arr_33 [i_10]);
                        var_36 = ((~(~2542276097)));
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        var_37 = (min(var_6, var_10));
                        arr_48 [i_10] [i_10] [i_10] [i_10] [i_10] = (((((66846720 ? 0 : (arr_41 [i_10] [i_10] [i_10] [i_10])))) ? (((arr_41 [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10 - 1]) % var_3)) : (((61 ? 61 : 1752691199)))));
                        var_38 = ((((max((arr_35 [i_10 + 2] [i_10 + 2]), (arr_35 [i_10 - 1] [i_10 + 2])))) ? ((var_6 ? (arr_47 [i_10] [i_10 + 2] [i_10 + 2] [i_10]) : var_7)) : (((((arr_39 [i_10 + 2] [i_14] [i_14]) / var_9))))));
                        var_39 = ((+((+(((arr_44 [i_10] [i_10] [i_10] [i_14]) ? 61 : 1752691223))))));
                    }
                    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                    {
                        var_40 = (max((((((min((arr_49 [i_10] [i_10] [i_10]), (arr_39 [i_10 + 2] [i_10 + 1] [i_10 + 2])))) ? var_11 : (var_10 < var_9)))), (arr_43 [i_10 - 1] [i_10 - 1] [i_12] [i_12] [i_10 - 1])));
                        arr_51 [i_10] [i_10 - 1] [i_10 - 1] [i_10] = ((min(var_3, (arr_39 [i_10 - 1] [i_10 + 2] [i_10 + 2]))));

                        for (int i_16 = 3; i_16 < 20;i_16 += 1)
                        {
                            var_41 = var_3;
                            var_42 = (max((((arr_50 [i_10] [i_10 + 1]) ? (!var_2) : ((-(arr_44 [i_10] [i_10] [i_10] [i_10]))))), var_11));
                            var_43 = 1752691219;
                            var_44 = (max((min(var_5, ((var_11 ? var_11 : 811849487)))), var_1));
                            var_45 += (max((min((arr_34 [14]), var_4)), ((max((arr_34 [14]), (arr_34 [2]))))));
                        }
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
                    {
                        var_46 = -1;
                        var_47 *= ((min(var_9, (arr_38 [i_10 + 2]))));
                        arr_57 [i_10] [i_10] [i_12] = (max(-2067905901, (((var_11 ^ var_2) ? (arr_49 [i_10] [i_12] [i_17]) : (22608257 ^ var_5)))));
                        var_48 = var_3;
                        arr_58 [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_10] = ((((((arr_46 [i_11] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10]) ? var_9 : (arr_46 [i_10] [i_10 + 2] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10])))) ? 3998870906840081766 : ((var_8 ? var_8 : var_8))));
                    }
                }
            }
        }
        var_49 = (max(var_1, (max(var_7, var_11))));
    }
    var_50 = ((((1 ? var_6 : 16))) ? var_6 : ((~(~29418))));
    #pragma endscop
}
