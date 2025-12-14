/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_14 [0] [i_1] [i_0] [i_3 - 1] [i_4] = var_10;
                            arr_15 [i_0] [i_1] [i_0] = (((((~(arr_7 [i_0] [2]))) + 2147483647)) >> ((((arr_0 [i_0] [i_4]) >= 2))));
                            var_11 = var_7;
                            arr_16 [i_2 + 1] [i_3] [i_0] = (((((var_2 % (arr_8 [i_0] [13] [i_2] [i_0] [i_3] [i_4])))) ? (((arr_0 [i_0] [i_0]) | var_2)) : (var_3 ^ 238)));
                            arr_17 [12] [i_3] [i_0] [i_1] [12] = (((((255 ? 40 : 2))) ? (arr_7 [i_1] [6]) : var_7));
                        }
                    }
                }
                var_12 = var_9;
                arr_18 [19] [i_1] [i_1] [i_0] = (((arr_12 [i_1] [i_2 - 2] [i_2 - 1]) ^ (arr_12 [i_2] [i_2 - 2] [i_2])));
            }
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                arr_22 [12] [i_1 - 1] [i_5] [i_5] &= (2124110792 == var_8);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_13 = (arr_12 [i_6] [i_1] [i_0]);
                            var_14 = ((var_7 + (arr_10 [i_5 + 1] [14] [14] [14])));
                        }
                    }
                }
            }
            arr_28 [i_0] = ((var_1 ? (((arr_21 [i_0] [8]) ? (arr_26 [i_0] [i_0] [i_0] [i_1 - 1] [i_1]) : (arr_0 [i_0] [i_1]))) : (~8)));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_15 = (arr_31 [i_0]);
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 21;i_10 += 1)
                {
                    {
                        var_16 = (arr_23 [i_10 + 1] [i_10 - 1] [13] [i_10]);
                        var_17 = var_0;
                        var_18 &= ((~(arr_11 [i_10 - 1] [i_10] [i_10 + 1] [i_8] [i_10])));
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_19 = ((var_0 ? (arr_1 [i_0]) : (arr_19 [i_0] [i_11] [i_11])));
            arr_40 [i_0] [i_0] [i_0] = ((+((((arr_37 [i_0] [i_0] [i_0] [i_0] [i_11] [i_11]) || (arr_26 [i_11] [i_11] [i_0] [i_0] [i_0]))))));
        }
        var_20 = (((arr_20 [i_0] [i_0] [i_0]) && (var_0 == 236)));
        var_21 = (arr_31 [i_0]);
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                {
                    arr_47 [i_13] [i_13] = var_1;
                    var_22 = ((((var_4 != (arr_43 [i_12]))) ? var_5 : (((arr_26 [i_12] [2] [i_13] [i_12] [i_14]) / var_2))));
                }
            }
        }

        for (int i_15 = 2; i_15 < 21;i_15 += 1)
        {
            arr_50 [19] [i_15] [i_15] = (((arr_27 [7] [i_15] [i_12] [i_15]) - ((var_7 - (arr_1 [i_15])))));
            var_23 = (min(var_23, ((((arr_29 [i_12] [i_15 - 1] [14]) > var_10)))));
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 2; i_16 < 12;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 14;i_17 += 1)
        {
            {
                arr_57 [i_16 - 1] [i_16 - 1] [i_16] = ((+((((~var_5) <= var_3)))));
                var_24 = (min(var_24, ((((((!var_1) && (((arr_13 [i_16] [i_16] [9] [i_17] [9]) || 48)))) && (((arr_8 [i_16] [i_16 - 2] [i_17] [6] [i_17 + 1] [i_17]) && ((254 && (arr_23 [i_16 - 1] [i_16] [i_16] [i_16]))))))))));
                var_25 += var_4;
                var_26 = (arr_6 [11] [i_16] [i_16] [i_16]);
            }
        }
    }
    var_27 = ((13 ? (~-7027773359293985132) : var_0));
    var_28 = ((~((((max(var_10, var_4)) == var_5)))));
    #pragma endscop
}
