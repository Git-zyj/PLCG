/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_0));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] = (((-63 + 2147483647) >> -32761));
        var_19 = ((!(arr_1 [i_0 + 1])));
        var_20 = (max(var_20, (arr_0 [i_0 + 1] [i_0 + 1])));

        for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_21 = ((1 ? 2062067116 : 765190971));
            arr_5 [16] = (arr_3 [i_0 - 1]);
            var_22 = (((arr_0 [i_0 + 1] [i_0 - 1]) >= (arr_0 [i_0] [i_1 + 1])));
            arr_6 [i_0] = (arr_3 [i_0 + 1]);
        }
        for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_23 = (arr_0 [i_0 - 1] [i_2 - 2]);
            var_24 = 255;
            var_25 *= -229284314;
            arr_9 [i_2] = (((((13102 ? 365561882 : 101))) || (((-(arr_4 [i_0 + 1]))))));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_26 = (-var_0 ^ ((var_13 ? var_10 : (arr_4 [i_0]))));
            arr_12 [i_0] [i_3] [i_0] = (((((arr_7 [i_0 - 1] [i_0 - 1] [i_0]) + 2147483647)) << (((arr_7 [i_0 - 1] [i_0 + 1] [i_0]) + 25967))));
            arr_13 [i_3] [i_0] = (~127);
            var_27 = var_3;
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = (((((9 ? var_2 : -1534312890))) ? (arr_0 [i_4] [i_4]) : (~167)));
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 8;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_28 = 1595733328;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_29 = ((1 + 242) ^ (((arr_26 [i_6] [i_5] [i_7] [9] [i_8] [i_5 - 1] [9]) ? -14463 : (arr_10 [i_5 - 4]))));
                                var_30 *= ((var_6 ? (arr_8 [i_4] [12]) : (arr_19 [i_4] [i_5 - 3] [i_8])));
                            }
                        }
                    }
                    arr_28 [i_6] [8] = ((9019084227637549455 >> (((var_10 ^ var_11) - 8926655744688203072))));
                    var_31 = (max(var_31, (1 < 1)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_35 [i_6] = ((-1933670335171970119 ? 10 : -8624362542436049431));
                                var_32 = var_17;
                                var_33 = (arr_29 [i_9] [i_6] [i_5] [i_4]);
                                var_34 = (((17085184283558929785 || var_6) ? 90 : ((((arr_0 [i_4] [i_5]) || (arr_22 [i_4] [i_4] [i_4] [7]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_35 = var_10;
    #pragma endscop
}
