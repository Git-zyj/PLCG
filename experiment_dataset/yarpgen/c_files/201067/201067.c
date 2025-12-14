/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (arr_4 [i_0 + 2]);
                var_13 = (max(var_13, var_1));
            }
        }
    }
    var_14 |= 4095;
    #pragma endscop
}
