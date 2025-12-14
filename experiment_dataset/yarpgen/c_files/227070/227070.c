/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((var_0 % ((min(1, 41416)))));
    var_11 = min((((((1 ? 1 : var_7))) ? var_9 : (!1))), ((var_7 ? var_0 : var_7)));
    var_12 = (min(var_12, ((min(((max(((var_7 ? 1 : var_5)), var_6))), var_1)))));
    var_13 = (min(var_13, ((max(var_5, var_8)))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] |= (((((2705297466 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1])))) ? (max((((arr_1 [i_0] [1]) - (arr_1 [11] [i_0]))), (!var_0))) : var_3));
        var_14 = (min(var_14, ((((1 ? 0 : 1))))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_15 += var_2;
            var_16 = ((~((((max(var_1, -73))) ? (var_1 % var_6) : ((((arr_4 [11] [i_1]) ? var_9 : 98)))))));
            var_17 = (max(var_17, (arr_1 [i_0 + 2] [i_0 - 1])));
        }
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_18 = var_9;
                        var_19 &= (min((max((arr_12 [i_0 + 1] [i_0 - 1] [12] [i_0]), 1)), (((arr_12 [i_0 + 2] [i_0 + 2] [1] [i_0]) - (arr_12 [i_0 + 2] [i_0 + 1] [1] [i_0 + 2])))));
                        var_20 = (min(var_20, (((12914 * (min(3497251733, (((1 ? 1 : 1))))))))));
                        var_21 = (max(var_21, (((-(max((arr_7 [i_0]), (arr_6 [i_2] [i_2] [i_4]))))))));
                        var_22 = ((((((max(188, 188))) % (arr_3 [i_0 + 1] [i_2 + 2] [i_3 + 1]))) % (min((~1), var_9))));
                    }
                }
            }
            var_23 -= (min(1, ((((((arr_9 [8] [i_2 + 2] [9] [i_0]) * 67))) ? ((-73 ? var_8 : 0)) : (~var_9)))));
            var_24 += ((!(((min(1, var_4))))));
        }
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            arr_17 [i_5] = var_8;

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_21 [i_0] [i_0] [i_6] [4] &= (((((var_1 ? (arr_5 [i_0]) : (arr_5 [5])))) >= (((arr_18 [i_0 - 1] [i_5] [i_5 + 2]) * var_8))));
                var_25 ^= ((~(arr_9 [i_0] [i_0] [i_0] [i_0])));
            }
            arr_22 [i_5] [i_5] = ((((max((arr_9 [10] [11] [i_5] [3]), 235)) * (arr_0 [i_0]))));
            var_26 = (((((23336 ? -4294967277 : 1))) ? (max(var_0, ((1 ? 1 : 36020)))) : (var_8 >= 21)));
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 8;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {
                        var_27 = var_7;
                        var_28 = (min(var_28, ((~(arr_30 [i_7] [i_7 + 4] [6] [4])))));
                        var_29 = (min(var_29, var_7));
                        var_30 = arr_30 [i_7] [0] [i_7] [9];
                        arr_34 [i_7] [i_7] [i_9] [i_7] [i_7] [i_7] = var_9;
                    }
                }
            }
        }
        var_31 = (~64);
    }
    #pragma endscop
}
