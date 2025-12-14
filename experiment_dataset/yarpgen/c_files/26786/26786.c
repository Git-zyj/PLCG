/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_10 + (((((var_1 ? var_16 : var_17))) ? (((var_12 ? var_4 : var_1))) : ((var_6 ? var_0 : var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((((var_5 == var_2) ? var_16 : var_3)));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_0] = (((((-(min(var_14, var_5))))) ? ((var_7 ? ((var_17 ? var_16 : var_7)) : -var_3)) : (var_4 < var_12)));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((var_5 >> (((((((var_2 ? var_17 : var_8))) ? (~var_11) : var_3)) + 2038158241))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = var_17;
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_4] = (min(var_4, ((((var_17 ? var_1 : var_5)) - var_11))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 7;i_5 += 1)
                    {
                        arr_20 [i_0] [i_0] = (((var_12 + 2147483647) << (var_14 - 14546235429290495839)));
                        arr_21 [6] [i_1] [i_1] [4] [i_1] &= var_13;

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_5 - 1] [i_0] = ((var_14 <= (((var_13 ? var_3 : var_11)))));
                            arr_25 [i_0] [8] [i_0] [i_0] [i_0] [i_0] = ((var_8 * var_4) ? (var_11 + var_18) : var_5);
                            arr_26 [i_0] [i_0] [6] [i_0] [i_0] = ((var_18 << (var_2 - 452960973)));
                        }
                    }
                }
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min(var_1, (var_3 == var_17)));
                        arr_34 [i_0] [i_0] [i_7] [8] = var_10;
                    }
                    for (int i_9 = 2; i_9 < 9;i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_0] [i_1] [i_7] [i_0] = ((~(((((var_14 ? var_18 : var_18))) ? ((var_4 ? var_11 : var_5)) : (var_0 > var_16)))));
                        arr_38 [i_0] [i_7] [i_1] [i_0] = ((~(min(var_10, var_14))));
                        arr_39 [i_0] = var_18;
                    }
                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 9;i_10 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [i_0] [i_0] [6] = (((((var_18 ? var_5 : var_7))) ? var_10 : var_2));
                        arr_43 [9] [i_10] [i_0] [i_0] [6] [i_0] = ((var_6 > ((var_5 ? var_10 : -537785782864619558))));
                    }
                    arr_44 [i_0] [i_0] [i_0] [i_0] = (var_2 && var_14);
                }
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 10;i_13 += 1)
                        {
                            {
                                arr_56 [i_1] [i_13] |= ((((max((((var_13 + 2147483647) << (var_18 - 115))), var_16))) ^ ((9251009668978054177 ? 537785782864619556 : 248))));
                                arr_57 [i_0] [i_11] [i_1] [i_1] [8] [8] [i_1] = (((var_5 | var_2) ? (var_6 >> var_15) : ((var_2 ? var_2 : var_5))));
                                arr_58 [i_0] [i_0] [i_11] [i_12] [i_13] [i_0] [i_11 + 1] = var_16;
                            }
                        }
                    }
                    arr_59 [i_0] [8] [i_0] [i_0] &= (((var_1 ? var_1 : var_5)) >= -var_14);

                    for (int i_14 = 2; i_14 < 8;i_14 += 1)
                    {

                        for (int i_15 = 4; i_15 < 8;i_15 += 1)
                        {
                            arr_66 [10] |= ((((var_9 && ((max(var_9, var_14))))) ? (((var_18 && var_6) ? ((var_8 ? var_8 : var_0)) : var_10)) : ((((var_6 || (var_9 || var_12)))))));
                            arr_67 [i_0] [i_11] [i_0] [i_1] [i_15] = var_3;
                            arr_68 [i_15] [i_0] [i_11] [i_0] [i_0] = ((max((min(var_6, var_1)), (((var_15 << (var_11 - 2038158175)))))));
                            arr_69 [2] [2] [i_11] [i_11] [i_15] &= ((((var_0 + var_4) + (var_8 + var_4))) | (((var_13 ? var_16 : (max(var_8, var_2))))));
                            arr_70 [i_0] [i_0] [i_11] [2] [i_15] = ((!((((((var_2 ? var_5 : var_11))) ? (((var_15 << (var_10 + 26990)))) : var_5)))));
                        }
                        arr_71 [4] [i_14] &= ((((max(var_0, var_10))) && (var_17 || var_0)));
                        arr_72 [i_11] [i_0] [i_11] [6] [i_11 + 1] = ((var_11 ? var_17 : ((var_17 ? var_12 : var_5))));
                    }
                }
            }
        }
    }
    var_20 = var_7;
    var_21 = var_13;
    #pragma endscop
}
