/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = ((!(((~((((arr_2 [i_0] [i_0]) <= var_6))))))));
        var_11 = (min((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) * (((var_5 ? var_9 : var_1))))), (arr_2 [i_0] [i_0])));
        var_12 = (((((((var_0 ? var_8 : (arr_2 [i_0] [i_0])))) ? (max(var_5, (arr_0 [i_0]))) : (arr_1 [i_0] [i_0]))) * (((-((var_2 ? var_6 : var_7)))))));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_13 -= (((((var_4 + (~var_0)))) && (((-(arr_3 [i_1] [i_1 - 1]))))));
        arr_5 [i_1] [i_1] = ((!(((-(((var_1 > (arr_4 [i_1])))))))));
        arr_6 [24] = (((arr_3 [i_1 - 1] [i_1 - 3]) ? (((min(var_9, var_7)))) : (min(var_1, var_5))));
        var_14 = (max(var_14, ((((((var_9 >= var_9) == (max(var_5, (arr_3 [i_1] [i_1]))))) ? var_6 : (((arr_3 [i_1] [i_1]) / (max(var_8, (arr_4 [i_1]))))))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_11 [i_1] [i_1] [i_2] = (!var_3);
            arr_12 [i_1] [i_1] [i_2] = ((arr_8 [i_1]) >> var_6);

            for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
            {
                arr_15 [i_1] [i_2] [1] = var_5;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_24 [i_2] [i_3] [i_4] [i_3] = ((var_1 || var_5) | var_7);
                            arr_25 [i_1] [i_2] [11] = var_9;
                            arr_26 [i_1] [i_2] [i_2] [i_2] [3] [i_1 + 1] = var_9;
                            arr_27 [i_1] [i_1] [i_3] [i_4] [i_5] = var_8;
                        }
                    }
                }

                for (int i_6 = 4; i_6 < 24;i_6 += 1)
                {
                    var_15 = (arr_7 [i_1 + 4] [i_6 + 1]);
                    var_16 = (max(var_16, ((((arr_18 [i_1 + 3] [7]) < (arr_18 [i_1 + 1] [i_1 + 1]))))));
                    arr_30 [i_3] [i_3] [i_3] [i_6 - 1] = (var_8 ? (arr_10 [i_1 + 3] [i_2] [i_6 - 2]) : (var_7 & var_6));
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    arr_33 [i_1 + 3] [i_1 + 3] [i_3] [i_7] = (arr_20 [i_1] [i_2] [i_2] [i_7] [i_2] [i_7]);
                    arr_34 [i_2] [12] [12] [i_7] = (((arr_14 [i_1 - 3] [i_2] [i_2] [i_7]) || (arr_4 [i_1 + 1])));
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            var_17 = ((var_0 % var_3) >> var_9);
                            arr_41 [i_2] [i_2] [i_3] [i_9] [i_2] [i_2] [i_3] = ((((var_3 << (var_2 - 28945))) != (arr_36 [i_1 + 4] [i_9] [i_3] [i_1 + 3] [i_9])));
                            arr_42 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_3] = ((var_7 ? ((((arr_18 [i_1] [14]) > var_6))) : (arr_13 [i_1 - 3] [i_1 - 3] [i_8] [i_1 - 3])));
                            var_18 = (((var_3 >= (arr_21 [i_1] [i_2] [i_3] [i_3] [i_2] [i_9]))));
                        }
                    }
                }
                arr_43 [17] [17] [15] = var_2;
            }
            for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
            {
                var_19 += ((!(((~(arr_9 [i_1]))))));
                var_20 = ((var_0 < var_7) || (var_3 / var_4));
            }
            for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
            {
                arr_48 [i_1 - 3] [i_2] = var_0;
                arr_49 [24] [1] = ((-(arr_31 [i_1] [i_1 + 4] [i_11] [i_11])));
                var_21 |= (arr_13 [19] [11] [23] [i_1 + 2]);
            }
            arr_50 [i_1 - 3] [i_2] [i_1] = ((var_0 || (arr_10 [i_1] [1] [1])));
        }
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        arr_54 [i_12] [i_12] = ((((arr_39 [i_12] [i_12] [i_12] [i_12] [i_12]) && (~var_2))));
        var_22 = (!var_7);
        arr_55 [12] [1] = ((((max(var_0, (arr_31 [i_12] [i_12] [i_12] [i_12])))) ? (((var_4 ? (var_7 < var_8) : ((max((arr_35 [i_12] [i_12]), var_1)))))) : ((((max((arr_0 [14]), (arr_36 [i_12] [i_12] [i_12] [i_12] [i_12])))) ? (~var_2) : var_2))));
    }
    /* LoopNest 3 */
    for (int i_13 = 2; i_13 < 18;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                {
                    var_23 = ((~(min((arr_32 [i_13] [i_13] [i_13] [i_15]), (arr_14 [i_13 + 1] [22] [13] [i_14])))));

                    for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
                    {
                        arr_68 [19] [19] [i_15] [i_16] [i_16] [i_14] = (min((((((arr_38 [i_13] [i_13] [i_13 + 2] [i_13 + 3] [i_14] [i_16] [i_16]) + 2147483647)) << (((((arr_39 [i_13 + 1] [i_13 + 2] [9] [i_16] [i_16]) + 24237)) - 30)))), ((((((var_6 ? (arr_47 [i_13]) : (arr_13 [i_13] [19] [19] [i_16])))) < var_5)))));
                        var_24 = (min((arr_44 [i_13 + 1] [9] [i_13 + 2]), var_5));

                        for (int i_17 = 3; i_17 < 20;i_17 += 1)
                        {
                            arr_71 [i_14] = (max((((arr_21 [i_13] [i_14] [i_14] [i_15] [1] [i_17 - 2]) % var_2)), (((~((max((arr_39 [i_13] [i_14] [22] [i_14] [i_17 - 1]), var_6))))))));
                            arr_72 [i_16] [i_14] [i_14] &= (arr_45 [i_13] [i_15] [i_17 - 2]);
                        }
                        for (int i_18 = 0; i_18 < 21;i_18 += 1)
                        {
                            arr_75 [i_13] [i_14] [2] [i_13] [i_13 + 2] [5] = (max(((((var_1 == var_6) == (arr_74 [i_14] [i_13 + 2])))), ((((-(arr_62 [i_13] [i_13] [i_14]))) & (arr_70 [i_13] [i_13 - 1] [15] [i_13] [i_13] [i_13 + 3])))));
                            arr_76 [i_13] [i_14] [19] [i_14] [i_14] = ((((-((var_1 ? var_6 : (arr_4 [i_16]))))) == (((arr_32 [13] [i_14] [i_15] [i_16]) ? ((var_8 ? var_2 : (arr_60 [i_14]))) : ((min(var_7, var_2)))))));
                        }
                        for (int i_19 = 1; i_19 < 20;i_19 += 1)
                        {
                            var_25 = (max(var_25, var_0));
                            var_26 = (((var_0 ? ((var_9 ? var_8 : (arr_62 [i_16] [i_14] [i_14]))) : ((((var_5 == (arr_56 [i_14] [i_14]))))))) != (((((arr_18 [i_13 - 2] [i_19 + 1]) == (var_8 | var_7))))));
                        }
                        for (int i_20 = 1; i_20 < 18;i_20 += 1)
                        {
                            arr_83 [i_13] [i_13] [i_13] [i_14] [i_14] = (((((arr_28 [i_13] [i_14] [i_20 - 1] [i_20 + 2] [i_13 + 3] [i_15]) | (arr_62 [i_13] [i_13] [i_14]))) - (((((var_2 < (arr_32 [0] [0] [i_15] [0]))) ? ((min(var_2, var_1))) : var_7)))));
                            var_27 = ((var_6 >= ((var_2 - (arr_44 [i_15] [8] [i_20 + 3])))));
                            var_28 *= ((((((arr_32 [i_13] [i_13] [i_13] [i_13 + 3]) / (arr_32 [i_13] [i_13] [i_13] [i_13 - 2])))) || (arr_80 [i_13] [i_13])));
                            var_29 = ((!(var_3 > var_0)));
                        }
                    }
                    for (int i_21 = 0; i_21 < 21;i_21 += 1) /* same iter space */
                    {
                        var_30 = (min(var_3, var_0));
                        arr_86 [i_13] [8] [i_15] [i_14] = (((-(arr_21 [i_13] [i_14] [i_13 + 1] [i_13] [11] [i_15]))) < var_0);
                    }
                    arr_87 [i_14] [i_14] [13] = ((var_9 ? -var_9 : (((((~(arr_16 [i_15] [i_15] [i_15] [i_15])))) ? ((var_5 ? (arr_59 [i_13] [i_14] [i_14]) : var_8)) : var_2))));
                    var_31 = ((-(max((arr_16 [i_13] [i_14] [i_14] [i_15]), var_2))));
                }
            }
        }
    }
    var_32 ^= var_9;
    #pragma endscop
}
