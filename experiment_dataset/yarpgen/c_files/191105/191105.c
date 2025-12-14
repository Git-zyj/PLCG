/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [i_0 - 2] = ((var_3 <= (!var_6)));
                    var_15 = (min(243, (min(var_10, (7 ^ var_6)))));
                }
            }
        }
    }
    var_16 = var_0;
    var_17 = var_12;
    #pragma endscop
}
