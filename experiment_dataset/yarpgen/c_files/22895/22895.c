/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~var_4) || var_8));
    var_13 = var_11;

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_14 = (arr_1 [i_0 - 3]);

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_4 [i_1] [1] [1] = var_6;
            var_15 = (arr_1 [i_0 - 1]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [i_2] [i_0] &= (((((arr_0 [i_0]) ? var_6 : var_8)) < var_1));
            var_16 = (((arr_7 [i_0 + 2]) & (var_7 + var_1)));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_17 = (arr_11 [i_3]);
                            arr_20 [i_0 + 4] [i_3] [i_4] = max(22991, var_10);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_18 = (((arr_2 [i_7 - 1]) ^ var_7));
                        arr_25 [i_3] [i_3] = (arr_7 [i_8]);
                    }
                }
            }

            for (int i_9 = 1; i_9 < 12;i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_34 [9] [9] [i_3] [i_10] [i_11] = (arr_16 [i_11] [i_3] [i_11] [i_3]);
                            var_19 = (min(var_19, (((1912144493881778664 ? -22175 : -4063361968757311907)))));
                            var_20 = (max(var_20, ((min(1, -22992)))));
                            arr_35 [i_11] [i_10] [i_3] [i_3] [i_3] [i_3] [i_0] = (((min((max(-2, (arr_0 [i_0]))), (arr_31 [2] [i_9 + 1] [2] [i_10] [2] [i_11]))) ^ (((((arr_10 [i_0] [i_3] [i_9]) ? (arr_12 [i_0] [i_3] [i_3]) : (arr_0 [i_3])))))));
                        }
                    }
                }
                var_21 = (((max((arr_24 [i_3]), (((arr_23 [i_0] [i_3] [i_3] [1] [i_3] [1]) ? -3128700749051674493 : var_11)))) | (max((arr_7 [i_3]), (arr_9 [i_0])))));
            }
            for (int i_12 = 1; i_12 < 12;i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        {
                            arr_45 [i_14] [i_3] [i_3] [i_3] [11] = (((((-(!var_11)))) ? (((var_6 + var_1) | ((((arr_14 [i_3] [i_3] [i_3] [i_13]) ? var_2 : (arr_12 [i_0] [i_12] [i_0])))))) : var_0));
                            arr_46 [i_12 + 1] [i_12 + 1] [i_0] [i_12] [i_12] &= (max((arr_24 [i_14]), (((!((((arr_19 [i_0] [i_0 + 3] [i_0] [i_0] [7]) ? (arr_0 [i_0]) : var_6))))))));
                            var_22 = (((((((arr_11 [i_3]) && (arr_24 [i_3]))))) <= (((((var_11 ? (arr_43 [i_3] [i_3]) : var_0))) / var_9))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_15 = 1; i_15 < 11;i_15 += 1) /* same iter space */
                {
                    var_23 = (!var_1);
                    var_24 = var_2;
                    arr_50 [i_12 - 1] [i_12 - 1] [i_3] [i_12] [i_3] = (arr_26 [i_12] [i_3] [i_12 + 1]);
                    var_25 = 6607667718172949336;

                    for (int i_16 = 1; i_16 < 1;i_16 += 1)
                    {
                        var_26 ^= (arr_23 [i_0] [i_3] [i_0] [i_12] [i_0] [6]);
                        arr_53 [i_0] [i_3] [10] [i_16] &= (var_8 & var_2);
                        arr_54 [i_12] [i_3] = (((arr_43 [i_0 - 2] [i_3]) ? var_3 : -74));
                        var_27 ^= var_11;
                    }
                    for (int i_17 = 1; i_17 < 12;i_17 += 1) /* same iter space */
                    {
                        arr_59 [i_3] [i_3] [i_15] [i_15] = (arr_26 [i_12 - 1] [i_12 + 1] [i_12 - 1]);
                        var_28 = (min(var_28, ((((arr_2 [i_0 - 1]) || var_9)))));
                        arr_60 [i_0] [i_3] [i_3] = (arr_43 [i_12 - 1] [i_3]);
                    }
                    for (int i_18 = 1; i_18 < 12;i_18 += 1) /* same iter space */
                    {
                        arr_63 [i_3] [i_3] [1] [i_15 - 1] = var_8;
                        var_29 = var_6;
                        var_30 *= (arr_12 [i_15] [i_15 + 2] [i_15 - 1]);
                    }
                }
                for (int i_19 = 1; i_19 < 11;i_19 += 1) /* same iter space */
                {
                    arr_67 [i_0] [i_3] [12] = (min(var_2, ((max(1878045375, -23012)))));
                    var_31 = ((((((max((arr_41 [1] [i_3] [i_3] [i_12] [i_19]), (arr_10 [i_3] [i_3] [i_0 + 2])))) ? (!var_11) : (arr_48 [i_19 + 2] [i_19 + 1] [i_19] [i_19] [i_19 + 2]))) <= (((var_1 && ((((arr_39 [i_0] [3] [i_12 - 1] [i_19]) & (arr_28 [i_0] [i_0] [7])))))))));
                }
            }
        }
    }
    #pragma endscop
}
