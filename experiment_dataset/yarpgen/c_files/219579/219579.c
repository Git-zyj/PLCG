/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_14;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 + 1] [i_2] = min((min((((var_14 ? var_10 : var_7))), (min(var_15, var_3)))), (((((min(var_5, var_9))) ? ((min(var_6, var_0))) : (min(var_5, var_8))))));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = (((max(((var_12 ? var_15 : var_12)), ((min(var_6, var_5))))) < ((var_15 ? (((var_10 ? var_6 : var_3))) : ((var_6 ? var_12 : var_10))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_16 = (-2 ? 9 : ((16 ? ((var_9 ? 17 : -19552)) : -1186307253)));
        arr_12 [i_3] = (min(-2, -2));
    }
    var_17 *= (((min(((max(var_0, var_1))), ((var_12 ? var_4 : var_1)))) | var_15));
    var_18 |= (min(((((min(var_10, var_0))) ? ((var_13 ? var_7 : var_1)) : ((var_11 ? var_4 : var_5)))), var_4));
    var_19 = var_9;
    #pragma endscop
}
