/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 *= var_3;
        arr_2 [i_0] = ((var_10 - var_6) ? ((var_2 ? var_6 : var_9)) : var_12);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = ((-16 ? 0 : 15));
        var_17 = ((var_3 ? var_12 : var_10));
    }
    var_18 = (((((((max(var_4, var_14))) ? (var_12 + var_14) : var_4))) ? (var_10 == var_5) : var_6));

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_19 *= var_10;
        var_20 = (max(var_20, (((var_14 & ((max(((var_4 ? var_10 : var_0)), (var_2 >= var_8)))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_13 [1] [i_3] [i_3] [i_3] &= var_0;

                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            arr_22 [9] [i_3] [i_4] [i_5 + 1] [17] = (max((max(var_11, ((var_0 ? var_14 : var_13)))), var_2));
                            var_21 |= ((!(!var_14)));
                        }
                        for (int i_7 = 4; i_7 < 15;i_7 += 1)
                        {
                            arr_25 [i_2] [14] [14] [i_5 + 1] [2] [i_4] [i_4] = -16;
                            arr_26 [i_3] [i_3] [i_4] [i_4] [15] [i_2] [i_2] |= ((~((var_9 >> (var_9 - 87)))));
                        }
                        arr_27 [i_2] [i_5 - 1] [i_4] [i_5 - 1] = -18;

                        for (int i_8 = 3; i_8 < 16;i_8 += 1)
                        {
                            var_22 += (min(var_12, ((var_13 ? var_13 : var_10))));
                            var_23 ^= var_9;
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_24 = ((41330 * (var_9 / var_7)));
                            var_25 = (max(var_25, var_5));
                            var_26 = (((((var_3 ? ((max(var_1, var_9))) : var_6))) / var_8));
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            arr_35 [i_4] [i_3] [i_4] [i_5] [12] [i_3] [i_10] = ((((((var_1 ? var_7 : var_1))) * (min(var_10, var_4)))) + ((((!(var_9 / var_0))))));
                            var_27 = (var_10 / var_14);
                        }
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                    {
                        arr_38 [8] [i_11] [5] [i_3] = ((((var_6 ? var_4 : var_11)) | var_12));
                        arr_39 [3] [6] [i_4] [i_11] = (var_8 && var_10);
                        arr_40 [i_11] [i_11] [8] = (max(((((((var_8 ? var_12 : var_9))) ? var_9 : var_1))), ((var_0 ? ((var_9 ? var_14 : var_8)) : (var_1 | var_14)))));
                        var_28 = ((((!(var_9 ^ var_12))) ? (((var_0 >= ((var_5 ? var_0 : var_5))))) : var_11));
                        var_29 *= var_1;
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        var_30 = var_3;
                        arr_44 [5] [i_12] [i_4] [i_12] = var_6;
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    {
                        arr_55 [i_14] [i_15] [i_15] &= (((var_12 < var_4) << (((((var_7 != var_6) * var_1)) - 14152))));

                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            arr_58 [2] [i_14] [i_15] [i_15] [i_17] [i_13] [i_15] = ((((max(314838958, 9956))) >= -15));
                            var_31 ^= var_6;
                        }
                        arr_59 [i_13] [i_13] [i_13] [i_13] [i_13] = max(var_4, (var_11 >= 0));
                        var_32 *= ((var_1 + ((11 ? 15 : 16))));
                    }
                }
            }
        }
        var_33 *= var_7;
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 20;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 20;i_19 += 1)
            {
                {
                    arr_66 [i_13] = var_2;
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 20;i_21 += 1)
                        {
                            {
                                arr_72 [i_13] [i_19] [i_18] &= var_9;
                                arr_73 [i_13] [i_18] = var_5;
                                arr_74 [i_13] [i_13] [i_19] [8] [i_20] = (((var_7 < var_14) * ((((max(var_1, var_7))) ? var_6 : var_10))));
                            }
                        }
                    }
                }
            }
        }
        var_34 = (max(var_34, ((max(((~(~var_4))), ((var_5 ? var_7 : var_8)))))));
    }
    #pragma endscop
}
