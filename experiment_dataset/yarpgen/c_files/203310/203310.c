/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = (~var_15);
    var_21 |= (((((var_9 * var_9) % (max(var_16, 3366436887)))) > var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (arr_1 [i_1 - 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_22 &= (((((((arr_4 [i_0] [i_0] [i_2]) >= ((3366436889 ? (arr_5 [i_0]) : (arr_6 [i_2] [i_2]))))))) >= (arr_11 [i_1] [5] [i_1])));
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4] = (((arr_2 [i_0]) ? ((((!((((arr_14 [i_0] [i_0] [i_4]) ? (arr_1 [i_4]) : (arr_4 [i_0] [i_3] [i_0])))))))) : (max((((arr_3 [i_4] [i_3] [i_0]) ^ 3366436888)), var_7))));
                                arr_16 [i_0] [i_2 - 3] = (max((((arr_11 [i_2 - 2] [i_1 - 1] [i_2 - 3]) / (arr_11 [i_2 + 1] [i_1 - 4] [i_2]))), (arr_14 [1] [1] [1])));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] = 3366436915;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_23 += ((((((~928530408) / ((928530407 ? (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_1 - 2])))))) ? 3366436877 : ((min(3366436889, 928530430)))));
                                arr_24 [i_5] [i_1] [i_2] [i_5] = var_4;
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_24 -= ((!(928530408 > var_1)));
                            arr_31 [i_7] [i_1] [i_2 - 3] [i_7] [i_1] [i_7] = ((((max(928530401, (arr_9 [i_0] [i_1] [i_2 + 2] [i_0] [i_2 + 2])))) ? ((((!(((arr_7 [i_0] [3]) || var_2)))))) : 3366436898));
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            arr_35 [i_7] [i_0] [i_1] [i_1] [i_1] &= (((max(3366436866, (arr_32 [i_0] [i_0] [i_2 + 1] [i_9] [i_1 - 4]))) > (max(3366436903, (arr_3 [i_1 - 4] [i_1] [i_1 - 4])))));
                            var_25 = (arr_32 [i_0] [i_1] [i_0] [i_0] [i_9]);
                        }
                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 13;i_10 += 1)
                        {
                            var_26 = ((!(arr_7 [i_1 - 2] [i_2 - 3])));
                            arr_40 [i_7] [i_7] [i_2 + 2] [i_7] [i_10] = (((arr_21 [i_0] [i_0] [i_0]) || 3366436849));
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            arr_43 [i_7] [i_1] [i_2 + 2] [i_7] [i_11] = 3366436915;
                            arr_44 [i_7] [i_1] |= 928530401;
                            arr_45 [i_0] [1] [i_7] = 928530380;
                        }
                        var_27 &= (~928530401);
                    }
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        arr_49 [10] [i_1 - 4] = ((((arr_12 [i_1 - 3] [i_1] [i_1 + 1] [i_1 + 2] [i_2 + 1]) / (arr_22 [i_1] [i_1] [i_1 - 1]))));
                        arr_50 [i_0] [i_0] [i_2 - 3] [i_2 - 3] = arr_13 [i_0] [i_1] [i_1] [i_1] [13];
                        var_28 += (max((arr_6 [i_2 - 1] [i_0]), 928530371));
                    }
                }
            }
        }
    }
    #pragma endscop
}
