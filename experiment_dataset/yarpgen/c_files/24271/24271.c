/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((max(var_3, 1570604450)), var_8));
    var_12 = (max(var_12, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = 1;
                var_14 = var_1;
            }
        }
    }
    #pragma endscop
}
