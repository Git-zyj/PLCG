/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_2] = 229;
                    var_16 = var_1;
                }
            }
        }
    }
    var_17 = 4876417332730141035;
    #pragma endscop
}
