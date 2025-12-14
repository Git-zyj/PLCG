/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = -var_4;
                    arr_8 [i_0] [i_1] [3] = (arr_4 [i_0] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
