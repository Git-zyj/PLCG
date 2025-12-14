/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 &= var_11;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [3] = ((~(((!(((arr_2 [i_1]) != (arr_7 [i_0] [8] [i_0]))))))));
                    var_14 = (min(var_14, (max((max((arr_2 [i_0]), (arr_3 [i_0]))), 86))));
                }
            }
        }
        var_15 *= (max(((var_7 ? -720811368 : (arr_3 [i_0]))), ((-(arr_3 [i_0])))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] &= (~((var_5 ? var_10 : (arr_10 [i_3]))));
        arr_12 [i_3] [i_3] = (max((max((min((arr_9 [i_3]), (arr_10 [i_3]))), (var_0 >= -42))), (max((arr_9 [19]), (((var_6 >= (arr_10 [i_3]))))))));
        var_16 = var_1;
        var_17 = (((max(((((arr_9 [i_3]) ? var_1 : var_9))), ((31329 + (arr_9 [i_3]))))) << (((((arr_10 [i_3]) ? (arr_10 [i_3]) : (arr_9 [i_3]))) - 871779651))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_18 &= var_1;
        var_19 = ((min((arr_9 [9]), (arr_9 [18]))));
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_20 = (((arr_15 [i_5]) << (((var_9 < (arr_9 [i_5]))))));

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_21 -= ((((((~(arr_14 [i_5] [i_5]))) + 2147483647)) << (((((arr_20 [i_5] [i_6]) + 694769581)) - 19))));
            arr_23 [i_5] [i_6] &= (!var_2);
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            arr_31 [i_8] [i_8] [i_8] [i_8] [i_6] [i_8] [i_8] = var_10;
                            arr_32 [i_8] [i_6] = (arr_30 [2] [2] [2] [2] [2]);
                        }
                    }
                }
            }
            arr_33 [i_5] [i_5] [i_5] &= var_9;
        }
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        arr_36 [i_10] = (-(((arr_10 [i_10]) - var_4)));
        var_22 ^= (max(-1, ((((((arr_34 [i_10]) ^ 41))) ? (min(7, 720811344)) : ((-2937 & (arr_14 [i_10] [i_10])))))));
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        var_23 = (((arr_14 [i_11] [i_11]) << (((min(((max(var_10, var_7))), (((arr_15 [i_11]) << (var_2 + 1702348231))))) - 41))));
        var_24 = ((-(!var_8)));
    }
    #pragma endscop
}
