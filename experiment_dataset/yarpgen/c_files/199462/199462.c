/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((((min(var_8, var_6)) / ((2147483642 << (var_9 - 10)))))), ((var_2 & (max(var_8, var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [11] = -17463;
                var_17 ^= ((((var_5 >= 0) == var_9)));
            }
        }
    }
    #pragma endscop
}
