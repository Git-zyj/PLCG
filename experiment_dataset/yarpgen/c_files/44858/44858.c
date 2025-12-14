/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((~(85 ^ 26957))) + 2147483647)) >> ((((1935843599 ? var_4 : ((1 ? 1327554091 : -1935843590)))) - 100))));
    var_20 = var_2;
    var_21 = (((((var_12 ? var_13 : -1935843590)) / (255 - -1935843590))));
    var_22 = (max(var_4, var_17));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] |= (((~(arr_4 [i_0] [i_1]))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] [i_2] = (arr_0 [i_0] [i_0]);

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_23 = (((arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) - 255));
                        arr_12 [i_0] [i_1] [i_1] [i_3 - 1] = (((arr_7 [i_2]) ? var_16 : var_18));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_24 = var_8;
                        arr_17 [i_1] = ((-28726 - (arr_7 [i_0])));
                        var_25 = 1935843589;
                        var_26 += (arr_11 [i_0] [i_0] [i_1] [i_2] [i_4]);
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_27 = (max(var_27, ((((38595 ? 193 : 8179303224762073365))))));
                        arr_21 [i_1] = (arr_6 [i_2]);
                        arr_22 [i_0] [i_1] [i_0] [i_5] |= ((var_12 <= (arr_10 [i_0] [i_5])));
                    }
                }
                for (int i_6 = 2; i_6 < 8;i_6 += 1) /* same iter space */
                {
                    var_28 = (min(var_28, (((var_2 ? (((arr_11 [i_6 + 2] [i_6 - 2] [i_6] [i_6] [i_6 + 2]) ? 201326592 : (arr_20 [i_6 - 2] [i_6 + 3] [i_6 - 1] [i_6 + 3]))) : (arr_24 [i_0] [i_0] [i_0] [i_0]))))));
                    var_29 |= var_6;
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 8;i_7 += 1) /* same iter space */
                {
                    var_30 *= (arr_19 [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_7 - 1] [i_7 - 2] [i_7 + 1]);
                    var_31 = 130023424;

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        arr_33 [6] [i_1] [i_1] [i_8] [i_8] [i_8] = (((arr_4 [i_1] [i_7 + 3]) ? 1935843612 : var_16));
                        arr_34 [i_7] [i_1] [i_7] [i_7] [i_0] [i_1] = 4194303;
                        arr_35 [i_0] [i_1] [i_0] = (((arr_30 [i_0] [i_0] [i_7 + 3] [i_8] [i_8]) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_1]) : (arr_15 [i_8] [i_8] [9] [9] [i_1])));
                        var_32 &= -1935843599;
                    }
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        arr_38 [i_1] = (((arr_23 [i_7 + 2] [i_1] [i_9 - 1]) - var_10));
                        var_33 = (28731 > 16383);
                    }
                }
                var_34 = -146;
                arr_39 [i_0] [i_1] = (~((-(arr_26 [i_0] [i_1] [i_1] [i_1]))));
                arr_40 [i_1] = (((var_10 + (-1935843613 * -1))));
            }
        }
    }
    #pragma endscop
}
