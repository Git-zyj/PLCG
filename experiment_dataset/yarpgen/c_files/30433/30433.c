/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        arr_10 [i_0] [i_2] &= -8848;
                        arr_11 [i_0] [i_2 + 2] [i_1] [i_0] = -var_11;
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        arr_16 [i_0] [4] [i_2] [4] [i_0] = (var_3 >= 240);
                        var_16 ^= (((8847 || 8865) ? (!-8847) : (arr_0 [i_0])));
                        var_17 = var_0;
                    }
                    arr_17 [i_0] = -0;
                }
            }
        }
        var_18 = var_8;
    }
    for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_19 -= ((!(-940667091532452180 & -8838)));
        var_20 = (((((((var_7 ? var_9 : var_13)) * (!-31382)))) ? ((((arr_20 [1]) ? (((arr_19 [i_5 - 1]) ? 250 : 32767)) : (31 <= 5280933540016717887)))) : 249));
        var_21 ^= 9;
    }
    var_22 = (max(var_22, var_8));
    #pragma endscop
}
