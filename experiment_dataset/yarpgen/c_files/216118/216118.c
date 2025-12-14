/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_8 [i_1 - 1] [i_1] [i_1] = -95;
                var_18 |= 252;
                var_19 = (min(var_19, 116));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                {
                    arr_17 [i_2] [i_3] [i_4] [i_4] = 1;
                    var_20 = (max(var_20, 8754930653168619702));
                }
            }
        }
    }
    #pragma endscop
}
