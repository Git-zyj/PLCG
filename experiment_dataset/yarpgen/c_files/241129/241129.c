/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 18014398492704768;
    var_12 = var_6;
    var_13 &= ((-32760 % (min(((max(var_8, 7554222209963784515))), var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((((min(255, 1))) ? ((~(-4922164598028775808 - 4))) : (max((((!(arr_5 [i_0] [i_0] [i_0])))), ((-21683 ? var_6 : (arr_0 [i_0]))))))))));
                    var_15 = 96;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 17;i_4 += 1)
        {
            {
                arr_11 [i_3] [i_3] [i_4 + 2] = (max((((((((arr_8 [i_3] [i_4]) + var_0))) <= (~0)))), (arr_6 [i_3] [i_3])));
                arr_12 [i_3] [i_3] = ((!(((92 ? var_3 : 0)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_18 [i_3] [i_6] = ((!1152358554653425664) + ((var_7 ? (arr_7 [i_4 - 2]) : (arr_7 [i_4 + 2]))));

                            for (int i_7 = 1; i_7 < 17;i_7 += 1)
                            {
                                arr_22 [i_5] = (arr_14 [i_3] [i_3] [i_3] [16]);
                                arr_23 [i_7] [i_6] [i_5] [i_4 + 2] [i_3] = (min(139, (min((var_9 ^ 1950240358), ((var_2 ? 54720 : 37432))))));
                            }

                            for (int i_8 = 3; i_8 < 16;i_8 += 1)
                            {
                                arr_26 [i_3] [9] [i_3] [i_6 - 1] [i_8 - 3] [i_4] [i_4] = (arr_0 [i_5]);
                                arr_27 [i_3] [18] [i_5] [i_6 - 1] [i_8] &= (arr_14 [5] [i_5] [0] [i_8 + 3]);
                                var_16 += (~-18014398492704775);
                                var_17 = (min(((62249 - ((min(145, var_9))))), -1434736231));
                            }
                            for (int i_9 = 0; i_9 < 19;i_9 += 1)
                            {
                                var_18 += (var_9 - var_7);
                                var_19 += (((var_10 <= var_7) < 1950240358));
                                var_20 = (arr_16 [i_3] [i_3] [i_4 - 2] [i_6 - 1]);
                            }
                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 19;i_10 += 1)
                            {
                                var_21 *= (arr_10 [i_4] [i_10]);
                                var_22 = (((((var_9 ? (-2147483647 - 1) : -6))) ? (var_9 && 47116) : (18426 * 8200552000510003319)));
                            }
                            var_23 = (max(var_23, ((min(((5343398179709568439 | (arr_14 [i_3] [i_4] [i_5] [i_5]))), ((max(((var_8 >= (arr_6 [i_6 - 1] [i_6 - 1]))), 3019107254))))))));
                            arr_33 [i_6 - 1] [i_5] [i_4] [i_3] = var_6;
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    arr_37 [i_11] [5] [1] [i_3] = 1258065266503799758;
                    arr_38 [i_3] [2] [i_3] [14] = (min(var_3, (var_4 & 18014398492704764)));
                    var_24 ^= (max(-1950240358, 128));
                }
            }
        }
    }
    #pragma endscop
}
