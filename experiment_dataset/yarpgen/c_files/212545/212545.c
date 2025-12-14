/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_1 - 2] [i_1 - 2] [i_0] = (max(var_9, 100));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_11 = -1073739776;
                        arr_11 [i_3] [i_3] [i_3] [i_0] = -79;
                    }
                }
            }
        }
        var_12 += ((min(-1073739777, 79)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_13 &= var_9;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_14 = ((((((min(196608, -79))) ? 1037803627 : (((-99 ? 31053 : (arr_18 [i_7] [i_5] [i_4] [i_0])))))) | ((max(var_8, var_2)))));
                                arr_23 [i_4] [i_4] = ((((((~4294770706) << (var_10 - 4331)))) ? (((((var_0 ? 31055 : var_7))) ? (max(var_0, 31055)) : (28 | var_8))) : var_6));
                            }
                        }
                    }
                    var_15 = ((max(var_2, (~var_4))));
                }
            }
        }
        var_16 = ((min(var_0, (arr_16 [i_0] [i_0] [i_0]))));
    }
    var_17 = var_0;
    #pragma endscop
}
