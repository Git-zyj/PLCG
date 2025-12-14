/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_6));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = (arr_6 [i_0 + 2] [i_0 + 1] [i_0 + 1]);
                    arr_9 [i_1] [8] = ((1102850782 ? (~3192116513) : ((3192116513 / (1102850782 && 65520)))));
                }
            }
        }
    }
    var_12 = ((var_2 || (!var_4)));
    #pragma endscop
}
