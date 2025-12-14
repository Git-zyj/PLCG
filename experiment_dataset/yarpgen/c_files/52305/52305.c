/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = (min(var_11, (((var_10 ^ (((var_0 && (var_4 | var_6)))))))));
        var_12 = ((var_0 ^ (((var_3 + var_9) * (var_8 && var_1)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_13 = ((var_2 * var_10) | var_9);
        var_14 ^= var_9;
        var_15 |= var_3;
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                arr_11 [8] = ((((((var_1 ^ var_5) < var_8))) / (((57262 ^ 15243) << (var_8 - 50021)))));
                var_16 = (max(var_16, (var_6 ^ var_10)));
            }
        }
    }
    #pragma endscop
}
