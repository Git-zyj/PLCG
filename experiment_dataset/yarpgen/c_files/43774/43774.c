/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 *= ((var_1 || (((arr_5 [i_1] [i_0]) || 0))));
                var_17 = (((!85) * ((((!(arr_3 [i_1] [i_0]))) ? (((((arr_2 [i_1]) || -3)))) : (32767 / 3398226330)))));
            }
        }
    }
    var_18 = ((((1920 * (var_9 / var_6))) * (!var_1)));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_19 -= (max((((!(arr_7 [i_2 - 2])))), (max((arr_6 [2]), (arr_7 [i_2])))));
                arr_13 [i_2] = ((((((arr_3 [i_2] [i_2 - 1]) ? (~var_7) : (1291 / var_0)))) ? ((~(arr_11 [i_2 - 2] [i_2 - 2]))) : ((((((arr_7 [i_2]) / var_15)) / ((max(var_11, (arr_2 [i_3])))))))));

                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    arr_17 [i_2] [3] [4] [i_3] = 415249984;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_20 = ((((arr_23 [8] [8] [i_3] [i_4] [i_2] [i_4] [i_6]) / (-12443 || -519166936))));
                                var_21 = (((((~(arr_1 [i_4 + 1] [i_2]))))) || ((max((0 / 8589934528), ((min(var_1, (arr_6 [i_2]))))))));
                                var_22 *= var_7;
                            }
                        }
                    }
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    var_23 -= ((+(max((arr_16 [i_2 - 1] [i_3] [i_7 - 1]), (((arr_19 [i_7] [i_3] [i_3] [i_2] [1]) ? var_9 : var_14))))));
                    arr_28 [7] [i_2] [4] [i_2 + 1] = (((((~((0 | (arr_4 [i_2] [i_2])))))) ? (max(747223690, -519166941)) : (min(747223711, (((arr_19 [3] [3] [i_2] [i_2] [0]) / var_15))))));
                    arr_29 [i_2] [i_2] = (~(min((((1 || (arr_19 [i_7] [i_3] [i_2] [i_2] [1])))), (max((arr_26 [i_2] [1] [i_2] [i_7]), var_14)))));
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_39 [i_2] [i_2] = ((!((var_8 && (arr_15 [i_2 + 1] [i_2 + 1] [i_2])))));
                                arr_40 [i_2] [i_2] [i_8] [i_2] [i_2] = ((((124 ? (((1542596950 || (arr_16 [i_10] [i_3] [i_3])))) : -var_5))) ? (12 || 1087863214) : var_15);
                                arr_41 [i_2] [i_2] = var_10;
                                var_24 = 198727076;
                                var_25 = (min(var_25, (((((arr_25 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 2]) * var_11))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        var_26 &= (var_13 - 6850362794782197161);
                        var_27 *= (arr_19 [i_2] [i_2] [i_8] [i_11] [i_8]);
                    }
                    for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
                    {
                        arr_47 [6] [2] [6] [6] &= (arr_43 [5] [5] [1] [1] [i_8] [1]);
                        arr_48 [i_2] [i_2] [i_2] [i_2] = ((max((13946 || -9223372036854775801), ((!(arr_5 [1] [1]))))));
                    }

                    for (int i_13 = 1; i_13 < 7;i_13 += 1)
                    {
                        var_28 = (((!(arr_27 [i_2] [i_2 + 1] [i_2] [i_2 + 1]))));
                        var_29 = (min((((var_14 || var_11) / 1093921632)), (min(((min(var_5, (arr_50 [i_2] [i_2] [i_2] [i_3] [i_13 + 2] [i_13])))), (arr_30 [i_13 + 1] [i_3])))));
                    }
                }
                arr_52 [i_2] [i_2] [i_2] = var_11;
            }
        }
    }
    var_30 *= var_5;
    #pragma endscop
}
