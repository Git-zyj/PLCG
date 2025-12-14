/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_14 = ((max((arr_0 [i_0 - 1]), var_3)));
        var_15 = (max(var_15, var_13));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_16 = ((((max(((~(arr_3 [i_1]))), var_9))) ? ((((((var_6 ? var_2 : -15831))) && ((max(-29603, 88)))))) : -15836));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 6;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_17 = max((((arr_3 [i_3 - 1]) ? (arr_3 [i_3 + 1]) : (arr_3 [i_3 - 2]))), (arr_3 [i_3 - 1]));
                        var_18 = (max((arr_2 [i_4]), (min((-15842 / var_12), ((min(var_0, (arr_8 [i_1]))))))));
                        arr_13 [i_1] [i_2] [i_3] [i_4] &= (((93 ? (arr_4 [i_3 + 3] [i_4] [i_4]) : var_12)));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 6;i_7 += 1)
                {
                    {
                        var_19 += 6494672237330872738;
                        var_20 = ((var_12 ? var_7 : (arr_14 [i_1] [i_5] [i_6 + 1])));
                    }
                }
            }
            var_21 |= var_5;
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_22 = ((~(((((arr_1 [i_1]) / 26618)) << (var_12 - 46830)))));
            var_23 = (max(var_23, var_8));
            arr_23 [i_8] [i_8] = (max((((arr_19 [i_1] [i_1] [2] [i_8]) << (((15838 - var_4) - 15902)))), ((166 ? ((var_10 ? 15838 : var_3)) : -100))));
            arr_24 [i_8] [i_8] = var_7;
            var_24 = var_2;
        }
        var_25 &= ((((!((((arr_21 [i_1] [i_1] [i_1]) ? (arr_18 [i_1] [6] [i_1] [i_1]) : -17))))) ? (((arr_21 [i_1] [i_1] [0]) << (((arr_3 [i_1]) - 3151770218390259451)))) : ((((~var_6) % ((var_11 / (arr_0 [5]))))))));
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_26 = (((((var_13 ? (arr_28 [i_9]) : -15851))) ? (((arr_28 [i_9]) ? (arr_28 [i_9]) : (arr_28 [i_9]))) : (((arr_28 [i_9]) ? (arr_28 [i_9]) : (arr_28 [i_9])))));
        var_27 = (((((((min(var_0, (arr_25 [i_9] [i_9])))) + 2147483647)) << (!-15841))));

        for (int i_10 = 2; i_10 < 20;i_10 += 1)
        {
            var_28 = (((((max((arr_30 [i_10] [i_9]), -27)))) ? (arr_26 [i_10]) : -var_9));
            var_29 = (((min(var_12, var_8))) ? (max((arr_29 [i_10 - 2]), 4681137538874088305)) : ((-15840 ? (arr_29 [i_10 - 1]) : (arr_29 [i_10 - 1]))));
        }
        var_30 = (max(((((((arr_27 [14]) && var_3))) << ((((arr_31 [i_9]) > (arr_31 [i_9])))))), 121));
    }
    var_31 = ((var_7 ? (min(var_9, ((min(93, var_5))))) : var_4));
    var_32 = (min(var_32, ((((!(((var_10 ? 162 : var_3))))) ? var_2 : ((((var_9 ? var_3 : 16792)) * (((var_2 << (var_11 + 4187804557134305117))))))))));
    var_33 = (((((var_10 & var_9) ? 20970 : ((9655314206519750448 ? 17022695415330379487 : 11952071836378678878)))) * (((((var_2 > var_12) && var_2))))));
    #pragma endscop
}
