/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = var_6;
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (max(-254, ((((arr_4 [i_0]) ? -1 : -8)))));
                var_15 = (max(var_15, (arr_0 [i_0])));
            }
        }
    }
    #pragma endscop
}
