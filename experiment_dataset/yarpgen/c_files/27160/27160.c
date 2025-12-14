/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~((((max(var_4, var_10))) ? var_4 : var_9))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_21 = var_11;
        arr_4 [i_0] = ((-((var_6 ? (arr_1 [i_0]) : 268435455))));
        arr_5 [i_0] = var_2;
        var_22 ^= (!var_10);
        arr_6 [i_0] [i_0] = 4026531841;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] [i_1] = (~((~(arr_3 [i_1]))));
        arr_11 [i_1] [7] &= var_19;
        arr_12 [i_1] [i_1] = -var_6;
    }
    var_23 = ((((var_1 ? var_9 : var_2))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            {
                arr_18 [i_2] [i_3] [i_3] = var_6;
                var_24 -= (max(0, var_3));
            }
        }
    }
    #pragma endscop
}
