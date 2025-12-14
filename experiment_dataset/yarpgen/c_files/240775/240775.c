/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 6;i_0 += 1)
    {
        var_11 |= ((!(((~(max(var_6, var_2)))))));
        arr_2 [i_0] [i_0] = var_9;
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_7 [7] [i_2] = 8641;
            arr_8 [4] [i_2] = (max((max(((var_7 ? -42 : var_8)), 0)), 128569822));

            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                arr_13 [i_2] [i_2] [i_2] = ((1551556025 ? ((((arr_4 [i_2] [16]) && (((0 ? var_1 : 53)))))) : (var_2 / 8626)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_20 [i_1] [2] [i_3] [5] [1] = -99;
                            arr_21 [3] [i_1] [i_2] [1] [22] [13] = ((~(~var_8)));
                            arr_22 [i_5] [i_2] = ((((((arr_14 [i_1 - 1] [i_3 - 1]) || (arr_14 [i_1 - 1] [i_3 - 1])))) >= (arr_14 [i_1 - 1] [i_3 - 1])));
                            arr_23 [i_1] [15] [5] [i_1] = ((((arr_4 [i_1 + 1] [i_1 + 1]) ? (((var_3 ? (-2147483647 - 1) : var_0))) : (arr_17 [i_3 - 1] [13] [3] [i_1] [i_3 - 1]))) >= ((((((((arr_9 [i_1] [i_2] [21] [16]) ? var_9 : var_7))) <= ((var_3 ? var_6 : (arr_3 [i_1]))))))));
                            var_12 = var_9;
                        }
                    }
                }
                var_13 = ((var_3 / ((~(max((arr_11 [i_1] [i_2] [i_3] [i_3]), var_5))))));
            }
        }
        arr_24 [i_1] = (((((((var_3 ? -113 : var_1))) ? ((var_6 ? var_10 : -25)) : 1068130327)) & ((~((1040384 ? (arr_11 [20] [20] [i_1] [i_1]) : -1))))));
        arr_25 [20] = 10946074801427539980;
        arr_26 [i_1] = (max(var_0, (max(var_4, (~6285010361232417431)))));
    }
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 10;i_7 += 1)
        {
            {
                var_15 = ((-(((((var_1 ? var_6 : var_1))) ? var_6 : (~-2147483628)))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        {
                            var_16 = min(var_3, (~var_4));
                            var_17 = (((+-0) | (((~-40) * -1))));
                            arr_36 [i_8] = ((!(((-(arr_14 [1] [i_8 - 1]))))));
                            var_18 = (max(var_18, ((((((-127 - 1) ^ 18446744073709551594)) / (~8))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
