/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] &= (((((-((max(var_0, var_15)))))) ? (((47732 ? 7473 : var_16))) : (((var_11 - var_13) + 0))));
        var_17 &= var_0;
    }
    var_18 = ((~(((!(-9223372036854775807 - 1))))));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 7;i_3 += 1)
            {
                {
                    var_19 = var_12;
                    arr_11 [i_3] [i_3] [i_3] [3] = ((var_12 <= (3697449978398810295 < var_6)));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_20 = ((((((!((min(29496, 29108))))))) | (((((2220217839 ? 2220217839 : var_8))) ? var_13 : var_7))));
        arr_15 [i_4] [i_4] &= (((max(var_7, 281337537757184)) / ((min(var_13, 47747)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        var_21 = (var_0 ? var_5 : var_1);

                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            var_22 = (13677 % var_7);
                            arr_31 [i_8] [i_5] [i_5] [i_8] [16] [i_8] = (var_6 != 65517);
                            var_23 = (~-3697449978398810296);
                            var_24 = (var_6 || var_14);
                        }
                        var_25 = 12902;
                        var_26 ^= (((64 * var_6) & var_14));
                        var_27 = (var_15 + 52640);
                    }
                }
            }
        }
        var_28 = var_4;
    }
    #pragma endscop
}
