/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 2060943841;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2 - 3] [i_0 + 1] = (((((arr_0 [i_0 - 2]) * (arr_0 [i_0 - 2])))) - (((arr_6 [i_0 + 2] [i_1 + 1] [i_0] [9]) - var_8)));
                    arr_9 [i_0] [i_2 - 1] = ((112 > (!-120)));
                }
            }
        }
    }
    #pragma endscop
}
