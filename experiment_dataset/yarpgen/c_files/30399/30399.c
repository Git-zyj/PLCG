/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_18 = (min(6984562231541465811, 1999798753));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_19 &= 0;
                    var_20 = ((var_10 ? var_9 : (arr_4 [4] [4])));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_21 = (arr_8 [i_3] [i_0] [i_3] [i_0]);
                    arr_12 [i_3] [i_0] = var_16;
                }
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    var_22 = ((-8318679752944303340 / (((~(arr_10 [i_4 - 1] [i_1] [i_1] [i_0]))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_23 = arr_4 [i_0] [i_4];
                        var_24 = (min(var_24, (arr_13 [i_0] [i_1] [i_4 - 2] [i_5])));

                        for (int i_6 = 3; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_25 = 1999798753;
                            arr_21 [i_0] [i_5] [i_4] [i_5] [i_0] &= ((0 ? 0 : 587832361));
                        }
                        for (int i_7 = 3; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_26 += ((-(~-8)));
                            var_27 = (((((1607921446 ? -24 : -7906153283005543459))) ? -7906153283005543459 : -15196));
                            var_28 = (i_7 % 2 == zero) ? (((15683 >> (((arr_22 [i_7 - 1] [i_7]) - 50534))))) : (((15683 >> (((((arr_22 [i_7 - 1] [i_7]) - 50534)) + 15774)))));
                        }
                        for (int i_8 = 3; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_5] [i_0] [i_0] [i_8] [i_0] [i_5] = (~0);
                            var_29 &= (-201392242 * (!-15197));
                            arr_27 [2] [i_4] = -6;
                        }
                        var_30 = 26246;
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        var_31 = ((((-(arr_25 [1] [0] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 2]))) * (!8192)));

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_32 = (((arr_11 [i_0] [i_10]) >> (((arr_11 [i_0] [i_0]) - 26238))));
                            arr_32 [1] [i_9] = 21032;
                            arr_33 [i_0] [i_0] [5] [i_9] [5] [i_10] [1] = var_17;
                            var_33 = (min(var_33, (arr_11 [i_0] [i_0])));
                        }
                        arr_34 [i_0] [i_1] [i_9] [i_4] [4] = (((0 > 37229) ? (((var_0 / (arr_28 [0] [6] [i_4 + 2])))) : (((arr_29 [i_1] [1] [i_9]) ? (arr_6 [4] [i_4 - 1]) : 112))));
                        var_34 = (((arr_16 [i_0] [i_1] [i_4 - 1] [7]) ? -21846 : var_15));
                    }
                }
                var_35 &= 15175;
                var_36 += (arr_18 [i_0] [1] [i_0] [9]);
            }
        }
    }
    var_37 = min((((15196 ? 15196 : 0))), 15196);
    var_38 *= ((~(var_0 < var_14)));
    var_39 = var_14;
    #pragma endscop
}
