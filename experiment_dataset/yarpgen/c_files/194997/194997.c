/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_9 ^ 54);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = 655507608;
                    arr_8 [i_0] [i_1] [11] [13] = (((arr_2 [i_0 + 1] [i_0 - 1]) & ((185 ? 1 : 4355))));
                }
            }
        }
    }
    var_18 &= (max(var_8, (min(((min(66, var_10))), 54611))));
    var_19 = var_8;
    #pragma endscop
}
