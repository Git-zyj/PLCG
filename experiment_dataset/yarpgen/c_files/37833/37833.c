/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_5));
    var_17 = (~var_12);
    var_18 = max(511, 2147483647);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (max(2147483647, (-2147483647 - 1)));
                arr_8 [i_1] [4] [7] = var_3;
            }
        }
    }
    #pragma endscop
}
