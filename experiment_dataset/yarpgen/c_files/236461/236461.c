/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    var_16 = ((((var_0 && ((((-9223372036854775807 - 1) / var_2))))) ? var_9 : ((var_11 ^ (~16530)))));
    var_17 = var_8;
    var_18 = 16530;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 -= (arr_1 [i_0]);
        var_20 = (1 % ((49000 - (arr_0 [i_0]))));
        var_21 = (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_3] [i_3 + 4] [i_1] = (((49021 > 9223372036854775788) ? 16530 : (((var_13 ^ 65533) ? -3155894213583413824 : var_0))));
                        var_22 = (((arr_11 [i_3] [i_1] [i_3 + 3] [i_1] [i_2]) != (((arr_3 [i_1 + 2]) ? var_5 : (max(1, var_5))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_23 = (((((var_2 ? var_1 : var_9))) ? ((-7452 & (arr_18 [i_4] [i_4]))) : ((((arr_17 [i_5] [i_5] [i_4 - 1] [i_5]) != var_1)))));
                    var_24 = -0;
                }
            }
        }
        var_25 -= (((var_14 / var_12) / (arr_16 [i_4] [i_4] [i_4])));
    }
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        var_26 = 15;
        arr_21 [i_7] [i_7] = 1;
        var_27 -= var_3;
    }
    #pragma endscop
}
