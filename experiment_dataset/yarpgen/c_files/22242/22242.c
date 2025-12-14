/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = ((var_6 ? ((28 << (1057777299 - 1057777293))) : (((((4851 ? 15 : -74))) ? ((-27919 ? 2046586858 : 65535)) : ((var_6 ? -74 : -1876570992))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((var_10 ? var_8 : var_12));
                    var_17 = ((((max(626506976010468882, -55))) ? -var_1 : 2288546320));
                }
            }
        }
    }
    #pragma endscop
}
