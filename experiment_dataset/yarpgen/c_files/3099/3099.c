/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (((2 ? 54378 : -122)));
                    var_13 = var_2;
                    arr_9 [i_0] = var_7;
                }
            }
        }
    }
    var_14 = ((var_2 & (~-110)));
    var_15 ^= ((((7 ? ((((-127 - 1) ? var_4 : var_9))) : ((var_6 ? 1 : 11894262610695611668))))) ? (((((156 ? 70 : var_11))) ? -var_4 : var_0)) : (((var_11 ? var_3 : 65535))));
    #pragma endscop
}
