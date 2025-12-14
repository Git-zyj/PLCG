/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = -898812124104200160;
                arr_5 [i_0] [i_1] = -19603;
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}
