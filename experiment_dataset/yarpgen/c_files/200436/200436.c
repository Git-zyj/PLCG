/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_17 ^= ((((max(var_15, -var_15))) ? (!-116) : (((~120) ? (!var_11) : -2701019651688479650))));
                        arr_11 [i_0] [i_2 + 1] [i_0] [i_1] [i_0] = (((var_5 >= var_15) + var_13));
                        var_18 = var_10;
                        arr_12 [0] [i_0] = 2701019651688479645;
                    }
                }
            }
        }
        arr_13 [0] [0] |= ((((var_7 ? 2701019651688479649 : var_14))) ? (min(var_12, -2701019651688479652)) : (~var_2));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_19 = (max(var_19, (((2701019651688479638 ? -2701019651688479669 : var_10)))));
        var_20 = (!var_3);
        var_21 = ((var_10 ? 2701019651688479660 : var_14));
        var_22 = (max(var_22, (-2701019651688479642 / var_3)));
        var_23 = (max(var_23, ((((((-2701019651688479642 ? var_0 : var_10))) ? -2701019651688479634 : (((39 ? var_10 : var_16))))))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_24 = -2701019651688479629;
        arr_18 [i_5] [i_5] = ((((((!var_15) ? var_6 : var_5))) ? ((((!var_16) ? 33554431 : var_12))) : (((((var_16 ? var_5 : var_10))) ? ((5011587978364877053 ? var_4 : -2701019651688479650)) : (((0 ? 4261412865 : 402653184)))))));
    }
    var_25 = -105;
    var_26 += ((((min((((-103 ? var_13 : var_8))), ((var_10 ? -2701019651688479650 : var_9))))) ? var_5 : ((var_3 ? (-107 * -34) : (var_11 % var_3)))));
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            {
                var_27 = (((((max(var_6, var_6))) ? (128 * var_0) : ((min(var_0, 37))))));
                var_28 = (((((24 | var_14) ? var_14 : (((var_12 ? 3864781282 : var_4))))) << (((((((20 ^ 28) + var_12)) + 735051055)) - 51))));
                var_29 = (max(var_29, var_10));
            }
        }
    }
    #pragma endscop
}
