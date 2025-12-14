/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = (((~var_1) ? (((arr_5 [i_1 - 1] [i_1 - 1] [i_0]) ? (arr_5 [i_1 - 1] [i_1 - 1] [i_0]) : (arr_5 [i_1 - 1] [i_1 - 1] [i_0]))) : ((1 ? 1 : (arr_5 [i_1 - 1] [i_1 - 1] [i_0])))));
                var_17 = ((-(((arr_3 [i_0]) ? 1 : (arr_3 [i_0])))));
                var_18 = 1;
            }
        }
    }
    var_19 = (var_1 % var_15);
    var_20 = (((!var_11) < var_4));
    var_21 = (max(var_4, var_7));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_3] &= (arr_7 [1] [i_2]);
                arr_12 [i_3] [i_3] = (((min(0, 1)) ? (arr_10 [i_3 + 2] [i_2]) : 1));

                for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_18 [7] |= (min((arr_17 [i_5] [i_3]), ((((arr_7 [i_4] [i_4 + 1]) || ((min((arr_16 [i_2]), var_7))))))));
                        var_22 = (min(var_22, (((((((var_15 ? 1 : 1)))) ? (min(((1 ? 1 : var_5)), (arr_9 [i_3 + 1]))) : (((min(58350, (arr_17 [i_3] [i_5]))))))))));
                    }

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_23 = (((arr_9 [i_3 + 2]) != (((arr_9 [i_3 + 2]) ? (arr_9 [i_3 + 1]) : (arr_9 [i_3 + 2])))));
                        var_24 = ((!((min((arr_17 [i_4 - 1] [i_4 - 1]), 1)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        arr_24 [i_7] [1] [1] [i_3] [i_2] = ((203 ? ((1 ? 1 : 0)) : 44905));
                        var_25 = ((~(arr_23 [i_3 + 2])));
                    }
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        var_26 = (max(var_26, (((((((((63889 ? 63904 : var_6))) ? var_9 : ((min((arr_17 [i_2] [i_8]), (arr_9 [i_4]))))))) ? (((arr_13 [i_2] [i_3 + 1] [i_3 + 1]) ? 659 : (arr_21 [i_2] [i_3 + 2] [i_4] [i_8 + 1]))) : ((((((arr_20 [i_2] [0] [i_2] [i_2] [i_2]) ? 5505 : var_13)) > (198 > 1)))))))));
                        arr_28 [i_2] [i_3 + 2] [i_2] = arr_15 [i_2] [i_2];
                        arr_29 [i_2] [i_2] [i_2] [i_2] = ((((((arr_14 [i_3 + 1] [i_3 - 1] [i_4 - 1]) - 63878))) ? ((max((arr_21 [i_2] [i_3 - 1] [i_3 - 1] [i_4 + 1]), (arr_21 [i_4] [i_3 + 2] [i_2] [i_4 + 1])))) : ((8 - ((max(var_11, 209)))))));
                    }
                    var_27 = var_9;
                    var_28 ^= ((7 ? 169 : ((61103 ? 1 : ((0 ? 2505 : -5505))))));
                    var_29 = 5505;
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 16;i_9 += 1) /* same iter space */
                {
                    var_30 = ((2505 ? -2496 : 63890));
                    var_31 = ((arr_14 [15] [15] [i_3 + 2]) || (arr_14 [i_2] [i_3] [i_3 + 2]));
                }
                for (int i_10 = 1; i_10 < 16;i_10 += 1) /* same iter space */
                {
                    arr_36 [15] [15] [i_2] [i_2] = ((((min(2473, -28390))) + ((max(-5481, 1)))));
                    arr_37 [i_2] [i_2] = ((-5514 ? (((min(0, -9708)))) : ((1 ? 61555 : ((5509 ? 9738 : 0))))));
                    arr_38 [i_10] [i_2] [i_2] = (((arr_22 [i_10 + 2] [i_10 + 1] [i_3 + 2] [i_3 - 1]) ? var_8 : (((arr_22 [i_10 - 1] [i_10 - 1] [i_3 + 2] [i_3 - 1]) ? (arr_22 [i_10 - 1] [i_10 + 1] [i_3 + 1] [i_3 + 2]) : (arr_22 [i_10 + 1] [i_10 - 1] [i_3 - 1] [i_3 - 1])))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    arr_42 [i_2] [i_11] = 1;
                    var_32 = (min(var_32, var_12));
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 4; i_13 < 16;i_13 += 1)
                    {
                        {
                            var_33 = (((~(arr_19 [i_3]))));

                            for (int i_14 = 2; i_14 < 15;i_14 += 1)
                            {
                                arr_51 [i_14] [i_14] [i_14] [i_13] [i_14] [i_14] = (((min(-20200, (arr_44 [i_14 + 2] [i_3 - 1])))));
                                var_34 = (min(((1 ? var_15 : (arr_13 [i_14 - 2] [i_14 - 1] [i_14 - 1]))), ((((min(-7964, 65519))) ? (((arr_41 [i_14] [i_13] [i_12] [i_2]) ? (arr_39 [13] [15] [15]) : var_11)) : ((13 ? (arr_27 [i_2] [i_3 + 1] [i_12] [i_13]) : 12))))));
                            }
                            var_35 &= (((-13 & 13) ? (var_11 & var_4) : (min((~-12), ((-1 ? (arr_22 [11] [i_3] [i_12] [i_13]) : var_1))))));
                            var_36 = 1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
