/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [7] = var_14;
        var_17 = ((~((var_9 ? 1 : var_3))));
    }
    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {
        var_18 = var_6;
        arr_7 [i_1] = (arr_6 [i_1]);
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_19 = (((max(var_2, (arr_11 [i_2] [i_3] [i_6]))) + var_13));
                                arr_20 [i_2] [i_2] = ((((min(((0 ? (arr_10 [i_2]) : var_5)), ((max(var_16, var_5)))))) ? (var_14 && var_3) : ((max(122, var_4)))));
                                var_20 = ((((var_0 ? var_2 : (((arr_15 [i_3] [i_3]) >> (((arr_14 [i_2] [i_3] [i_4] [i_5] [i_6] [i_6]) - 39098))))))) ? ((var_3 ^ (((arr_18 [i_2] [i_3] [i_4] [i_5] [i_2] [i_2] [i_2]) ? 897566836 : var_3)))) : var_5);
                                arr_21 [i_2] = ((-(((var_2 ? 0 : (arr_12 [i_2] [12] [i_4]))))));
                            }
                        }
                    }
                    arr_22 [i_2] [i_3] [i_2] [i_2] = (((arr_12 [4] [i_3] [i_4]) ? (((+(((arr_14 [9] [i_2] [16] [1] [1] [i_4]) % 1))))) : var_8));
                    arr_23 [i_2] [i_3] [i_2] [i_2] = (min((((arr_17 [i_4] [i_3]) ? var_6 : (arr_16 [i_2] [i_3] [i_4]))), (var_4 | var_14)));
                    arr_24 [i_4] [i_3] [i_2] = -20271;
                }
            }
        }
        var_21 -= (!var_4);
        arr_25 [i_2] [i_2] = 3397400460;
    }
    for (int i_7 = 3; i_7 < 18;i_7 += 1)
    {
        arr_28 [i_7] = (max(1, 1));
        arr_29 [i_7] [i_7] = ((((((arr_18 [1] [i_7] [i_7 - 3] [i_7] [i_7] [i_7] [i_7]) << (116 - 112))) | (((max(var_12, var_15)))))));

        for (int i_8 = 4; i_8 < 18;i_8 += 1)
        {
            arr_32 [i_7] [i_7] = ((((arr_14 [i_7] [i_8] [i_7] [i_7 - 1] [i_8 - 2] [i_8 - 2]) ? (((var_15 / (arr_19 [i_7 - 2] [i_7] [i_7] [i_8 - 1] [i_8] [i_8])))) : (((arr_9 [i_7]) - 2860673731)))) - ((((1 && var_8) ? -6 : ((-(arr_13 [i_7] [i_7] [13])))))));
            var_22 = (((((-14216 || (((var_3 ? var_1 : var_14)))))) >> (var_7 / 14231)));
            var_23 = (((((~((6756485184757958297 ? var_2 : var_8))))) ? ((var_13 ? (!var_6) : (var_6 + var_14))) : (((((min(0, 1815819472))) ? 1815819472 : var_4)))));
        }
    }
    var_24 = var_5;
    var_25 = max(((var_3 ? -var_16 : (max(-81, var_8)))), ((((max(var_12, var_12))) ? (var_9 & 1434293565) : (var_2 - var_9))));
    #pragma endscop
}
