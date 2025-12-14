/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_9;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((min(var_8, var_8)) & (((var_17 < ((var_1 ? var_6 : 0))))));
        var_20 ^= min(((var_10 * ((max(88, var_2))))), ((var_16 ? var_3 : var_6)));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_21 |= var_14;

            /* vectorizable */
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                arr_10 [i_0] = var_14;
                arr_11 [i_0 + 1] [i_0] [i_2 - 1] = ((-18823 ? var_4 : var_3));
                arr_12 [i_0] [i_0] = var_7;
                arr_13 [i_0] [i_1] [i_0] = var_2;
            }
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_22 = ((var_1 ^ ((max(var_16, var_11)))));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_23 = ((5865117451356016205 ? (var_5 && var_2) : (var_7 % 9)));
                            var_24 = (((var_6 ^ 0) ? ((var_2 ? var_6 : var_11)) : (var_4 * var_3)));
                            var_25 -= var_17;
                        }
                    }
                }
                var_26 += (min(var_10, ((min(var_7, var_11)))));
                arr_23 [i_3] [i_0] [i_0] [i_0] = 49;
            }
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                var_27 = (min((min(var_3, -1)), (var_18 / var_12)));
                var_28 = var_12;
            }
        }
        arr_27 [i_0] [i_0] = var_0;
        var_29 = var_8;
    }
    #pragma endscop
}
