/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((~((var_17 ? var_12 : (var_11 && var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_20 &= ((-(((arr_2 [i_2]) ? (((((arr_4 [i_2]) && 1897544045)))) : ((5179374236803302794 ? 1897544047 : var_5))))));
                            var_21 ^= 3556305488;
                            var_22 = 2097151;
                            var_23 = max(((var_2 ? 32745 : 2097151)), (((~(-2147483647 - 1)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_24 *= 3793;
                            var_25 = var_10;

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 12;i_6 += 1)
                            {
                                var_26 = (max(var_26, (((!(arr_9 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 1]))))));
                                arr_19 [i_4] [8] = (((arr_12 [i_4 - 1] [i_4 + 1] [i_4 - 1]) ? (arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1]) : 2397423232));
                                var_27 = (arr_14 [i_4 - 1]);
                            }
                            arr_20 [i_0] [i_1] [3] [i_5] = (arr_7 [i_5] [i_4] [i_1] [i_0]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 19;i_8 += 1)
        {
            {
                arr_27 [i_8] [i_8] [i_8] = (((!58) / 54176046));
                var_28 += ((2129525921 ? ((16380 ? (arr_23 [i_8 - 1] [i_7] [i_7]) : 10171)) : (2147483647 / 49183)));

                /* vectorizable */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    arr_31 [i_7] [i_7] &= (((arr_23 [i_8 + 1] [i_8 + 1] [i_8]) | (arr_29 [i_8 + 1] [i_7] [i_7] [i_7])));
                    var_29 &= ((((1897544060 ? (arr_25 [i_7]) : (arr_29 [i_9] [i_7] [i_7] [i_7]))) | (arr_23 [i_9] [i_9] [i_8 + 1])));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_36 [i_8] = ((~((7996 ? var_1 : (arr_35 [i_7] [i_8] [i_9] [i_10 + 1] [18] [1])))));
                                var_30 = ((var_15 ? var_1 : 12474876605785148996));
                                var_31 &= (((arr_23 [i_8 - 1] [i_11 - 2] [i_9]) && (arr_33 [i_8 - 1] [i_11 - 2] [i_11 - 2] [i_10 - 1] [i_9] [i_10 + 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 18;i_13 += 1)
                        {
                            {
                                var_32 = arr_29 [i_9] [i_8] [i_8] [i_8 + 1];
                                var_33 = 54176046;
                                arr_42 [i_7] [i_8] [i_7] [i_7] [i_7] = 1897544079;
                                var_34 += ((!(arr_38 [i_13] [i_13] [i_13] [0] [i_13 + 2] [i_13])));
                                var_35 *= ((-1271 && (arr_29 [i_13 + 1] [i_12] [i_12] [i_12 - 2])));
                            }
                        }
                    }
                    arr_43 [i_8] = (arr_34 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 - 1]);
                }
                for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
                {
                    var_36 = (max(var_36, 32767));
                    var_37 = ((var_16 && ((min((arr_37 [i_8 - 1] [6] [i_8 - 1] [i_7]), -107)))));
                }
                for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
                {
                    var_38 = 54176032;
                    arr_49 [i_7] [i_8] [i_7] &= 14405018;
                }
            }
        }
    }
    #pragma endscop
}
