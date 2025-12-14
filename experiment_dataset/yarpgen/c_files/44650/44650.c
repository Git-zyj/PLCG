/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((1 ? 1 : 27360));
    var_15 = ((156 ? 1 : 1));
    var_16 = (!var_13);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = (156 == 2724752015);
                    arr_10 [i_0] [i_0] [i_0] = 1;
                }
            }
        }
    }
    #pragma endscop
}
