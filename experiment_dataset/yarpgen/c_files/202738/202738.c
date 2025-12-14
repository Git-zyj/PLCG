/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = max((min(var_1, (~var_5))), var_6);
        var_12 = ((32765 < (min(((var_5 ? var_6 : var_4)), -var_7))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_13 = 1;
            arr_6 [i_1] [i_2] |= var_4;
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_14 = (min(var_14, 1));
            var_15 = (!((((arr_4 [i_1] [i_1] [i_3]) - (arr_9 [i_1 - 1] [i_3] [21])))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 23;i_5 += 1)
                {
                    {
                        var_16 ^= ((-(arr_5 [i_1 - 1] [i_5 - 4])));
                        var_17 *= 1;
                        var_18 ^= (1 + -5129638305564669872);
                    }
                }
            }
        }
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            arr_18 [i_1] [i_6] = 1;

            for (int i_7 = 4; i_7 < 23;i_7 += 1)
            {
                var_19 = 1;
                var_20 |= (((arr_15 [i_1] [i_6] [i_6 + 3] [i_7] [17] [16]) ? var_0 : (arr_12 [i_1] [i_1 + 1] [i_6 + 1] [i_7 + 2])));
                var_21 = (min(var_21, (((1 >> (var_10 - 88))))));
            }
            var_22 = (arr_3 [i_6]);
            var_23 = (~1);
        }
        for (int i_8 = 3; i_8 < 22;i_8 += 1)
        {
            var_24 = (((((1 ? 8092992402595274385 : 37))) ? (arr_10 [i_1 - 1] [i_1 + 1] [i_8 + 1] [i_8 + 1]) : ((((arr_14 [12] [12] [12] [i_8 + 2] [i_8 + 2]) ? var_7 : 0)))));
            var_25 = (789435472 ? 17137 : 4049649652726367431);
        }
        arr_23 [i_1] = var_8;
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        var_26 = (1 % 3302927331);
        var_27 = ((((((arr_13 [18] [i_9] [i_9] [i_9] [i_9]) * 14360156925031104623))) ? (((max(228, 42641)))) : (arr_13 [i_9] [i_9] [i_9] [i_9] [i_9])));
    }
    for (int i_10 = 2; i_10 < 13;i_10 += 1)
    {
        arr_32 [i_10] = ((((~(arr_30 [i_10 + 2] [i_10 + 1])))) ? (1 - 2695221599) : (((arr_30 [i_10 - 1] [i_10 + 2]) ? (arr_30 [i_10 - 1] [i_10 - 1]) : (arr_30 [i_10 - 2] [i_10 + 1]))));
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                {
                    arr_39 [i_10] [i_11 - 3] [i_12] = (((var_7 | var_3) ? 9085634981880839318 : (((arr_25 [i_11] [i_12]) ? 9892901107989743132 : (!8092992402595274385)))));
                    arr_40 [i_10] [i_10] [i_12] [i_12] = ((+((((arr_24 [i_12]) != 7)))));
                    var_28 = (max(471320960, 520712353));
                }
            }
        }
    }
    var_29 = var_9;
    #pragma endscop
}
