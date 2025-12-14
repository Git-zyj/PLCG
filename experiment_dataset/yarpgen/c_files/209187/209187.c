/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_13 += (((arr_0 [i_0 - 1] [i_0 - 1]) || (arr_0 [i_0 - 1] [i_0 - 1])));
        var_14 = (max(var_14, (((((((arr_1 [12]) + var_7))) && (arr_0 [i_0 - 1] [i_0 + 1]))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_15 = ((((((((((arr_1 [i_1]) && (-127 - 1))))) * -2114588074))) || (16 + 22)));

        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_16 = var_1;
                            var_17 = (((var_11 || (((arr_8 [i_4] [i_3] [i_2] [i_1]) && var_0)))));
                        }
                    }
                }
            }
            arr_14 [i_2] [i_1] [i_2] &= var_10;
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            var_18 = var_11;
            var_19 = 64;
            arr_18 [i_1] [i_6] [i_6] = ((3006100583383344600 | ((0 * (arr_3 [i_1] [8])))));
            arr_19 [6] [6] [i_6] = 2680773177;
        }
        arr_20 [i_1] = (var_3 * -2146230847);

        /* vectorizable */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_23 [i_1] [i_1] [i_7] = 115;

            for (int i_8 = 2; i_8 < 8;i_8 += 1) /* same iter space */
            {
                arr_27 [i_1] [i_7] = -18102;
                arr_28 [i_1] [i_1] [i_1] [i_1] = ((104 || (var_4 || var_2)));
            }
            for (int i_9 = 2; i_9 < 8;i_9 += 1) /* same iter space */
            {
                arr_31 [i_1] [i_7] [i_9] = ((813251356 / (arr_8 [i_9 + 1] [i_9 - 1] [i_9 + 2] [i_9 + 2])));
                var_20 *= var_9;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 7;i_11 += 1)
                    {
                        {
                            arr_37 [i_11] = (((arr_26 [i_9 - 2] [i_11] [i_11]) | -32604));
                            var_21 *= (3405775571 || var_8);
                        }
                    }
                }
            }

            for (int i_12 = 3; i_12 < 6;i_12 += 1)
            {
                arr_40 [i_1] [i_1] [i_7] [i_12] |= (4294967287 - (arr_3 [i_1] [i_12 - 2]));
                arr_41 [i_1] [i_1] [3] = var_7;
            }
        }
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            var_22 = (-185514069 / -1280709112);
            var_23 = ((var_5 >= (((arr_21 [i_1]) | 128))));
        }
    }
    var_24 = var_0;
    #pragma endscop
}
