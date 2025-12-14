/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 += var_9;
                var_21 = (((!9) ^ (~9)));
                var_22 *= (max(247, ((((min(var_10, 9))) ? (9 ^ 247) : (247 || 9)))));
            }
        }
    }
    var_23 = (max(var_23, ((max(9, ((var_17 ? (var_5 || 255) : (min(var_7, var_1)))))))));
    #pragma endscop
}
