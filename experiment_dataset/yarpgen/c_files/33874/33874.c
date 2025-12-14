/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 ^= ((((max(var_14, (max(182, 53576))))) - var_7));
                    var_16 |= min((min(var_0, 11960)), var_5);
                }
            }
        }
        var_17 *= var_10;
    }
    var_18 ^= ((var_9 ? (((!var_6) ? (10122 <= 39) : ((min(0, var_7))))) : 11959));
    #pragma endscop
}
