/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(((((1 ? 0 : 0))) ? 70 : ((4294967295 ? 0 : 0))))));
    var_13 = 856802098;
    var_14 = ((((min(((min(var_8, var_7))), -var_11))) ? 2206431790 : ((((((1299105430 ? var_4 : var_6)) >= ((var_5 ? var_6 : var_11))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_1] [i_2] [i_4] [i_4] [i_0 + 1] [i_4] = 5235;
                                var_15 = (max(var_15, ((max(((((min(20857, var_9))) | (((!(arr_5 [i_0] [i_2] [i_0])))))), -var_10)))));
                            }
                        }
                    }
                    arr_14 [i_1] [i_2] [i_1 + 1] [i_1] = (((~0) ? (arr_6 [i_2] [i_2] [i_0] [i_0]) : (+-24)));
                    arr_15 [10] |= ((1 ? 0 : 170));
                    arr_16 [i_1] [3] [3] = ((((max((8350 > var_10), -var_7))) ? (((245 >> (50093 - 50063)))) : (((((((arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 2]) == var_11)))) - ((var_7 / (arr_1 [i_0] [i_1])))))));

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        var_16 = var_4;
                        arr_19 [i_1] = (((var_11 * 1) && (((~(arr_11 [i_0] [i_1] [i_0] [i_5]))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        var_17 = ((25787 ? (arr_3 [i_0] [i_0] [i_0]) : ((7 / (arr_1 [i_6] [i_0])))));
                        var_18 = (max(var_18, (((var_7 != (!0))))));
                        var_19 |= (arr_12 [2] [i_1] [2] [2] [2] [i_6] [i_6]);

                        for (int i_7 = 3; i_7 < 9;i_7 += 1)
                        {
                            var_20 = -var_6;
                            arr_27 [i_1] [1] [5] [i_1] [i_1] [1] [i_1] = ((-13282246975071793248 || (arr_3 [i_2] [i_6 - 2] [i_2])));
                            var_21 = ((-(arr_10 [i_0 - 1] [i_1] [i_1] [1])));
                        }
                        for (int i_8 = 2; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            arr_32 [i_0] [i_1] [i_1] [i_2] [7] [i_1] [i_1] = ((((!(arr_22 [i_6] [i_0])))));
                            var_22 = var_10;
                            var_23 = (!var_2);
                            var_24 = (min(var_24, (var_4 == var_9)));
                        }
                        for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            arr_35 [i_9 + 1] [i_1] [i_2] [i_1] [i_0 - 2] = (arr_3 [9] [i_1] [i_0]);
                            var_25 = (arr_4 [i_9]);
                        }
                        for (int i_10 = 1; i_10 < 11;i_10 += 1)
                        {
                            var_26 = ((-(var_1 - 5164497098637758368)));
                            var_27 = (((8354 ? var_1 : 56535)));
                            arr_39 [i_10] [i_6] [i_1] [i_2 + 4] [i_1] [i_1] [i_0] = ((-var_0 ? ((var_1 ? var_8 : (arr_22 [i_1] [i_6]))) : ((((arr_26 [i_1] [i_6 - 2] [i_2] [4] [i_1]) && (arr_34 [i_0 - 2] [i_1 + 1] [i_2 + 4] [i_6 - 2] [i_10]))))));
                            var_28 = (max(var_28, ((((((-(arr_10 [i_0] [2] [i_6] [i_10])))) <= 5164497098637758368)))));
                        }
                    }
                }
            }
        }
    }
    var_29 &= ((-(((!((max(-25787, var_8))))))));
    #pragma endscop
}
