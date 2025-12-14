/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 59327;
    var_15 = ((~(var_9 & var_2)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = var_10;
                    arr_9 [i_0] [4] = var_4;
                }
            }
        }
    }
    #pragma endscop
}
