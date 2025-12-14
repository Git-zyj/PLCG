/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] [i_0] [i_0] = (((-9669 ? var_4 : (arr_2 [i_0 + 1] [i_0]))));
                    var_12 &= (!-0);
                    arr_7 [i_2] = 2018589982;
                }
            }
        }
    }
    var_13 = ((2018589987 ? 2018589982 : 9668));
    #pragma endscop
}
