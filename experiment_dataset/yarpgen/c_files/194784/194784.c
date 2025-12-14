/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = 157;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] = (arr_1 [i_0 - 1]);
                    arr_10 [i_0] [i_1] [i_2] = (arr_5 [i_0 + 2] [i_0 + 1] [i_0]);
                }
            }
        }
    }
    var_15 = 94;
    var_16 = var_0;
    var_17 = ((3132905237658123741 ? 63 : 32524));
    #pragma endscop
}
