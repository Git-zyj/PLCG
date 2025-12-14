/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_19 |= var_0;

            for (int i_2 = 2; i_2 < 8;i_2 += 1) /* same iter space */
            {
                var_20 = (((((var_14 ? var_5 : var_8))) ? (((var_3 < (arr_7 [i_2] [i_2] [i_2] [i_2])))) : (arr_7 [i_2] [7] [i_2 + 1] [5])));
                var_21 = (var_12 * var_3);
                arr_10 [i_2] = ((((arr_3 [i_2]) ^ var_7)) >> ((((var_4 ? (arr_4 [i_0] [i_2 + 1]) : var_14)) + 15457)));
            }
            for (int i_3 = 2; i_3 < 8;i_3 += 1) /* same iter space */
            {
                var_22 = ((var_12 ? var_3 : var_6));
                var_23 = (-var_13 ^ -var_11);
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        {
                            var_24 = var_2;
                            var_25 = (((((arr_14 [i_0] [i_4] [i_5] [i_6]) ? var_2 : var_3)) * (var_6 < var_11)));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_26 = var_13;
                    var_27 ^= (var_8 & var_14);
                    var_28 = ((var_2 << (((arr_12 [i_0] [i_0] [i_4] [i_7]) - 39132))));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_29 = (var_16 % var_4);
                    var_30 |= (((var_15 < var_7) <= var_5));
                    var_31 = var_3;
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    var_32 = (((arr_4 [i_0] [i_1]) + var_1));
                    arr_31 [i_0] [i_1] [i_4] [i_4] [i_0] [i_9] = var_6;
                    var_33 = var_11;
                    var_34 = ((var_4 ? (arr_30 [i_0] [4] [i_9] [i_9] [i_4]) : var_15));
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    var_35 = ((var_8 ? var_16 : (!var_15)));
                    var_36 = arr_3 [7];
                    var_37 = ((var_6 >> (var_6 - 16777)));
                }
                arr_34 [i_0] [i_0] [i_4] = arr_0 [i_4];
                var_38 = (!var_13);
            }
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                var_39 *= (!var_2);
                arr_37 [i_0] [i_0] [5] [i_0] = ((var_16 ? var_15 : var_11));
            }
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
        {
            arr_41 [i_0] [i_12] = var_13;
            arr_42 [i_0] [i_0] [i_12] = var_16;
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    {
                        arr_48 [i_13] = -var_2;
                        var_40 = (var_6 < var_14);
                        var_41 = (((arr_29 [i_13] [i_13] [3] [i_0] [i_0] [i_13]) ? (arr_29 [i_13] [i_14] [0] [i_12] [i_13] [i_13]) : var_4));
                    }
                }
            }
            arr_49 [2] [i_12] [i_12] = var_3;
            arr_50 [i_0] [i_0] = (arr_25 [i_0] [i_12]);
        }
        arr_51 [i_0] [i_0] = var_8;
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 19;i_15 += 1)
    {
        var_42 ^= (var_7 >= var_5);
        arr_54 [i_15] = ((-var_0 ? (arr_53 [11]) : (arr_53 [i_15])));
    }
    var_43 = var_9;
    #pragma endscop
}
